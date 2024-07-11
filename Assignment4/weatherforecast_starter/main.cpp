/* 
Assignment 4: Weather Forecast

This assignment works with template functions and lambdas to become the best weather forecaster
at the Stanford Daily. Be sure to read the assignment details in the PDF.

Submit to Paperless by 11:59pm on 5/10/2024.
*/

/**
 * 第一部分:温度转换器 
    编写一个模板函数convert_f_to_c,可以将华氏温度转换为摄氏温度

    第二部分:每周预报 
    编写一个函数get_forecast,给定一周内每天的温度数据,可以计算出每天的最高温、最低温和平均温度

    第三部分:综合应用 
    在main函数中,将温度数据从华氏转换为摄氏,并使用get_forecast函数计算出每天的最高温、最低温和平均温度,将结果输出到output.txt文件中
 */

// TODO: import anything from the STL that might be useful!
// TODO: write convert_f_to_c function here. Remember it must be a template function that always returns
// a double.
// [function definition here]
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <numeric>

// 模板函数：将华氏温度转换为摄氏温度
template<typename T>
double convert_f_to_c(T Fahrenheit) {
    return (Fahrenheit - 32) * 5.0 / 9.0;
}

// 计算每天平均温度的函数
auto get_average = [](const std::vector<std::vector<double>>& readings) {
    std::vector<double> avg;
    for (const auto& day : readings) {
        double sum = std::accumulate(day.begin(), day.end(), 0.0);
        avg.push_back(sum / day.size());
    }
    return avg;
};

// 计算每天最高温度的函数
auto get_maximum = [](const std::vector<std::vector<double>>& readings) {
    std::vector<double> max;
    for (const auto& day : readings) {
        max.push_back(*std::max_element(day.begin(), day.end()));
    }
    return max;
};

// 计算每天最低温度的函数
auto get_minimum = [](const std::vector<std::vector<double>>& readings) {
    std::vector<double> min;
    for (const auto& day : readings) {
        min.push_back(*std::min_element(day.begin(), day.end()));
    }
    return min;
};

// 获取天气预报的函数（最高温度、最低温度和平均温度）
template<typename Function>
std::vector<double> get_forecast(const std::vector<std::vector<double>>& readings, Function fn) {
    return fn(readings);
}

int main() {
    // 输入的华氏温度数据
    std::vector<std::vector<double>> readings = {
        {70, 75, 80, 85, 90},
        {60, 65, 70, 75, 80},
        {50, 55, 60, 65, 70},
        {40, 45, 50, 55, 60},
        {30, 35, 40, 45, 50},
        {50, 55, 61, 65, 70},
        {40, 45, 50, 55, 60}
    };

    std::string filename = "output.txt";
    std::ofstream ofs(filename);

    if (!ofs.is_open()) {
        std::cerr << "无法打开输出文件。\n";
        return 1;
    }

    // 将温度从华氏转换为摄氏
    auto convert = [&readings, &ofs]() {
        ofs << "每天的温度（摄氏）：\n";
        for (auto &day : readings) {
            for (auto &temp : day) {
                temp = convert_f_to_c(temp);
                ofs << temp << ' ';
            }
            ofs << '\n';
        }
        ofs << '\n';
    };
    convert();

    // 计算并输出每天的最高温度
    auto max_temps = get_forecast(readings, get_maximum);
    ofs << "每天的最高温度（摄氏）：\n";
    for (const auto& temp : max_temps) {
        ofs << temp << ' ';
    }
    ofs << '\n';

    // 计算并输出每天的最低温度
    auto min_temps = get_forecast(readings, get_minimum);
    ofs << "\n每天的最低温度（摄氏）：\n";
    for (const auto& temp : min_temps) {
        ofs << temp << ' ';
    }
    ofs << '\n';

    // 计算并输出每天的平均温度
    auto avg_temps = get_forecast(readings, get_average);
    ofs << "\n每天的平均温度（摄氏）：\n";
    for (const auto& temp : avg_temps) {
        ofs << temp << ' ';
    }
    ofs << '\n';

    ofs.close();
    return 0;
}

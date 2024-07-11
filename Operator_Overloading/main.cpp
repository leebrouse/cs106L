#include<iostream>
class Complex
{
private:
   double x,y;
public:
    Complex(void):x(0),y(0){}
    Complex(double x,double y):x{x},y{y}{}  
    Complex(const Complex &c ){
        this->x=c.x;
        this->y=c.y;
    }
    Complex &operator=(const Complex &rhs){
        this->x=rhs.x;
        this->y=rhs.y;
        return *this;
    }

    Complex &operator+=(const Complex &rhs){
        this->x+=rhs.x;
        this->y+=rhs.y;
        return *this;
    }

    //What is friend ,how to use it???
    friend std::ostream &operator<<(std::ostream  &out,const Complex &c);
    friend Complex operator+(const Complex &rhs,const Complex &lhs);
    friend bool operator==(const Complex &rhs,const Complex &lhs);
};

std::ostream &operator<<(std::ostream  &out,const Complex &c){
    out<<c.x<<'+'<<c.y<<'i';
    return out;
}

Complex operator+(const Complex &rhs,const Complex &lhs){
    Complex res(rhs.x+lhs.x,rhs.y+lhs.y);
    return res;
}

 bool operator==(const Complex &rhs,const Complex &lhs){
    return (rhs.x==lhs.x)&&(rhs.y==lhs.y);
 }

int main(int argc, char const *argv[])
{
    Complex c(3,5);

    Complex rhs(1,2);
    Complex lhs(4,5);
    //std::cout<<rhs+lhs<<'\n';
    //std::cout<<(rhs==lhs)<<'\n';
    Complex temp=(rhs+=lhs);
    std::cout<<temp<<'\n';
    //std::cout<<c<<'\n';
    return 0;
}

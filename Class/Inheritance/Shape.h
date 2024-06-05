// 在cpp中有多继承
class Shape
{
public:
    virtual double area() const =0;
};

class Circle :public Shape{
    private:
        double _radius;
    
    public:
        Circle(double radius): _radius(radius){};
        double area() const{
            return 3.14*_radius*_radius;
        }
};


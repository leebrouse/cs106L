class shape{
    public:
        virtual double area()const=0;
};

class Rectangle : public shape{
private:
    double _width,_height;

public:
    Rectangle(double height,double width):_height{height},_width{width}{};
   
    double area() const{
        return _width*_height;
    }
};
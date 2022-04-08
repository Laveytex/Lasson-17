#include <iostream>



class Vector
{
public:
    Vector()
    {}
    Vector(double _x, double _y, double _z, double _Lenght) : x(_x), y(_y),z(_z), Lenght(_Lenght)
    {}
    void Show()
    {
        std::cout << '\n' << ' ' << x <<' ' << y << ' ' << z << '\n';
    }
    void GetLenght()
    {
       Lenght = sqrt(pow(x,2) + pow(y, 2) + pow(z, 2));

       std::cout << Lenght << '\n';
    }
private:
    double x=-2;
    double y=4;
    double z=-4;
    double Lenght = 0;
};

int main()
{

    Vector Vector, GetLenght;
    Vector.Show();
    Vector.GetLenght();

}

#include <iostream>
using namespace std;

//declaration section
// DO NOT MODIFY
class Triangle {
public:
    Triangle();

    void setDimensions(double b, double h, double s1, double s2, double s3);

    double calcArea();

    double calcPerimeter();

private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;
};
//END DO NOT MODIFY

//implementation section
//TODO Implement all 4 Functions of the Triangle Class

Triangle::Triangle()
{
      base = 0;
      height = 0;
      side1 = 0;
      side2 = 0;
      side3 = 0;
}

void Triangle::setDimensions(double b, double h, double s1, double s2, double s3)
{
      if ((b <= 0) || (h <= 0) || (s1 <= 0) || (s2 <= 0) || (s3 <= 0))
      {
            cout << "\nPlease enter a number greater than 0";
      }
      else
      {
            base = b;
            height = h;
            side1 = s1;
            side2 = s2;
            side3 = s3;
      }
}

double Triangle::calcArea()
{
      double area;
      area = 0.5 * base * height;
      return area;
}

double Triangle::calcPerimeter()
{
      double perim;
      perim = side1 + side2 + side3;
      return perim;
}
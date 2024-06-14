#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

class Triangle
{
private:
    double S1 = 0.0;  //Sn = side n 
    double S2 = 0.0;
    double S3 = 0.0;
    double square = 0;

    double perimetr = 0;
    bool error = false;

    void Perimetr();


    void Square();


public:
    bool getErrorState() const;

    Triangle();


    Triangle(double S1, double S2, double S3);

    void init(double S1, double S2, double S3);

    friend istream& operator>>(istream& input, Triangle& t);
    friend ostream& operator<<(ostream& output, Triangle& t);

    double getS1() const;
    double getS2() const;
    double getS3() const;



    double GetSquare() const;

    double GetPerimetr() const;


    bool IsIsosceles() const;//рівнобедренний

    bool IsEquilateral() const; //рівносторонній



    bool IsRectangular() const;   // прямокутний     


    Triangle& operator=(const Triangle& Tn);


    bool operator==(const Triangle Tn);


    bool operator>(const Triangle Tn);// a>t2 if(a>Tn) {}

    bool operator<(const Triangle Tn);

};//кінець класу

void bubblePerimeterSort(Triangle data[], int lenD);  //бульбашковий спосіб сортування для периметрів

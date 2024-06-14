#include "triangleclass.h"



void Triangle::Perimetr()
{
    if (error)
    {
        return;
    }
    perimetr = S1 + S2 + S3;
}

void Triangle::Square()
{
    double p = 0;
    if (error)
    {
        return;
    }
    p = (S1 + S2 + S3) / 2.0;
    square = sqrt(p * (p - S1) * (p - S2) * (p - S2));
}

bool Triangle::getErrorState() const
{
    return error;
}
Triangle::Triangle()
{
    S1 = S2 = S3 = 0.0;
}

Triangle::Triangle(double S1, double S2, double S3)
{
    init(S1, S2, S3);
}

void Triangle::init(double S1, double S2, double S3)
{
    if (S1 + S2 > S3 && S1 + S3 > S3 && S2 + S3 > S1)
    {
        cout << "The triangle exists!" << endl;
        this->S1 = S1;
        this->S2 = S2;
        this->S3 = S3;
        Perimetr();
        Square();
    }
    else if (S1 <= 0 && S2 <= 0 && S3 <= 0)
    {
        cout << "The triangle not exists!";
        error = true;
    }
    else
    {
        cout << "The triangle not exists!";
        error = true;
    }
}


double Triangle::getS1()const { return S1; };
double Triangle::getS2()const { return S2; };
double Triangle::getS3()const { return S3; };



double Triangle::GetSquare() const
{
    return square;
}

double Triangle::GetPerimetr() const
{
    return perimetr;
}

bool Triangle::IsIsosceles() const//рівнобедренний
{
    if (S1 == S2 || S1 == S3 || S2 == S3)
    {
        return true;
    }
    return false;
}

bool Triangle::IsEquilateral() const //рівносторонній
{
    if ((S1 == S2) && (S1 == S3) && (S2 == S3))
    {
        return true;
    }
    return false;
}


bool Triangle::IsRectangular() const   // прямокутний     
{
    if (S1 * S1 + S2 * S2 == S3 * S3 || S2 * S2 + S3 * S3 == S1 * S1 || S1 * S1 + S3 * S3 == S2 * S2) //гіпотенуза
    {
        return true;
    }
    return false;
}

Triangle& Triangle::operator=(const Triangle& Tn)
{
    S1 = Tn.S1;
    S2 = Tn.S2;
    S3 = Tn.S3;
    square = Tn.square;
    perimetr = Tn.perimetr;
    error = Tn.error;
    return *this;
}

bool Triangle::operator==(const Triangle Tn)
{
    bool res = false;
    if (square == Tn.GetSquare())
        res = true;

    return res;
}

bool Triangle::operator>(const Triangle Tn)// a>t2 if(a>Tn) {}
{
    bool res = false;
    if (square > Tn.GetSquare())
        res = true;

    return res;
}
bool Triangle::operator<(const Triangle Tn)
{
    bool res = false;
    if (square < Tn.GetSquare())
        res = true;
    return res;
}


istream& operator>>(istream& input, Triangle& t)
{
    double d1, d2, d3; //S1
    cout << endl << "Enter data:" << endl;
    cout << "Side 1 = ";
    input >> d1;
    cout << "Side 2 = ";
    input >> d2;
    cout << "Side 3 = ";
    input >> d3;

    t.init(d1, d2, d3);

    return input;
}

ostream& operator<<(ostream& output, Triangle& t)
{
    output << "S1 = " << t.S1 << " " << endl;

    output << "S2 = " << t.S2 << " " << endl;

    output << "S3 = " << t.S3 << " " << endl;

    output << "P = " << t.GetPerimetr() << endl;

    output << "S = " << t.GetSquare() << endl;

    return output;

}

void bubblePerimeterSort(Triangle data[], int lenD)   //бульбашковий спосіб сортування для периметрів
{
    Triangle tmp;
    for (int i = 0; i < lenD; i++) {
        for (int j = (lenD - 1); j >= (i + 1); j--) {
            if (data[j].GetPerimetr() > data[j - 1].GetPerimetr())
            {
                tmp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = tmp;
            }
        }
    }
}
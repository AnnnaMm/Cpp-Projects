#include"CD.h" //Cd.cpp
CD::CD()
{

}
CD::CD(string NAME, string THEME, int SIZE, DATE date)
{
    this->NAME = NAME;
    this->THEME = THEME;
    this->SIZE = SIZE;
    this->date = date;

    
}
CD::CD(CD& other)
{
    this->NAME = other.NAME;
    this->THEME = other.THEME;
    this->SIZE = other.SIZE;
    this->date = other.date;
}


void CD::WriteName(string NAME)
{
    this->NAME = NAME;
}
string CD::GetName()
{
    return this->NAME;
}


void CD::WriteTheme(string THEME)
{
    this->THEME = THEME;
}
string CD::GetTheme()
{
    return this->THEME;
}


void CD::WriteSize(int SIZE)
{
    this->SIZE = SIZE;
}
int CD::GetSize()
{
    return this->SIZE;
}

void CD::WriteMounth( int MOUNTH)
{
    date.MOUNTH = MOUNTH;
   
}
int CD::GetMounth()
{
    return this->date.MOUNTH;
}

void CD::WriteYear(int YEAR)
{
    date.YEAR = YEAR;
    
}
int CD::GetYear()
{
    return this->date.YEAR;
}
void CD::ReadFromKeyboard()
{
    cout << "Name of CD : ";
    cin >> this->NAME;
    cout << "---------------------" << endl;
    cout << "Theme of CD : ";
    cin >> this->THEME;
    cout << "---------------------" << endl;
    cout << "Size of CD : ";
    cin >> this->SIZE;
    cout << "---------------------" << endl;
    cout << "Mounth of CD : ";
    cin >> this->date.MOUNTH;
    cout << "---------------------" << endl;
    cout << "Year of CD : ";
    cin >> this->date.YEAR;
    cout << "---------------------" << endl;
    cout << "_______________________________" << endl;
    cout << "_______________________________" << endl;
    

}

CD::~CD()
{
    cin.get(); cin.get();
}
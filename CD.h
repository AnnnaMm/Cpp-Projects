// CD header
#include <iostream>
#include <string>
using namespace std;
struct DATE
{
    int MOUNTH;
    int YEAR;
};
class CD
{
private:
    DATE date;
    string NAME; //імя альбому
    string THEME; //тема альбому
    int SIZE; // розмір
    /*int DATE; */
    /*struct DATE
    {
        int MOUNTH;
        int YEAR;
        DATE();
        DATE(int MOUNTH, int YEAR); //???
        DATE(DATE& next);
        void WriteMounth(int MOUNTH);
        int GetMounth();

        void WriteYear(int YEAR);
        int GetYear();
        void ReadFromKeyboardd();
        
    };*/
public:
   
    CD();
    CD(string NAME, string THEME, int SIZE, DATE date);
    CD(CD& other);
    

    void WriteName(string NAME); 
    string GetName();

    void WriteTheme(string THEME);
    string GetTheme();

    void WriteSize(int SIZE);
    int GetSize();

    void WriteMounth(int MOUNTH);
     int GetMounth();

    void WriteYear(int YEAR);
     int GetYear();

   void ReadFromKeyboard();
   
   

    ~CD(); 
};

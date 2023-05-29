#include <iostream>

using namespace std;

class car                                                       // class of car 
{
public:
    string name = "Mustang";                                    // properties of car class --> name 
    int man_year = 1987;                                        // year
    double price = 75.9000;                                     //price

};


int main()
{
    car obj;                                                    //object of class car --> having properties of car
    cout.precision(4);                                          //this function sets the precision value for double datatype
    cout << obj.name << endl << obj.man_year << endl << "$" << fixed << obj.price << endl;      //through the object (obj) printing the properties of class (car)
    return 0;
}
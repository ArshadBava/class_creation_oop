#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};    

int main(){
    person per1;
    person per2;

    per1.name = "Arshad";
    per1.age = 21;
    per2.name = "Alex";
    per2.age = 25;

    per1.display();
    per2.display();

    return 0;
}

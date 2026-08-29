#include <iostream>
#include <string>
using namespace std;
class person
{
public:
    string name;
    int number;
    int height;
    person(string n, int num, int h)
    {
        name = n;
        number = num;
        height = h;
    }
    void display()
    {
        cout << "[" << name << "," << number << "," << height << "]";
    }
};
void swapObjects(person &obj1, person &obj2)
{
    person temp = obj1;
    obj1 = obj2;
    obj2 = temp;
}
int main()
{
    person obj1("Morty", 1234, 6);
    person obj2("Rick", 5678, 5);

    cout << "Before swap:" << endl;
    obj1.display();
    obj2.display();

    swapObjects(obj1, obj2);

    cout << "After swap:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
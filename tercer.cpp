#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    string name;
    int age;
    Persona(string n, int e)
    {
        name = n;
        age = e
    }
    ~Persona()
    {
        cout << "Destructor" << endl;
    }
    void saludar()
    {
        cout << "Mi nombre es: " << name << endl;
    }
};

int main()
{
    Persona *p = new Persona("ALEJANDRITA", 25);
    Persona *p2 = new Persona("Boba", 66);

    p->saludar();

    p2->saludar();

    delete p2;
}
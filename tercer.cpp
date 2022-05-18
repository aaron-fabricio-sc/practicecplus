#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    string name;
    int age;

    void saludar()
    {
        cout << "Mi nombre es: " << name << endl;
    }
};

int main()
{
    Persona *p = new Persona;
    p->name = "alejandra";

    p->saludar();
}
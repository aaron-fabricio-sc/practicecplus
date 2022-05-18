#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string name;
    int age;
};

int main()
{
    char letra = 'A';
    char *puntero = &letra;

    cout << (int *)&letra << endl;
    cout << (int *)puntero << endl;
    cout << *puntero << endl;

    Persona p = Persona();

    p.name = "alex";
    p.age = 55;

    cout << p.name << endl;
    cout << p.age << endl;

    Persona *p2 = new Persona();

    p2->name = "mel";
    p2->age = 31;

    cout << p2->name << endl;
    cout << p2->age << endl;

    union num_char
    {
        char letra;
        int num;
    };
    num_char x = {'K'};
    cout << "valor letra: " << (int)x.letra << endl;
    cout << "valor num: " << (char)x.num << endl;

    enum dias_semana
    {
        lunes = 'l',
        martes = 'm'
    };

    dias_semana dia = lunes;

    cout << (char)dia << endl;
}
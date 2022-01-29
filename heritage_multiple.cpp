#include <iostream>
using namespace std;
class A
{
public:
    string Nom;

public:
    A(string No)
    {

        Nom = No;
    }
};
class B
{
public:
    string Prenom;

public:
    B(string Pr)
    {
        Prenom = Pr;
    }
};
class C : public A, public B
{
public:
    C(string No, string Pr) : A(No), B(Pr) {}
    void affiche()
    {
        cout << "Prenom: " << Prenom << "Nom: " << Nom << "\n";
    }
};
int main()
{
    C *c = new C("Ilham", "Elaraji");
    c->affiche();
}
#include <iostream>
using namespace std;
class Personne
{
private:
    string CIN, Nom, Prenom;

public:
    Personne(string ci, string No,string Pr){
        CIN = ci;
        Nom = No;
        Prenom = Pr;
    }
    void affiche()
    {
        cout << "[" << CIN << "," << Nom << "," << Prenom << "]" << endl;
    }
    ~Personne(){
        cout << "[" << CIN << "," << Nom << "," << Prenom << "]" << " a été supprimé";
    }
};
int main()
{
    // int B;
    Personne *A=new Personne("EE4","Ilham","Elaraji");
    A->affiche();// - >
    delete A;
}


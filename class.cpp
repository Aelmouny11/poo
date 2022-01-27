#include <iostream>
using namespace std;
class Personne{
    private:
    string CIN,Nom,Prenom;
    public:
    void initialize(string ci,string No,string Pr){
        CIN = ci;
        Nom=No;
        Prenom=Pr;

    }
    void affiche(){
        cout<<"["<<CIN<<","<<Nom<<","<<Prenom<<"]"<<endl;
    }

};
int main(){
    // int B;
    Personne A;
    A.affiche();
}
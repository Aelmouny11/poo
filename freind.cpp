class Vecteur
{
private:
    int x, y;

public:
    friend double Norme(Vecteur);
};
double Norme(Vecteur V)
{
    return V.x + V.y;
}

//====== Methode Amie========
class A{
    private:
    int x;
    public:
    void AmiedeB();
};
class B {
    private: 
    int a;
    friend void A::AmiedeB();
};


//=====Classe Amie================================================================
class A{
    private:
    int x;
    public:
    void AmiedeB();
};
class B {
    private: 
    int a;
    friend class A;
};
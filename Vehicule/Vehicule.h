#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

class Vehicule
{
public:
    Vehicule(int prix=100,int anneeProd=1900);
    virtual void afficher() const;
    virtual ~Vehicule(){}
protected:
    int m_prix;
    int m_anneeDeProduction;
};

class Camion: public Vehicule{

public:
    Camion(int poids, int prix,int anneeProd);
    virtual void afficher() const;
    virtual ~Camion(){}

protected:
    int m_poids;
};

class Voiture: public Vehicule
{
 public:
     Voiture(int prix=100, int portes=4,int anneeProd=1900);
     virtual void afficher() const;
     virtual ~Voiture(){
     }
 private:
    int m_portes;
};

class Moto: public Vehicule
{
public:
    Moto(int prix=100,int vitesseMax=80,int anneeProd=1900);
    virtual void afficher() const;
    virtual ~Moto(){}
private:
    int m_vitesse;
};


#endif // VEHICULE_H_INCLUDED

#ifndef VEH_H_INCLUDED
#define VEH_H_INCLUDED

class Vehicule
{
public:
    Vehicule(int prix=100,int anneeProd=1900);
    virtual ~Vehicule(){}
    virtual void afficher() const;
    virtual int nombreDeRoues() const =0;
protected:
    int m_prix;
    int m_anneeDeProduction;
};

class Camion: public Vehicule{

public:
    Camion(int poids, int prix,int anneeProd);
    virtual void afficher() const;
    virtual int nombreDeRoues() const;
    virtual ~Camion(){}

protected:
    int m_poids;
};

class Voiture: public Vehicule
{
 public:
     Voiture(int prix=100, int portes=4,int anneeProd=1900);
     virtual void afficher() const;
     virtual int nombreDeRoues() const;
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
    virtual int nombreDeRoues() const;
    virtual ~Moto(){}
private:
    int m_vitesse;
};


#endif // VEH_H_INCLUDED


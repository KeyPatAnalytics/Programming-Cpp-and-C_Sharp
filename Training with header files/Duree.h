#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

class Duree
{
public:
    Duree(int hours=0, int minutes=0, int secondes=0);
    int dureeSecondes() const;
    bool operator==(Duree const &timeline) const;
    bool operator!=(Duree const &timeline) const;
    bool operator<(Duree const &timeline) const;
    bool operator>(Duree const &timeline) const;
    Duree operator+(Duree const &time) const;
    Duree operator+(int sec);
    Duree operator+=(int sec);
    void afficher() const;
private:
    int m_hours;
    int m_minutes;
    int m_secondes;
};
#endif // DUREE_H_INCLUDED

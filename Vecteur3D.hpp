//
//  Vecteur3D.hpp
//  Projet — Simulation de tissu
//
//  Created by Nicolas Le-Bel on 02.03.16.
//

#ifndef PRJ_VECTEUR_H
#define PRJ_VECTEUR_H

#include <stdio.h>
#include <array>

class Vecteur3D {
    
    private :
    
    std::array<double, 3> tableau = { 0, 0, 0 };
    
    
    public :
    
    double return_coord(unsigned int indice) const;
    void set_coord(unsigned int indice, double valeur);
    void get_coord(unsigned int indice, double& valeur) const;
    
    void affiche() const;
    bool compare(Vecteur3D vecteur1) const;
    
    Vecteur3D addition(Vecteur3D autre) const;
    Vecteur3D soustraction(Vecteur3D autre) const;
    Vecteur3D oppose() const;
    Vecteur3D mult(double nb) const;
    
    double prod_scal (Vecteur3D vecteur2) const;
    Vecteur3D prod_vect(Vecteur3D vecteur2) const;
    
    double norme() const;
    double norme2() const;
    
    
};

#endif // PRJ_VECTEUR_H

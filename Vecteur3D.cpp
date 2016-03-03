//
//  Vecteur3D.cpp
//  Projet — Simulation de tissu
//
//  Created by Nicolas Le-Bel on 02.03.16.
//

#include "Vecteur3D.hpp"
#include <array>
#include <iostream>
#include <cmath>

    
    double Vecteur3D::return_coord(unsigned int indice) const {
        
        return tableau[indice];
        
    }
    
    void Vecteur3D::set_coord(unsigned int indice, double valeur) {
        
        if (indice > 2) {
            
            std::cout << "Erreur 1: Vous avez essayé d'initialiser un vecteur avec dans une case";
            std::cout << " inexistante. " << std::endl;
            
        }
        
        else { tableau[indice] = valeur; }
        
    }
    
    void Vecteur3D::get_coord(unsigned int indice, double& valeur) const {
        
        if (indice > 2) {
            
            std::cout << "Erreur 2: Vous avez essayé de lire une valeur d'une une case";
            std::cout << " inexistante du vecteur. " << std::endl;
            
        }
        
        else { valeur = tableau[indice]; }

    }
    
  
    
    void Vecteur3D::affiche() const {
        
        std::cout << tableau[0] << "  " << tableau[1] << "  " << tableau[2] << std::endl;
        
    }
    
    bool Vecteur3D::compare(Vecteur3D vecteur1) const {
        
        for (unsigned int indice = 0; indice <= 2; indice++) {
        
            if (vecteur1.tableau[indice] != tableau[indice]) { return false; }
            
        }
        
        return true;
        
    }
    
    Vecteur3D Vecteur3D::addition(Vecteur3D autre) const {
        
        Vecteur3D temp;
        
        for (unsigned int indice = 0; indice <= 2; indice++) {
            
            temp.set_coord(indice, tableau[indice] + autre.return_coord(indice));
            
        }
        
        return temp;
        
    }
    
    Vecteur3D Vecteur3D::soustraction(Vecteur3D autre) const {
        
        Vecteur3D temp;
        
        for (unsigned int indice = 0; indice <= 2; indice++) {
            
            temp.set_coord(indice, tableau[indice] - autre.return_coord(indice));
            
        }
        
        return temp;
        
    }
    
    Vecteur3D Vecteur3D::oppose() const {
        
        Vecteur3D temp;
        
        for (unsigned int indice = 0; indice <= 2; indice++) {
            
            temp.set_coord(indice, (-1)*tableau[indice]);
            
        }
        
        return temp;
        
    }
    
    Vecteur3D Vecteur3D::mult(double nb) const  {
        
        Vecteur3D temp;
        
        for (unsigned int indice = 0; indice <= 2; indice++) {
            
            temp.set_coord(indice, nb*tableau[indice]);
            
        }
        
        return temp;
        
    }
    
    double Vecteur3D::prod_scal (Vecteur3D vecteur2) const {
        
        double produit(0);
        
        for (unsigned int indice = 0; indice <= 2; indice++) {
            
            produit += vecteur2.return_coord(indice) * tableau[indice];
            
        }
        
        return produit;
        
    }
    
    Vecteur3D Vecteur3D::prod_vect(Vecteur3D vecteur2) const {
        
        Vecteur3D temp;
        
        temp.set_coord(0, (tableau[1]*vecteur2.return_coord(2))-(tableau[2]*vecteur2.return_coord(1)));
        temp.set_coord(1, (tableau[2]*vecteur2.return_coord(0))-(tableau[0]*vecteur2.return_coord(2)));
        temp.set_coord(2, (tableau[0]*vecteur2.return_coord(1))-(tableau[1]*vecteur2.return_coord(0)));
        
        return temp;
        
    }
    
    double Vecteur3D::norme() const {
        
        double n(0);
        
        n = sqrt(tableau[0]*tableau[0] + tableau[1]*tableau[1] + tableau[2]*tableau[2]);
        
        return n;
        
    }
    
    double Vecteur3D::norme2() const {
        
        double n(0);
        
        n = tableau[0]*tableau[0] + tableau[1]*tableau[1] + tableau[2]*tableau[2];
        
        return n;
        
    }

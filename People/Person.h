/*
 ------------------------------------------------------------------------------
 Labo        : 4
 Fichier     : Person.h
 Auteur(s)   : Guillaume Hochet et Vincent Guidoux
 Date        : 23.05.2018

 But         : Description d'une classe représentant une personne avec un nom
               et l'information si elle peut condurie un bateau oui ou non

 Commentaires    :
 ------------------------------------------------------------------------------
*/

#ifndef POO2LABO4RIVIERE_PERSON_H
#define POO2LABO4RIVIERE_PERSON_H

#include <cstdlib>
#include <string>

using namespace std;

class Person {
private:
    string name;

    /**
     * S'il ne vaut pas nullptr, cette personne a besoin d'être accompagnée
     *
     * Sinon, elle doit absolument être accompagné de la personne pointée
     */
    Person* needsToBeWith;
public:
    Person(string name);

    Person();

    string getName()const;

    /**
     * @return si cette personne peut conduire un bâteau ou non 
     */
    virtual bool canDrive() const = 0;
};


#endif //POO2LABO4RIVIERE_PERSON_H

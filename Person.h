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
    bool _canDrive;
public:
    Person(string name, bool _canDrive);

    string getName()const;

    bool canDrive() const;
};


#endif //POO2LABO4RIVIERE_PERSON_H

/*
 ------------------------------------------------------------------------------
 Labo        : 4
 Fichier     : Person.cpp
 Auteur(s)   : Guillaume Hochet et Vincent Guidoux
 Date        : 23.05.2018

 But        : Implémentation  d'une classe représentant une personne avec un
              nom et l'information si elle peut condurie un bateau oui ou non

 Commentaires    :
 ------------------------------------------------------------------------------
*/
#include "Person.h"

string Person::getName() const {
    return name;
}

Person::Person(string name) : name(name) {

}

Person::Person() {}

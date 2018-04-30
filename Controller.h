/*
 ------------------------------------------------------------------------------
 Labo        : 4
 Fichier     : Controller.h
 Auteur(s)   : Guillaume Hochet et Vincent Guidoux
 Date        : 23.05.2018

 But         : Description d'une classe représentant le controlleur

 Commentaires    :
 ------------------------------------------------------------------------------
*/

#ifndef POO2LABO4RIVIERE_CONTROLLER_H
#define POO2LABO4RIVIERE_CONTROLLER_H


#include <list>
#include "People/Person.h"
#include "Containers/Bank.h"

class Controller {
private:
    int turn;
    list<Person> persons;
    Bank* rightBank;
    Bank* leftBank;


public:
    void showMenu() const;
    void display() const;
    void nextTurn();

};


#endif //POO2LABO4RIVIERE_CONTROLLER_H

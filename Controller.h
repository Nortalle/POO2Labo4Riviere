//
// Created by Nortalle on 30.04.2018.
//

#ifndef POO2LABO4RIVIERE_CONTROLLER_H
#define POO2LABO4RIVIERE_CONTROLLER_H


#include <list>
#include "Person.h"
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

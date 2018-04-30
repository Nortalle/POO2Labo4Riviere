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
#include <iostream>
#include "People/Person.h"
#include "Containers/Bank.h"

class Controller {
private:
    int turn;
    list<Person> people;
    Bank *rightBank;
    Bank *leftBank;

    bool embark(const Person &person_to_embrak);

    bool land(const Person &person_to_land);

    void move();

    void reset();


public:

    bool sendCommand(string command) {
        bool quit = false;

        const static char CMD_DISPLAY = 'p';
        const static char CMD_EMBRAK = 'e';
        const static char CMD_LAND = 'd';
        const static char CMD_MOVE = 'm';
        const static char CMD_RESET = 'r';
        const static char CMD_QUIT = 'q';
        const static char CMD_MENU = 'h';

        char commandChoice = command.at(0);

        switch (commandChoice) {
            case CMD_DISPLAY:
                cout << "DISPLAY" << endl;
                display();
                break;
            case CMD_EMBRAK:
                cout << "EMBRAK" << endl;
                break;
            case CMD_LAND:
                cout << "LAND" << endl;
                break;
            case CMD_MOVE:
                cout << "MOVE" << endl;
                move();
                break;
            case CMD_RESET:
                cout << "RESET" << endl;
                reset();
                break;
            case CMD_QUIT:
                cout << "QUIT" << endl;
                quit = true;
                break;
            case CMD_MENU:
                cout << "MENU" << endl;
                break;
        }
        return quit;
    }

    void showMenu() const;

    void display() const;

    void nextTurn();

};


#endif //POO2LABO4RIVIERE_CONTROLLER_H

/*
 ------------------------------------------------------------------------------
 Labo        : 4
 Fichier     : Container.h
 Auteur(s)   : Guillaume Hochet et Vincent Guidoux
 Date        : 23.05.2018

 But        :

 Commentaires    :
 ------------------------------------------------------------------------------
*/

#ifndef POO2LABO4RIVIERE_CONTAINER_H
#define POO2LABO4RIVIERE_CONTAINER_H

#include <cstdlib>
#include <string>
#include <list>
#include "../Person.h"

using namespace std;

class Container {
private:
    string name;
    list<Person> persons;
public:

    Container(const string &name);

    Container();

    string getName() const;
};


#endif //POO2LABO4RIVIERE_CONTAINER_H

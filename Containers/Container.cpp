/*
 ------------------------------------------------------------------------------
 Labo        : 4
 Fichier     : Controller.cpp
 Auteur(s)   : Guillaume Hochet et Vincent Guidoux
 Date        : 23.05.2018

 But        :

 Commentaires    :
 ------------------------------------------------------------------------------
*/
#include "Container.h"

Container::Container(const string &name) : name(name), persons(list<Person>()){}

Container::Container() : Container("") {}

string Container::getName() const {
    return name;
}

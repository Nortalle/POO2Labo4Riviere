//
// Created by Nortalle on 30.04.2018.
//

#include "Container.h"

Container::Container(const string &name) : name(name), persons(list<Person>()){}

Container::Container() : Container("") {}

string Container::getName() const {
    return name;
}

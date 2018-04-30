//
// Created by Nortalle on 30.04.2018.
//

#include "Person.h"

string Person::getName() const {
    return name;
}

bool Person::canDrive() const {
    return _canDrive;
}

Person::Person(string name, bool _canDrive) : name(name), _canDrive(_canDrive) {

}

//
// Created by Nortalle on 30.04.2018.
//

#ifndef POO2LABO4RIVIERE_NONDRIVER_H
#define POO2LABO4RIVIERE_NONDRIVER_H


#include "Person.h"

class NonDriver : public Person{
public:
    bool canDrive() const override;

};


#endif //POO2LABO4RIVIERE_NONDRIVER_H

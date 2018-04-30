//
// Created by Nortalle on 30.04.2018.
//

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

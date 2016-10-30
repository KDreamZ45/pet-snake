#ifndef rock_h
#define rock_h
#include "pet.h"
using namespace std;

class Pet;
class Rock: public Pet
{
private:
    int hardness;
    string cleavage;
    int color;
    string ChemicalComp;
};

class Fornacite: public Rock {};
class Fukalite: public Rock {};
class Cummingtonite: public Rock {};

#endif

#ifndef rock_h
#define rock_h
#include "pet.h"
using namespace std;

class pet;

class rock: public pet
{
private:
    int hardness;
    string cleavage;
    int color;
    string ChemicalComp;
};

class fornacite: public rock {};

class fukalite: public rock {};

class cummingtonite: public rock {};

#endif

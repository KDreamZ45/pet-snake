#ifndef plant_h
#define plant_h
#include "pet.h"
using namespace std;

class pet;

class plant: public pet
{
private:
    int greenness;
};

class fern: public plant
{
public:
    void fernicate()
    {
        cout << "(fern noises)" << endl;
    }
};

class cactus: public plant
{
public:
    void poke()
    {
        cout << "Poke." << endl;
    }
};

#endif

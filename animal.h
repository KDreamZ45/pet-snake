#ifndef animal_h
#define animal_h
#include "pet.h"
using namespace std;

class pet;

class animal: public pet
{
private:
    char gender;
    bool type; // Indoor or Outdoor?
};

class cat: public animal
{
public:
    void back_shit_off_table()
    {
        cout << "Maintains eye contact. Asserts dominance." << endl;
    }
};

class dog: public animal
{
public:
    void eat_poop()
    {
        cout << "Yum." << endl;
    }
};

class snake: public animal
{
public:
    void snek()
    {
        cout << "snek snek snek" << endl;
    }
};

#endif

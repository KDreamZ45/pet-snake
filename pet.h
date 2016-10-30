#ifndef pet_h
#define pet_h
#include "pet.cpp"
using namespace std;

class Animal;
class Plant;
class Rock;
class Person
{
	private:
		int name;
};

class Pet
{
	private:
    		string name;
    		int age;
    		Person owner;
};

#endif

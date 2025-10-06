#include <iostream>
#include <cstring> // for strcpy
using namespace std;

class Character
{
private:
    int health;
    int level;
    char name[50];

public:
    //  Default Constructor (class create huda default values yo huncha)
    Character()
    {
        health = 100;
        level = 1;
        strcpy(name, "Unknown");
    }

    //  Parameterized Constructor
    Character(const char *n, int h, int l)
    {
        strcpy(name, n);
        health = h;
        level = l;
    }

    // User-defined Copy Constructor
    Character(const Character &other)
    {
        strcpy(name, other.name); // deep copy
        health = other.health;
        level = other.level;
    }

    //  Setters (AKA access modifier, private ma bhako values pani change garna milcha main function ma gayera setters bata)
    void setName(const char *n)
    {
        strcpy(name, n);
    }

    int setHealth(int h)
    {
        health = h;
        return health;
    }

    int setLevel(int lvl)
    {
        level = lvl;
        return level;
    }

    // Display Function aka getter
    void getHealth()
    {
        cout << "Character " << name
             << " has Health = " << health
             << " and Level = " << level << endl;
    }
};

int main()
{
    // Using default constructor
    // static allocation
    Character hero1;
    hero1.setName("Goku");
    hero1.setHealth(120);
    hero1.setLevel(5);
    hero1.getHealth();

    // Using parameterized constructor
    // static allocation
    Character hero2("Sajal", 110, 6);
    hero2.getHealth();

    // dynamically allocated or dynamically created
    Character *hero3 = new Character;
    hero3->setHealth(150);
    hero3->setLevel(5);
    hero3->setName("Naruto");
    hero3->getHealth();

    // Character hero4;
    // char name[50];
    // int health;
    // int level;

    // cin >> name;
    // cin >> health;
    // cin >> level;
    // hero4.setName(name);
    // hero4.setHealth(health);
    // hero4.setLevel(level);
    // hero4.getHealth();

    Character hero5 = hero1;
    hero5.getHealth();

    delete hero3;
    return 0;
}

#include <iostream>
using namespace std;

class Character {
    public:
    int health;

};
    

int main ()
{
    
    Character c1;
    Character c2;
    c1.health = 100;
    c2 = c1;
    cout<< c2.health<<endl;
    return 0;
}
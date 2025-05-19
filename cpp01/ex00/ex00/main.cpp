#include "Zombie.hpp"


int main(void){
    randomChump("one");
    Zombie* gg = newZombie("two");
    gg->announce();
    delete gg;
    return 0;
}
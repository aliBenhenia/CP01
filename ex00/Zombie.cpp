#include "Zombie.hpp"

void Zombie :: announce()
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie :: Zombie(std :: string n)
{
    name = n;
}

Zombie :: ~Zombie()
{
    std :: cout << name << " : destructor\n";
}

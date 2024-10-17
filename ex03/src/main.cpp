
#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

int main() {
    Character player("Player1");
    NLINE

    AMateria* ice = new Ice();
    NLINE

    AMateria* cure = new Cure();
    NLINE

    player.equip(ice);
    player.equip(cure);

    Character enemy("Enemy");

    player.use(0, enemy);
    player.use(1, enemy);

    player.unequip(0);
    player.use(0, enemy);


    delete ice;
    delete cure;


    return 0;
}

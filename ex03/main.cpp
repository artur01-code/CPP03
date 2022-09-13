#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Axel");

	diamond.attack("Somebody");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	return 0;
}
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap()
{
	std::cout << "[DiamondTrap default constructor]" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	std::cout << "[DiamondTrap default constructor with name]" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	_name = obj._name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "[DiamondTrap copy assigment constructor]" << std::endl;
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap deconstructor called]" << std::endl;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	_name = copy._name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	std::cout << "[DiamondTrap copy assigment constructor]" << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << std::endl
			  << "ClapTrap name is " << ClapTrap::_name << std::endl;
};

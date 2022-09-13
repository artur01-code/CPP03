#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_Scav")
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "[FragTrap default constructor]" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "[FragTrap default constructor]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	this->_name = obj._name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "[FragTrap copy constructor]" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap destructor]" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	this->_name = obj._name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey Guys, lets stop the fight and give me a high five" << std::endl;
}

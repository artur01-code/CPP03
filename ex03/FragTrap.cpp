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

void FragTrap::attack(const std::string& target)
{
	if (hit_points <= 0)
	{
		std::cout << "Trap " << _name << " is dead!" << std::endl;
		return ;
	}
	else if (energy_points <= 0)
	{
		std::cout << "Trap " << _name << " has not enough energy points!" << std::endl;
		return ;
	}
	energy_points--;
	std::cout << "Trap " << _name << " attacks " << target << " causing " << attack_damage << " damage points." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey Guys, lets stop the fight and give me a high five" << std::endl;
}

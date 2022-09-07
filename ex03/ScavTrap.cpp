#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_Scav")
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "[ScavTrap default constructor]" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "[ScavTrap default constructor]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	this->_name = obj._name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	std::cout << "[ScavTrap copy constructor]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap destructor]" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	this->_name = obj._name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
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

void ScavTrap::guardGate(void)
{
	if (hit_points <= 0)
	{
		std::cout << "Trap " << _name << " is dead!" << std::endl;
		return ;
	}
	if (energy_points <= 0)
	{
		std::cout << "Trap " << _name << " has not enough energy points to activate guarding mode" << "!" << std::endl;
		return ;
	}
	std::cout << "Trap " << _name << " is now guarding the Gate!" << std::endl;
	energy_points -= 1;
}

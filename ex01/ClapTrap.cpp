#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "[ClapTrap default constructor]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name), hit_points(obj.hit_points), energy_points(obj.energy_points), attack_damage(obj.attack_damage)
{
	std::cout << "[ClapTrap copy constructor for " << _name << "]" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "[ClapTrap name constructor for " << _name << "]" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap destructor for " << _name << "]" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	this->_name = obj._name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_points && hit_points)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << attack_damage << " points of damage" << std::endl;
		energy_points -= 1;
	}
	else
	{
		if (!energy_points)
			std::cout << "ClapTrap " << this->_name << " has not enough energy points" << std::endl;
		else if (!hit_points)
			std::cout << "ClapTrap " << this->_name << " has not enough hit points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points)
	{
		std::cout << "ClapTrap " << _name << "has got " << amount << " damage." << std::endl;
		hit_points -= amount;
		if (hit_points <= 0)
			std::cout << "ClapTrap " << _name << "is died." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << "is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!energy_points || !hit_points)
		std::cout << "ClapTrap " << this->_name << " has not enough energy points" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " lost energy point and got " << amount << " hitpoints."<< std::endl;
		energy_points--;
		hit_points += amount;
	}
}
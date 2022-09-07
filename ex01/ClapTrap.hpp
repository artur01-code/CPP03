#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap {
	public:
	//constructor
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	virtual ~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap &obj);
	
	//attributes
	protected:
	std::string _name;
	int hit_points;
	int energy_points;
	int attack_damage;

	//methods
	public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
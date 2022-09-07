#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& obj);
	virtual ~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& copy);
	void attack(const std::string& target);
	void guardGate(void);
};

#endif
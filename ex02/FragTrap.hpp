#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& obj);
	virtual ~FragTrap();

	FragTrap&	operator=(const FragTrap& copy);
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif
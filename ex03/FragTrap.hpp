#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& obj);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& copy);
	void highFivesGuys(void);
};

#endif
#include "ClapTrap.hpp"

int main()
{
	std::cout << "-------------Test1: without a name----------------" << std::endl;
	{
		ClapTrap test;
		test.attack("Monkey");
	}
	std::cout << "-------------Test2: with a name----------------" << std::endl;
	{
		ClapTrap test("the Beast");
		test.attack("the beauty");
	}
	std::cout << "-------------Test3: with a name----------------" << std::endl;
	{
		ClapTrap test("the Beast");
		for(int i = 0; i < 11; i++)
			test.attack("the beauty");
	}

}
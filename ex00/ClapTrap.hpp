#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		ClapTrap(void);
		std::string _name;
		int _hp;
		int _ep;
		int _ad;
};
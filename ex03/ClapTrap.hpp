#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setName(std::string name);
		std::string getName(void) const;
		void setHp(int hp);
		int getHp(void) const;
		void setEp(int ep);
		int getEp(void) const;
		void setAd(int ad);
		int getAd(void) const;

	protected:
		std::string _name;
		int _hp;
		int _ep;
		int _ad;
};
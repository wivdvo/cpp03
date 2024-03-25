#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "scav default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "scav constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "scav copy constructor called" << std::endl;

	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "scav assignment operator" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ad = other._ad;
	this->_ep = other._ep;

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scav deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout << "cant attack, i'm dead" << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout << "cant attack, no energy" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode!" << std::endl;
}




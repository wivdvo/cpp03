#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hp(other._hp), _ep(other._ep), _ad(other._ad)
{
	std::cout << "copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "assignment operator called" << std::endl;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ad;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hp -= amount;
	if (_hp <= 0)
		std::cout << _name << " died!" << std::endl;
	else
		std::cout << _name << " has " << _hp << "hp now!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "cant repair, i'm dead" << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout << "cant repair, no energy" << std::endl;
		return;
	}
	_hp += amount;
	_ep--;
	std::cout << _name << " got repaired and has " << _hp << "hp now!" << std::endl;
}
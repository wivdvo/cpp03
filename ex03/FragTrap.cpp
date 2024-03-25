#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "frag default constructor" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "frag name constructor" << std::endl;

	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	HP = 100;
	EP = 100;
	AD = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "frag copu constructor" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "frag assignment constructor called" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ad = other._ad;
	this->_ep = other._ep;

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "frag destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requesting to highfive" << std::endl;
}

void FragTrap::attack(const std::string& target)
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
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
}
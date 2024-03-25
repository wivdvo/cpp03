#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name")
{
	std::cout << "diamond constructor" <<std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
    std::cout << "diamond name constructor" << std::endl;
    this->_name = name;
    this->_hp = FragTrap::_hp;
    this->_ep = ScavTrap::_ep;
    this->_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << "diamond copy constructor" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ep;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "diamond assignment constructor" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_ad = other._ep;

	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "diamond destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name: " << _name << std::endl;
	std::cout << "Clap name: " << ClapTrap::_name << std::endl;
}

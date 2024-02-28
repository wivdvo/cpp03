#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "constructor called" << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "copy constructor called" << std::endl;
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setAd(other.getAd());
	this->setEp(other.getEp());
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setAd(other.getAd());
	this->setEp(other.getEp());

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "deconstructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode!" << std::endl;
}




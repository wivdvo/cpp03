#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "frag default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "frag name constructor" << std::endl;
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "frag copu constructor" << std::endl;
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setAd(other.getAd());
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "frag assignment constructor called" << std::endl;
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setAd(other.getAd());

}

FragTrap::~FragTrap()
{
	std::cout << "frag destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap is requesting to highfive" << std::endl;
}
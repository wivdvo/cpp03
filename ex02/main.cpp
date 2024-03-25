#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap Peter("Peter");
	// ClapTrap Oliver("Oliver");

	// Peter.attack("Oliver");
	// Oliver.takeDamage(7);
	// Oliver.attack("Peter");
	// Peter.takeDamage(7);

	// Peter.beRepaired(5);
	// Oliver.attack("Peter");
	// Peter.takeDamage(7);
	// Oliver.attack("Peter");
	// Peter.takeDamage(7);

	// Peter.attack("Oliver");
	// Peter.beRepaired(100);

	ScavTrap Martin("Martin");
	Martin.attack("Oliver");
	Martin.beRepaired(10);


	FragTrap Artem("Artem");
	Artem.highFivesGuys();
	Artem.attack("Martin");

}
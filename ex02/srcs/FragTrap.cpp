#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	this->setName("NoName");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	this->showStatus();
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "FragTrap String constructor called." << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	this->showStatus();
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap Copy constructor called." << std::endl;
	*this = fragtrap;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap Copy assignment operator called." << std::endl;
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap positive high fives." << std::endl;	
}
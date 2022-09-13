#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called." << std::endl;
	this->setName("NoName");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->showStatus();
}

ScavTrap::ScavTrap(const std::string& name)
{
	std::cout << "ScavTrap String constructor called." << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->showStatus();
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	*this = scavtrap;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assignment operator called." << std::endl;
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	} else
		std::cout << "ScavTrap " << this->getName() << " Could not attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
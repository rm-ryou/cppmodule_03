#include "DiamondTrap.h"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor called." << std::endl;
	this->name_ = "Noname";
	ClapTrap::name_ = this->name_ + "_clap_name";
	this->hitPoint_ = FragTrap::FragTrapHitPoint_;
	this->enegyPoint_ = ScavTrap::enegyPoint_;
	this->attackDamage_ = FragTrap::FragTrapAttackDamage_;
	this->ClapTrap::showStatus();
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap String constructor called." << std::endl;
	this->name_ = name;
	ClapTrap::name_ = this->name_ + "_clap_name";
	this->hitPoint_ = FragTrap::FragTrapHitPoint_;
	this->enegyPoint_ = ScavTrap::enegyPoint_;
	this->attackDamage_ = FragTrap::FragTrapAttackDamage_;
	this->ClapTrap::showStatus();
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "DiamondTrap Copy constructor called." << std::endl;
	*this = other;
	this->ClapTrap::showStatus();
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap Copy assignment operator called." << std::endl;
	this->name_ = other.name_;
	ClapTrap::name_ = other.ClapTrap::name_;
	this->hitPoint_ = other.hitPoint_;
	this->enegyPoint_ = other.enegyPoint_;
	this->attackDamage_ = other.attackDamage_;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
	this->ClapTrap::showStatus();
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name_ << std::endl;
	std::cout << "CrapTrap name is " << this->ClapTrap::name_ << std::endl;
}
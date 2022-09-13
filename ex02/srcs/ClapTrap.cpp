#include "ClapTrap.h"

ClapTrap::ClapTrap() : name_("hoge"), hitPoint_(10), enegyPoint_(10), attackDamage_(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name_(name), hitPoint_(10), enegyPoint_(10), attackDamage_(10)
{
	std::cout << "String constructor called." << std::endl;
	this->showStatus();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = claptrap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->setName(other.name_);
	this->setHitPoints(other.hitPoint_);
	this->setEnergyPoints(other.enegyPoint_);
	this->setAttackDamage(other.attackDamage_);
	return *this;
}

std::string	ClapTrap::getName() const
{
	return this->name_;
}

int	ClapTrap::getHitPoints() const
{
	return this->hitPoint_;
}

int	ClapTrap::getEnergyPoints() const
{
	return this->enegyPoint_;
}

int	ClapTrap::getAttackDamage() const
{
	return this->attackDamage_;
}

void	ClapTrap::setName(const std::string& name)
{
	this->name_ = name;
}

void	ClapTrap::setHitPoints(const int hitPoints)
{
	this->hitPoint_ = hitPoints;
}

void	ClapTrap::setEnergyPoints(const int energyPoints)
{
	this->enegyPoint_ = energyPoints;
}

void	ClapTrap::setAttackDamage(const int attackDamage)
{
	this->attackDamage_ = attackDamage;
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->enegyPoint_ > 0 && this->hitPoint_ > 0) {
		std::cout << "ClapTrap " << this->name_ << " attacks " << target << ", causing " << this->attackDamage_ << " points of damage!" << std::endl;
		this->enegyPoint_--;
	} else
		std::cout << "ClapTrap " << this->name_ << " Could not attack." << std::endl;
	this->showStatus();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name_ << " take damage " << amount << std::endl;
	this->hitPoint_ -= amount;
	if (this->hitPoint_ <= 0)
		this->hitPoint_ = 0;
	this->showStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->enegyPoint_ > 0 && this->hitPoint_ > 0) {
		std::cout << "ClapTrap " << this->name_ << " be repaired " << amount << std::endl;
		this->hitPoint_ += amount;
		this->enegyPoint_--;
	} else
		std::cout << "ClapTrap " << this->name_ << " Could not be repaired." << std::endl;
	this->showStatus();
}

void	ClapTrap::showStatus()
{
	std::cout << "\x1b[34mHit points\x1b[39m    :" << this->hitPoint_ << std::endl;
	std::cout << "\x1b[34mEnergy points\x1b[39m : " << this->enegyPoint_ << std::endl;
}
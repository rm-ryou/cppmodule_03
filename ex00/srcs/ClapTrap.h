#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
private:
	std::string	name_;
	int	hitPoint_;
	int	enegyPoint_;
	int	attackDamage_;
public:
	ClapTrap();
	ClapTrap(const std::string& name_);
	ClapTrap(const ClapTrap& claptrap);
	ClapTrap&	operator=(const ClapTrap& other);
	~ClapTrap();

	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;

	void	setName(const std::string& name);
	void	setHitPoints(const int hitPoints);
	void	setEnergyPoints(const int energyPoints);
	void	setAttackDamage(const int attackDamage);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	showStatus();
};

#endif // !CLAPTRAP_H
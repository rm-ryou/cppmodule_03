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

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	showStatus();
};

#endif // !CLAPTRAP_H
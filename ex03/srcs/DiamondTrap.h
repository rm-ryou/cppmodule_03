#ifndef DIAMOND_H
#define DIAMOND_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& diamondtrap);
	DiamondTrap&	operator=(const DiamondTrap& other);
	~DiamondTrap();

	void	attack(const std::string& target);
	void	whoAmI();
};

#endif // !DIAMOND_H
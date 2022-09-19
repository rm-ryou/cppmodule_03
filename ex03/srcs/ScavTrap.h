#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& scavtrap);
	ScavTrap&	operator=(const ScavTrap& other);
	virtual	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif // !SCAVTRAP_H
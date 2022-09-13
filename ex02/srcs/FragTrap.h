#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& fragtrap);
	FragTrap&	operator=(const FragTrap& other);
	~FragTrap();

	void	highFivesGuys();
};

#endif // !FRAGTRAP_H
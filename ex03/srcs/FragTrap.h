#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {
protected:
	static const int	FragTrapAttackDamage_;
	static const int	FragTrapHitPoint_;
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& fragtrap);
	FragTrap&	operator=(const FragTrap& other);
	virtual	~FragTrap();

	void	highFivesGuys();
};

#endif // !FRAGTRAP_H
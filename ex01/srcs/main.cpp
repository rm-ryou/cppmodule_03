#include "ScavTrap.h"

void	test(ScavTrap& claptrap)
{
	claptrap.guardGate();
	claptrap.attack("enemy");
	claptrap.takeDamage(50);
	claptrap.beRepaired(50);
	claptrap.takeDamage(100);
	claptrap.beRepaired(10);
	claptrap.attack("enemy");
}

int	main()
{
	ScavTrap	a;
	ScavTrap	b("hoge");
	ScavTrap	c(b);
	ScavTrap	d = a;

	test(a);
	test(b);
	test(c);
	test(d);
	return 0;
}
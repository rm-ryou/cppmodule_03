#include "ClapTrap.h"

void	test(ClapTrap& claptrap)
{
	claptrap.attack("enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(10);
	claptrap.beRepaired(1);
	claptrap.attack("enemy");
}

int	main()
{
	ClapTrap	a;
	ClapTrap	b("hoge");
	ClapTrap	c(b);

	test(a);
	test(b);
	test(c);
	return 0;
}
#include "FragTrap.h"

void	test(FragTrap& claptrap)
{
	claptrap.highFivesGuys();
	claptrap.attack("enemy");
	claptrap.takeDamage(50);
	claptrap.beRepaired(50);
	for (int i = 2; i < 50; i+=2) {
		claptrap.takeDamage(i);
		claptrap.beRepaired(i / 2);
		if (claptrap.getHitPoints() <= 0) {
			std::cout << "\x1b[31mHit Points is 0\x1b[39m." << std::endl;
			break;
		}
	}
//	claptrap.takeDamage(100);
//	claptrap.beRepaired(10);
//	claptrap.attack("enemy");
}

int	main()
{
	FragTrap	a;
	FragTrap	b("hoge");
	FragTrap	c(b);
	FragTrap	d = a;

	test(a);
	test(b);
	test(c);
	test(d);
	return 0;
}
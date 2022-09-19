#include "DiamondTrap.h"

int	main()
{
	{
		DiamondTrap	a;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		a.guardGate();
		a.highFivesGuys();
		a.whoAmI();

		for (int i = 2; i < 50; i+=2) {
			a.attack("enemy");
			a.takeDamage(i);
			a.beRepaired(i / 2);
			if (a.getHitPoints() == 0) {
				std::cout << "\x1b[31mHit Point is 0\x1b[39m" << std::endl;
				break;
			}
		}
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	}
	{
		DiamondTrap	a("test");
		DiamondTrap	b(a);

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		b.guardGate();
		b.highFivesGuys();
		b.whoAmI();

		for (int i = 2; i < 50; i+=2) {
			b.attack("enemy");
			b.takeDamage(i);
			b.beRepaired(i / 2);
			if (b.getHitPoints() == 0) {
				std::cout << "\x1b[31mHit Point is 0\x1b[39m" << std::endl;
				break;
			}
		}
		a.showStatus();
		a.whoAmI();
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	}
}
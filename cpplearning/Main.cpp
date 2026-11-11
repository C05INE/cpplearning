#include <iostream>

int main()
{
	int gold = 100;
	int health = 100;
	int choice = 0;
	int enemyHealth = 60;
	int enemyDamage = 17;
	int playerDamage = 20;
	int combatChoice = 0;

	std::cout << "Welcome to C05INE's game!" << "\n";
	std::cout << "Player One Stats:" << "\n";
	std::cout << "Gold: " << gold << " " << "\n" << "Health: " << health << "\n";

	while (choice !=1 && choice !=2)
	{
		std::cout << "You have encountered a dungeon!\n";
		std::cout << "Would you like to enter the dungeon?" << "\n";
		std::cout << "1. Yes\n";
		std::cout << "2. No\n";
		std::cin >> choice;

		if (choice == 1)
		{
			std::cout << "You have entered the dungeon!\n";

			while (choice == 1)
			{
				enemyHealth = 60;
				std::cout << "A Goblin has appeared <('.')>\n";
				std::cout << "You have: " << health << " health <3" << "\n";
				std::cout << "The Goblin has " << enemyHealth << " health <3 " << "and hits for 17 damage" << "\n";
				while (enemyHealth > 0)
				{
					std::cout << "What would you like to do?" << "\n";
					std::cout << "1. Attack the Goblin\n";
					std::cout << "2. Run away\n";
					std::cin >> combatChoice;

					if (combatChoice == 1)
					{
						std::cout << "You have chosen to attack the Goblin!" << "\n";
						std::cout << "The Goblin has " << enemyHealth << " health!" << "\n";
						enemyHealth -= playerDamage;
						std::cout << "You have dealt " << playerDamage << " damage to the Goblin!" << "\n";
						std::cout << "Goblin has: " << enemyHealth << " health!" << "\n";
						if (enemyHealth > 0)
						{
							health -= enemyDamage;
							std::cout << "Enemy has dealt: " << enemyDamage << " Damage to you!" << "\n";
							if (health <= 0)
							{
								std::cout << "You have died!" << "\n";
								return 0;
							}
							std::cout << "You have: " << health << " health!" << "\n";
							if (health < 0)
							{
								health = 0;
							}
						}
					}
					else if (combatChoice == 2)
					{
						std::cout << "You have chosen to run away!" << "\n";
						std::cout << "You have exited the Dungeon!" << "\n";
						std::cout << "You have now : " << gold << " gold!" << "\n";
						choice = 2;
						break;
					}
					else
					{
						std::cout << "Invalid combat choice! Please try again." << "\n";
					}
				}
				if (enemyHealth <= 0)
				{
					std::cout << "You have defeated the Goblin!" << "\n";
					gold += 25;
					std::cout << "You have farmed 25 gold!" << "\n";
					std::cout << "You now have: " << gold << " gold!" << "\n";
					std::cout << "Would you like to continue farming?" << "\n";
					std::cout << "1. Yes\n" << "2. No\n";
					std::cin >> choice;
				}
				if (choice == 1)
				{
					std::cout << "You have chosen to continue farming!" << "\n";
				}
				else if (choice == 2)
				{
					std::cout << "You have chosen to exit the dungeon!" << "\n";
				}
			}
		}
		else if (choice == 2)
		{
			std::cout << "You denied to enter the dungeon.\n";
		}
		else
		{
			std::cout << "Invalid Choice!" << "\n";
			choice = 0;
		}
	}
	return 0;
}
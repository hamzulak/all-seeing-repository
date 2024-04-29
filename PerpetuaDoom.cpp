#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Player stats
int playerHealth = 18;
int playerMaxHealth = 18;
int playerDamage = 1;
int exp = 0;
int potions = 3;
int lvl = 1; // Player level

// Function to initialize enemy stats
void initializeEnemy(string &enemyName, int &enemyMaxHealth, int &enemyDamage, int playerLevel) {
    // Generate a random number from 0 to 5
    int enemyType = rand() % 6;

    // Assign enemy stats based on the random number generated
    if (enemyType == 0) {
        // GOBLIN - Balanced enemy
        enemyName = "Goblin";
        enemyMaxHealth = 4 + rand() % (playerLevel * 3) + 1; // Increased health with player level
        enemyDamage = 1 + rand() % (playerLevel * 2) + 1; // Increased damage with player level
    } else if (enemyType == 1) {
        // SKELETON - High DMG, low health
        enemyName = "Skeleton";
        enemyMaxHealth = 2 + rand() % (playerLevel * 2) + 1; // Increased health with player level
        enemyDamage = 4 + rand() % (playerLevel * 2) + 1; // Increased damage with player level
    } else if (enemyType == 2) {
        // SLIME - High health, no DMG at start before leveling up
        enemyName = "Slime";
        enemyMaxHealth = 10 + rand() % (playerLevel * 4) + 1; // Increased health with player level
        enemyDamage = 0;
    } else if (enemyType == 3) {
        // Bandit - Moderate health, moderate DMG
        enemyName = "Bandit";
        enemyMaxHealth = 6 + rand() % (playerLevel * 3) + 1; // Increased health with player level
        enemyDamage = 2 + rand() % (playerLevel * 3) + 1; // Increased damage with player level
    } else if (enemyType == 4) {
        // Orc - High health, high DMG
        enemyName = "Orc";
        enemyMaxHealth = 11 + rand() % (playerLevel * 5) + 1; // Increased health with player level
        enemyDamage = 3 + rand() % (playerLevel * 4) + 1; // Increased damage with player level
    } else if (enemyType == 5) {
        // Bag of Loot - Special enemy, gives potions
        enemyName = "Living bag of Loot";
        enemyMaxHealth = 1;
        enemyDamage = 0;
        potions++;
    }
}

// Print enemy encounter details
void printEnemyEncounter(string enemyName, int enemyMaxHealth, int enemyDamage) {

    cout << "You encountered a " << enemyName << "!" << endl;
    // If the enemy is a Bag of Loot, inform the player about the extra potion
    if (enemyName == "Bag of Loot") {
        cout << "You got another Health potion!" << endl;
    }
    // Print enemy health and damage
    cout << "Enemy HP: " << enemyMaxHealth << " | Enemy DMG: " << enemyDamage << endl;
}

void playerTurn(int turnChoice, int &enemyMaxHealth, int enemyDamage, string enemyName) {
    if (turnChoice == 1) {
        int crit = rand() % 3;
        if (crit == 2) {
            // Critical hit deals double base damage
            enemyMaxHealth -= playerDamage * 2;
            cout << "You hit the " << enemyName << " with a critical hit for " << playerDamage * 2<< " damage!!" << endl;
        } else {
            cout << "You hit the " << enemyName << " for " << playerDamage << " damage!" << endl;
            enemyMaxHealth -= playerDamage;
        }

        // If the enemy is still alive, it attacks the player
        if (enemyMaxHealth > 0) {
            playerHealth -= enemyDamage;
            if (playerHealth < 0)
                playerHealth = 0;
            cout << "The " << enemyName << " hit you for " << enemyDamage << " damage!" << endl;
        }
    } else if  (turnChoice == 2) {
        // Player uses a health potion
        if (potions > 0) {
            playerHealth += playerMaxHealth / 3;
            if (playerHealth > playerMaxHealth)
                playerHealth = playerMaxHealth;
            potions--;

            cout << "You drink a health potion." << endl;
        } else {
            cout << "You have no more health potions!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }
}

void printEnemyStatus(int enemyMaxHealth, int enemyDamage) {
    cout << "Enemy HP: " << enemyMaxHealth << " | Enemy DMG: " << enemyDamage << endl;
}

void levelUp(string &enemyName, int &enemyMaxHealth, int &enemyDamage) {
    exp++;
    cout << "You defeated the " << enemyName << "!" << endl << endl;
    // If player has enough experience, level up
    if (exp >= 2) {
        lvl++; // Increase player level
        exp -= 2;
        // leveling up increases player's max health and damage
        int healthIncrease = rand() % 5 + 3; // Increased health by 3 to 7 points per level
        int damageIncrease = rand() % 2 + 1; // Increased damage by 1 to 3 points per level
        playerMaxHealth += healthIncrease;
        playerHealth = playerMaxHealth; // Fully heal player on level up
        playerDamage += damageIncrease;

        cout << "Level Up! Max Health has been increased to " << playerMaxHealth << " & your DMG to " << playerDamage << endl;
    }
}

void gameOver(string enemyName) {
    system("CLS");
    system("color C");
    cout << "Game Over! You were defeated by the " << enemyName << "!" << endl;
}

int main() {

    system("Color E");

    cout << "*******************************************" << endl;
    cout << "***      Welcome to PerpetuaDoom!       ***" << endl;
    cout << "*******************************************" << endl;
    cout << "Prepare for an eternal journey!" << endl;
    cout << "Defeat fearsome enemies, level up and become perpetually powerful." << endl << endl;

    srand(time(0));

    int turnChoice;

    int enemyMaxHealth, enemyDamage;
    string enemyName;

    while (playerHealth > 0) {

        initializeEnemy(enemyName, enemyMaxHealth, enemyDamage, lvl);

        printEnemyEncounter(enemyName, enemyMaxHealth, enemyDamage);

        // Battle loop
        while (enemyMaxHealth > 0 && playerHealth > 0) {
            // Print player stats
            cout << "Your HP: " << playerHealth << "/" << playerMaxHealth << " | " << "Your DMG: " << playerDamage << endl;
            cout << "1. Attack" << endl << "2. Use Health Potion" << endl << endl;
            cin >> turnChoice;
            system("CLS");
            playerTurn(turnChoice, enemyMaxHealth, enemyDamage, enemyName);

            // If enemy is still alive, print its status
            if (enemyMaxHealth > 0 && playerHealth > 0) {
                printEnemyStatus(enemyMaxHealth, enemyDamage);
            }
        }

        if (playerHealth > 0) {
            levelUp(enemyName, enemyMaxHealth, enemyDamage);
        } else {
            gameOver(enemyName);
        }
    }

    return 0;
}

# Welcome to the All Seeing Repository.

Blessed with providence are we. 
This repository holds three programs. 
Do not enter carelessly.
The programs are of adventure, wagering and of what connects them.

![image](https://github.com/hamzulak/all-seeing-repository/assets/148567107/580410c4-1dff-4b86-a9b0-b706dae1b913)



They hold the titles:
 - Dices&Programs
	 - D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15,D16,D17,D18,D19,D20.D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15,D16,D17,D18,D19,D20.
 - PerpetuaDoom
 - Fools' Delight

If we had to, by the complexity of the programs they would be ranked as such:
1. PerpetuaDoom - most complex
2. Fools' Delight
3. Dices&Programs

## Table of Contents
1. [Dices&Programs](#dicesprograms)
2. [Fools' Delight](#fools-delight)
3. [PerpetuaDoom](#perpetuadoom)

| Program          | Chance  | Adventure |
|----------------|---------|-----------|
| Fools' delight | Yes     | No        |
| Dices&Programs | Yes     | Yes       |
| PerpetuaDoom   | Not entirely      | Yes       |

## Dices&Programs

This C++ program simulates rolling a dice with a variable number of sides. It begins by including necessary libraries such as iostream, cstdlib, and ctime. The function rollDice takes the number of sides as a parameter and returns a random number between 1 and the number of sides.

In the main() function, the program seeds the random number generator with the current time to ensure different random numbers on each run. It then enters a loop where the user is prompted to choose a dice to roll, with options ranging from 2 to 20 sides.

The program checks the user's choice. If the user enters 0, the program exits. If the choice is between 2 and 20, it rolls the corresponding dice and displays the result. If the input is invalid, the program prompts the user to enter a valid number.

This program is directly related to Dungeons & Dragons (D&D) as it simulates rolling dice, a fundamental aspect of the game. In D&D, players use various types of dice, including 4-sided, 6-sided, 8-sided, 10-sided, 12-sided, and 20-sided dice, to determine the outcomes of different in-game actions such as attacks, damage, and skill checks. This program could be used as a simple tool for players to quickly roll dice during a D&D session.

How it works:

1. The code includes necessary libraries (`iostream`, `cstdlib`, `ctime`) and declares a function `rollDice(int sides)` that simulates rolling a dice with the specified number of sides.

2. In the `main()` function, the code initializes the random number generator using the current time as a seed (`srand(time(0))`). It then enters a loop where the user is prompted to choose a dice to throw (with sides ranging from 2 to 20) or to exit the program by entering 0.

3. Inside the loop, the user's choice is read from the input. If the choice is 0, the program exits. If the choice is between 2 and 20, the `rollDice()` function is called with the user's choice as the number of sides, and the result of the dice roll is displayed.

4. If the user enters an invalid choice (not between 2 and 20), an error message is displayed, prompting the user to enter a valid choice or to exit the program.

## Fools' Delight 

This C++ program simulates a gambling game called Fools' Delight. In the game, the player selects three numbers, and the program then generates random numbers until it finds a match with the player's selection. The program calculates the number of matches found and the probability of getting the same series randomly. This program exemplifies the allure and danger of gambling. While the thrill of potentially winning can be enticing, the odds are often stacked against the player. In this case, the probability of winning is relatively low, highlighting the inherent risk involved in gambling. This risk can lead to financial losses and, in extreme cases, addiction, making it important for individuals to gamble responsibly and be aware of the potential negative consequences.

How it works: 

1. The code includes necessary libraries (`iostream`, `cstdlib`, `ctime`) and declares a function `generateRandomNumber()` that generates a random number between 1 and 20.

2. In the `main()` function, the code initializes the random number generator using the current time as a seed (`srand(time(0))`). It then prompts the user to input three numbers (`FoolsA`, `FoolsB`, `FoolsC`) representing their guess for the game "Fools' Delight".

3. Inside a while loop, the code generates three random numbers (`CompA`, `CompB`, `CompC`) in each iteration and compares them to the user's input. If the generated numbers match the user's input, the `matches` counter is incremented.

4. After running the loop 100,000 times, the code calculates the probability of getting the user's input randomly, displays the number of matches found, the total number of turns taken, and the calculated probability.

## PerpetuaDoom 

![image](https://github.com/hamzulak/all-seeing-repository/assets/148567107/7cbd97f3-f5c5-4401-9210-cd17a07d8a89)


This program is a game called "PerpetuaDoom". It's a text-based adventure where players battle various enemies to level up and increase their stats. 

At the beginning of the game, players are introduced to their character's stats, including health, damage, experience, and the number of health potions they possess. 

Enemies are randomly generated and come in different types such as goblins, skeletons, slimes, bandits, orcs, and even a special enemy called "Bag of Loot" which rewards the player with extra health potions. 

Players have two choices during combat: to attack or to use a health potion. 

Combat involves turn-based actions where players and enemies take turns dealing damage to each other until one party's health reaches zero. 

Upon defeating an enemy, players gain experience points. When enough experience points are accumulated, players level up, increasing their maximum health and damage. Additionally, defeated enemies become stronger, ensuring that the game remains challenging as the player progresses.

The enemies you can encounter are: 
- Goblin
- Skeleton
- Slime
- Orc
- Living bag of loot

The game continues until the player's health reaches zero, at which point the game ends, and the player is informed of their defeat.

Here's how it works: 

1. The code initializes player and enemy stats such as health, damage, experience, potions, and level. It also includes functions to initialize enemy stats, print enemy encounter details, handle player turns, print enemy status, level up the player, and handle game over scenarios.

2. In the `main()` function, the code sets up the game environment and enters a loop where the player engages in battles until their health reaches zero.

3. Inside the battle loop, the code initializes a new enemy, displays encounter details, and enters a sub-loop where the player and enemy take turns attacking each other until one of them loses all their health.

4. After each battle, the code checks if the player is still alive. If they are, it checks if the player has enough experience to level up. If not, the game ends, and the "Game Over" message is displayed.

5. Throughout the game, the player is prompted to choose between attacking and using a health potion, and relevant information is displayed after each turn and battle.

## How i made my github profile
It was very simple. 
First , I opened githubs site at github.com and clicked the "sign up" button. I promptly entered my email, created a difficult password for the account and the username. 
I declined the option to receive occasional product updates and announcements. I confirmed that i was not a robot by abjectly finishing the greuling the verification process and entering the launch code I got on my email from github. 
After I did that, I made a new repository by clicking the "Create repository" button on the right. I named my repository, made the readme.me file and created the repository. First I added my three .cpp files to the program after which I made this readme file.



![image](https://github.com/hamzulak/all-seeing-repository/assets/148567107/ff8bb64e-af85-46a2-8292-9cbbd62c1430)


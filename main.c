/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */

#include <stdio.h>

#define MAX_ROOMS 5  //  max number of rooms

// Function prototypes
void initializeSystem(int lights[], int temperatures[], int motion[], int locks[], int rooms);
void displayMenu();
void controlLights(int lights[], int rooms);
void readTemperature(int temperatures[], int rooms);
void detectMotion(int motion[], int rooms);
void securitySystem(int locks[], int motion[], int rooms);
void analyzeHouseStatus(int lights[], int temperatures[], int motion[], int locks[], int rooms);
int main() {
     int rooms;
    printf("Enter number of rooms: ");
    scanf("%d", &rooms);

    int lights[rooms], temperatures[rooms], motion[rooms], locks[rooms];
    initializeSystem(lights, temperatures, motion, locks, rooms);

    int choice;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: controlLights(lights, rooms); break;
            case 2: readTemperature(temperatures, rooms); break;
            case 3: detectMotion(motion, rooms); break;
            case 4: securitySystem(locks, motion, rooms); break;
            case 5: analyzeHouseStatus(lights, temperatures, motion, locks, rooms); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    

    return 0;
}

 
void initializeSystem() {
  
}

void displayMenu() {
   
}
void controlLights() {

}
void readTemperature() {

}
void detectMotion() {

}
void securitySystem() {

}
void analyzeHouseStatus() {

}

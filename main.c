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

 
void initializeSystem(int lights[], int temperatures[], int motion[], int locks[], int rooms) {
    for (int i = 0; i < rooms; i++) {
        lights[i] = 0;  
        temperatures[i] = 22;
        motion[i] = 0; 
        locks[i] = 1; 
    }
    printf("System initialized successfully!\n");

}

void displayMenu() {
    printf("\n===== Smart Home Menu =====\n");
    printf("1. Toggle Light\n");
    printf("2. Read Temperature\n");
    printf("3. Check Motion Sensor\n");
    printf("4. Lock/Unlock Security System\n");
    printf("5. House Status Summary\n");
    printf("6. Exit\n");
   
}
void controlLights(int lights[], int rooms) {
    int room;
    printf("Enter room number to toggle light (1-%d): ", rooms);
    scanf("%d", &room);
    
    if (room < 1 || room > rooms) {
        printf("Invalid room number!\n");
        return;
    }

    lights[room - 1] = !lights[room - 1]; // Toggle light
    printf("Light in Room %d is now %s.\n", room, lights[room - 1] ? "ON" : "OFF");
  
}
void readTemperature(int temperatures[], int rooms) {
    int room;
    printf("Enter room number to check temperature (1-%d): ", rooms);
    scanf("%d", &room);
    
    if (room < 1 || room > rooms) {
        printf("Invalid room number!\n");
        return;
    }
    printf("Temperature in Room %d: %d°C\n", room, temperatures[room - 1]);

}
void detectMotion(int motion[], int rooms) {
    int room;
    printf("Enter room number to check motion sensor (1-%d): ", rooms);
    scanf("%d", &room);
    
    if (room < 1 || room > rooms) {
        printf("Invalid room number!\n");
        return;
    }
    printf("Motion in Room %d: %s\n", room, motion[room - 1] ? "Detected" : "No Motion");
}


void securitySystem(int locks[], int motion[], int rooms) {
    int room;
    printf("Enter room number to lock/unlock (1-%d): ", rooms);
    scanf("%d", &room);

    if (room < 1 || room > rooms) {
        printf("Invalid room number!\n");
        return;
    }

    locks[room - 1] = !locks[room - 1]; // Toggle lock state
    printf("Door in Room %d is now %s.\n", room, locks[room - 1] ? "Locked" : "Unlocked");

}
void analyzeHouseStatus(int lights[], int temperatures[], int motion[], int locks[], int rooms) {
    printf("\n===== House Status Summary =====\n");
    for (int i = 0; i < rooms; i++) {
        printf("Room %d: Light %s, Temp %d°C, Motion %s, Door %s\n", 
            i + 1, 
            lights[i] ? "ON" : "OFF", 
            temperatures[i], 
            motion[i] ? "Detected" : "No Motion", 
            locks[i] ? "Locked" : "Unlocked"
        );
    }
}


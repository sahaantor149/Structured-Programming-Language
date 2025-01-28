#include <stdio.h>

struct Player {
    char username[50];
    int vitality;
    int magic;
    int defense;
    int attack;
};

int isPrime(int num);
int digitSum(int num);
int summation(int n);
int isSpectacular (int num);
int calculateLuck(struct Player p);

int main() {
    struct Player p;

    printf("Enter player's username: ");
    scanf("%s", p.username);
    printf("Enter vitality: ");
    scanf("%d", &p.vitality);
    printf("Enter magic: ");
    scanf("%d", &p.magic);
    printf("Enter defense: ");
    scanf("%d", &p.defense);
    printf("Enter attack: ");
    scanf("%d", &p.attack);

    printf("Luck value for player %s: %d", p.username, calculateLuck(p));
}

int isPrime(int num) {
    if (num % 2 == 0) {
        return 0;
    }
    return 1;
}

int digitSum(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + digitSum(num / 10);
}

int summation(int n) {
    if (n == 0) {
        return 0;
    }
    return n + summation(n-1);
}

int isSpectacular (int num) {
    if (isPrime(num)) {
        int s = digitSum(num);
        int lastDigit = num % 10;

        if (lastDigit == 0) {
            return 0;
        }

        if (summation(s) % lastDigit == 0) {
            return 1;
        }
    }
    return 0;
}

int calculateLuck(struct Player p) {
    int totalStats = p.vitality + p.magic + p.defense + p.attack;

    if (isSpectacular(totalStats)) {
        printf("%d is a spectacular number\n", totalStats);
        return totalStats * 10;
    } else {
        printf("%d is not a spectacular number\n", totalStats);
        return totalStats;
    }
}

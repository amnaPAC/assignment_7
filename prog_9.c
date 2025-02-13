#include <stdio.h>

float internetPackageCost(int GB, char network[]) {
    float cost = 0.0;

    if ((network[0] == 'Z' || network[0] == 'z') && (network[1] == 'o' || network[1] == 'O')) {
        cost = GB * 100;
    } else if ((network[0] == 'J' || network[0] == 'j') && (network[1] == 'a' || network[1] == 'A')) {
        cost = GB * 120;
    } else if ((network[0] == 'T' || network[0] == 't') && (network[1] == 'e' || network[1] == 'E')) {
        cost = GB * 90;
    } else {
        printf("Invalid network provider.\n");
        return -1;
    }
    
    return cost;
}

int main() {
    int GB;
    char network[20];

    printf("Enter the number of GB required: ");
    scanf("%d", &GB);
    printf("Enter network provider (Zong/Jazz/Telenor): ");
    scanf("%s", network);

    float totalCost = internetPackageCost(GB, network);

    if (totalCost != -1) {
        printf("Total Cost for %d GB on %s = %.2f PKR\n", GB, network, totalCost);
    }

    return 0;
}

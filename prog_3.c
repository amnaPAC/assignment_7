#include <stdio.h>

float calculateBill(int units) {
    float bill = 0;
    if (units <= 100) {
        bill = units * 18;
    } else if (units <= 200) {
        bill = (100 * 18) + ((units - 100) * 22);
    } else if (units <= 300) {
        bill = (100 * 18) + (100 * 22) + ((units - 200) * 26);
    } else if (units <= 700) {
        bill = (100 * 18) + (100 * 22) + (100 * 26) + ((units - 300) * 30);
    } else {
        bill = (100 * 18) + (100 * 22) + (100 * 26) + (400 * 30) + ((units - 700) * 35);
    }
    return bill;
}

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

float remainingBalance(float amount) {
    float fed = amount * 0.195;
    float serviceCharges = amount * 0.10;
    return amount - (fed + serviceCharges);
}

float calculateZakat(float totalWealth, float goldRate) {
    float nisab = 87.48 * goldRate;
    if (totalWealth >= nisab) {
        return totalWealth * 0.025;
    } else {
        return 0;
    }
}

int main() {
    int units;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    
    float bill = calculateBill(units);
    printf("Bill = %.2f PKR\n", bill);
    
    float distance, fuelAverage, fuelPrice;
    printf("Enter total trip distance (km): ");
    scanf("%f", &distance);
    printf("Enter vehicle fuel average (km/l): ");
    scanf("%f", &fuelAverage);
    printf("Enter current fuel price (PKR/liter): ");
    scanf("%f", &fuelPrice);
    
    float fuelCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    printf("Total Fuel Cost = %.2f PKR\n", fuelCost);
    
    float amount;
    printf("Enter mobile recharge amount (PKR): ");
    scanf("%f", &amount);
    
    float balance = remainingBalance(amount);
    printf("Available Balance = %.2f PKR\n", balance);
    
    float totalWealth, goldRate;
    printf("Enter your total wealth (PKR): ");
    scanf("%f", &totalWealth);
    printf("Enter current gold rate per gram (PKR): ");
    scanf("%f", &goldRate);
    
    float zakat = calculateZakat(totalWealth, goldRate);
    printf("Zakat Payable = %.2f PKR\n", zakat);
    
    return 0;
}

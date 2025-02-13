#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

float convertCurrency(float amount, char currencyType) {
    float exchangeRate;
    
    printf("Enter exchange rate for %c to PKR: ", currencyType);
    scanf("%f", &exchangeRate);
    
    return amount * exchangeRate;
}

int main() {
    float distance, fuelAverage, fuelPrice, totalCost;
    float amount, convertedAmount;
    char currencyType;
    
    printf("Enter total trip distance (in km): ");
    scanf("%f", &distance);
    
    printf("Enter vehicle's fuel average (km/l): ");
    scanf("%f", &fuelAverage);
    
    printf("Enter current fuel price per liter (PKR): ");
    scanf("%f", &fuelPrice);
    
    totalCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    
    printf("Total Fuel Cost = %.2f PKR\n", totalCost);
    
    printf("\nEnter amount to convert: ");
    scanf("%f", &amount);
    
    printf("Enter currency type (USD/SAR/AED): ");
    scanf(" %c", &currencyType);
    
    convertedAmount = convertCurrency(amount, currencyType);
    
    printf("Converted Amount in PKR = %.2f\n", convertedAmount);
    
    return 0;
}

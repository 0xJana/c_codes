#include <stdio.h>
#include <stdlib.h>
void calc(float numberOfMiles,float fuelConsumption,float *fuelConsumptionPerMile){
    if(numberOfMiles == 0){
        *elConsumptionPerMile =0;
    }
    if(fuelConsumption < 0 || numberOfMiles < 0){
        printf("Error: Negative values are not allowed\n");
        return;
    }
    *fuelConsumptionPerMile = fuelConsumption / numberOfMiles;
}
int main(){
    float numberOfMiles=0, fuelConsumption=0, fuelConsumptionPerMile=0;
    printf("Enter the number of miles: ");
    scanf("%f", &numberOfMiles);
    printf("Enter the fuel consumption: ");
    scanf("%f", &fuelConsumption);
    calc(numberOfMiles, fuelConsumption, &fuelConsumptionPerMile);
    printf("Fuel consumption per mile: %.2f\n", fuelConsumptionPerMile);
}

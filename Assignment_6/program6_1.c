#include<stdio.h>   
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits >= 100)
    {
        fBill = fBill + (iUnits * 5);
    }
    
}

int main()
{
    int iUnits = 0.0f;

    printf("Enter Consumed Units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
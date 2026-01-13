#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    system("cls");
    int vehSlot[] = {100, 75, 100, 50, 30};
    int vehSlotTemp[] = {100, 75, 100, 50, 30};
    int vehPriority[] = {2, 3, 1, 4, 5};

    float vehAllocation[] = {0.15, 0.1, 0.15, 0.25, 0.35};
    char *customerType[] = {"VIP", "Staff", "Disable People", "Regiestered", "Visitors"};

    for (int i = 0; i < 5; i++)
    {
        int maxlength = 15;

        printf("(%d)%-15s", vehPriority[i], customerType[i]);
    }
    printf("\n");

    float fullAllocation[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            fullAllocation[i][j] = floor(vehSlot[i] * vehAllocation[j]);    
            vehSlotTemp[i] = vehSlotTemp[i] - fullAllocation[i][j];
        }
  
        if (vehSlotTemp[i] > 0)
        {
            fullAllocation[i][2] += vehSlotTemp[i];
        }
      
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            printf("%-19.f", fullAllocation[i][j]);
        }
        printf("\n");
        
    }
    


    return 0;
}
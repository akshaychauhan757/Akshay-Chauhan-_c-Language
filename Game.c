#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int Random_Number = (rand() % 100) + 1;
    int NUmber_of_Gusses = 0;
    int Gussed_Number;
    do{
        printf("Gusses the Number: ");
        scanf("%d", &Gussed_Number);
        if(Gussed_Number > Random_Number)
        {
            printf("Lower Number Please!\n");
        }
        else if(Gussed_Number < Random_Number){
            printf("Higher Number Please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        NUmber_of_Gusses++;
    }
    while(Gussed_Number != Random_Number);
    printf("You gussed the Number in %d gusses", NUmber_of_Gusses);
    return 0;
}
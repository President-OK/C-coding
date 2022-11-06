#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>


int main()
{
    float holder;
    holder = 0.00;
    int user;
    int dice;
    int faces;
    int rolls;
    int i;
    float norolls[20];
    for (i = 1; i < 21; ++i){
        norolls[i] = 0;
    }
    user = 1;
    rolls = 0;
    faces = 0;
    while ( user == 1){
        while ((rolls < 1) || (rolls > 100)){
            printf("Please enter the number of rolls between 1 and 100, this includes 1 and 100 \n");
            scanf("%d", &rolls);
        }
        while ((faces < 1) || (faces > 20)){
            printf("Please enter the number of faces between 1 and 20, this includes 1 and 20 \n");
            scanf("%d", &faces);
        }
        srand(time(0));
        
        for (i = 1; i < rolls + 1; ++i){
            dice = rand() % faces + 1;
            printf("%d\n", dice);
            norolls[dice] += 1;
            }
        for (i = 1; i < faces + 1; ++i){
            printf("The number of %d's %f\n", i, norolls[i]);
        }
        for (i = 1; i < faces + 1; ++i){
            holder = ((norolls[i] / rolls) * 100.00);
            printf("The percentage of %d's %f\n", i, holder);
        }
        printf("Please input a 1 to roll the dice again and a 0 to stop \n");
        scanf("%d", &user);
}

}

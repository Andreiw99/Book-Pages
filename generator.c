#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    FILE *file=fopen("numere_random.txt", "w");
    int n,iterator;
    srand(time(0));
    for(iterator=0;iterator<1000;iterator++)
    {
        n=rand()%1000000;
        fprintf(file,"%d ", n);
    }
    fclose(file);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Functii.h"
#include <time.h>


 void number_of_pages(int number)
{

    FILE *out_file=fopen("dataout.txt", "a");
    int constanta=9, iterator=1,suma=0,suma2=0,power=1;
    clock_t start,finish;
    double duration;
    start=clock();
    while(number>suma2+power*constanta*iterator)
    {
        suma=suma+constanta*power;
        suma2=suma2+constanta*iterator*power;
        power=power*10;
        iterator++;
    }
    suma=suma+(number-suma2)/iterator;
    if((number-suma2)%iterator==0)
    {
        fprintf(out_file,"%d pagini, ", suma);
        finish=clock();
        duration = (double)(finish - start) / CLOCKS_PER_SEC;
        fprintf(out_file,"duration: %.3fs \n", duration);
    }
    else
        if((number-suma2)%iterator==1)
        {
            fprintf(out_file,"%d pagini si %d cifra, ", suma,(number-suma2)%iterator);
            finish=clock();
            duration = (double)(finish - start) / CLOCKS_PER_SEC;
            fprintf(out_file, "duration: %.3fs \n", duration);
        }
        else
        {
            fprintf(out_file,"%d pagini si %d cifre, ", suma,(number-suma2)%iterator);
            finish=clock();
            duration = (double)(finish - start) / CLOCKS_PER_SEC;
            fprintf(out_file, "duration: %.3fs \n", duration);
        }
    fclose(out_file);

}



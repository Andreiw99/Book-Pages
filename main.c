#include <stdio.h>
#include <stdlib.h>
#include "Functii.h"
#include <time.h>

int main()
{

    FILE *file=fopen("..\\Generator\\numere_random.txt", "r");
    FILE *out_file=fopen("dataout.txt", "w");
    int number;
    while(fscanf (file, "%d", &number)==1)
    {
        number_of_pages(number);
    }
    fclose(file);
    fclose(out_file);
    return 0;
}

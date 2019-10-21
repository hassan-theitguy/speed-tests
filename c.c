#include <stdio.h>
#include <time.h>

int main()
{
    clock_t before, after;
    
    before = clock();

    FILE * f;
    f = fopen("output.txt","w");

    for (int x = 1; x < 100001; x++)
    {
        printf("%d\n", x);
        fprintf(f, "%d\n", x);
    }

    fclose(f);

    after = clock();

    double elapsed;
    
    elapsed = (double) (after - before) / CLOCKS_PER_SEC;

    printf("%f", elapsed);

    return 0;
}
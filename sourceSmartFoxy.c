
int r[6][6] = {}, k, haveLoops, haveMultipleRibs;

int main() {

    int count = 0;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("\nInput Rmn for m = %d n = %d: ", i+1, j+1);
            scanf("%d", &r[i][j]);
        }
    }

    printf("\n");

    printf("Contiguity matrix: \n");
    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }




    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if(r[i][j] != 0)
                count++;
        }
    }

    int array[6][count];

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < count; j++)
        {
            array[i][j] = 0;
        }
    }

    putchar('\n');

    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if(r[i][j] != 0)
            {
                array[i][k] = r[i][j];
                array[j][k] = r[i][j];
                k++;
            }
        }
    }


    printf("Incident matrix: \n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < count; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if(i == j)
            {
                if(r[i][j] != 0)
                {
                    haveLoops = 1;
                }
            }
        }
    }

    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if(r[i][j] > 1)
                haveMultipleRibs = 1;
        }
    }

    putchar('\n');
    printf("Type of graph - ");
    if(haveLoops == 0 && haveMultipleRibs == 0)
        printf("Common graph");
    else if (haveLoops == 0 && haveMultipleRibs == 1)
        printf("Multigraph");
    else if (haveLoops == 1 && haveMultipleRibs == 1)
        printf("Pseudograph");
    else if (haveLoops == 1 && haveMultipleRibs == 0)
        printf("Orientable graph");
    else
        printf("Unknown error");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define SIZE 1000 //tamanho do vetor

int intcmp(const void *a, const void *b) {
    return *(const int *)a - *(const int *)b;
}

void printArray(int *v, int n) {
    int i = 0;
    for(i = 0; i < n; i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}

void preencheArray(int *v, int *v2, int *v3,  int *v4, int n) {
    int i = 0;
    for(i = 0; i < n; i++) {
        v[i] = rand()%100; //sorteia valor entre 0 e 99 e atribui ao elemento do vetor
        v2[i] = v[i];
        v3[i] = v[i];
    }
}

int checkSort(int *v, int n) {
    if(n <= 0) return -1;
    int ant = v[0];
    int i;
    for(i = 1; i < n; i++) {
        if(v[i] < ant) return 0;
        ant = v[i];
    }
    return 1;
}

void insertionsort(int *v, int n);

void merge(int *v, int i, int f);

void mergeSort(int *v, int i, int f);

int partition(int *v, int i, int f);

void quicksort(int *v, int i, int f);

int main() {
    int SIZE;
    
    printf("Informe o tamanho do array:\n");
    scanf("%d",&SIZE);
    
    srand(time(NULL)); //inicializa semente aleatoria
    
    //declara e preenche os arrays de forma aleatória
    int *v = (int*)malloc(SIZE*sizeof(int));
    int *v2 = (int*)malloc(SIZE*sizeof(int));
    int *v3 = (int*)malloc(SIZE*sizeof(int));
    int *v4 = (int*)malloc(SIZE*sizeof(int));
    preencheArray(v,v2,v3,v4,SIZE);
    
    clock_t ticks[2];
    
    ticks[0] = clock();
    mergeSort(v,0,SIZE-1);
    ticks[1] = clock();
    double tempo1 = (double)(ticks[1] - ticks[0])/ CLOCKS_PER_SEC;   
   // printf("Tempo gasto - merge: %lf s.\n", tempo1);
       
    ticks[0] = clock();
    insertionsort(v2, SIZE);
    ticks[1] = clock();
    double tempo2 = (double)(ticks[1] - ticks[0])/ CLOCKS_PER_SEC;
  //  printf("Tempo gasto - insertion: %lf s.\n", tempo2);
    
    ticks[0] = clock();
    quicksort(v3, 0, SIZE-1);
   // qsort(v3, SIZE, sizeof(int), intcmp);
    ticks[1] = clock();
    double tempo3 = (double)(ticks[1] - ticks[0])/ CLOCKS_PER_SEC;
    
    ticks[0] = clock();
    qsort(v4, SIZE, sizeof(int), &intcmp);
    ticks[1] = clock();
    double tempo4 = (double)(ticks[1] - ticks[0])/ CLOCKS_PER_SEC;
    
    printf("%lf %lf %lf %lf\n",tempo1, tempo2, tempo3, tempo4);

    
    //Verifica se o array final ficou ordenado
    int r = checkSort(v,SIZE);
    printf("Check merge: %d\n",r);
    r = checkSort(v2,SIZE);
    printf("Check insertion: %d\n",r);
    r = checkSort(v3,SIZE);
    printf("Check quick: %d\n",r);
    r = checkSort(v4,SIZE);
    printf("Check qsort: %d\n",r);
        
    return 0;
}

void insertionSort(int *v, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}
#include <stdio.h>
void main()
{
    int n = 1, i = 1, j, maior;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        maior = 0;
        long int alunos[n];
        int notas[n];
        for (j = 0; j < n; j++)
        {
            scanf("%ld %d", &alunos[j], &notas[j]);
            maior = (notas[j] >= maior) ? notas[j] : maior;
        }
        printf("Turma %d\n", i);

        for (j = 0; j < n; j++)
            if (notas[j] == maior)
                printf("%ld ", alunos[j]);
        printf("\n\n");
        i++;
    }
}
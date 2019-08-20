#include <stdio.h>
void main()
{
    int nGps, pilotos, i, j, k, qTabelas, pilotosPontuados, tabela, gp, posicaoPilotoC, pilotoC, maiorPont, countVencedores;
    while (1)
    {
        scanf("%d %d", &nGps, &pilotos);
        if (nGps == 0 && pilotos == 0)
            break;
        int gps[nGps][pilotos];
        for (i = 0; i < nGps; i++)
            for (j = 0; j < pilotos; j++)
                scanf("%d", &gps[i][j]);

        scanf("%d", &qTabelas);
        int tabelasPonts[qTabelas][pilotos];
        for (i = 0; i < qTabelas; i++)
        {
            scanf("%d", &pilotosPontuados);
            for (j = 0; j < pilotosPontuados; j++)
                scanf("%d", &tabelasPonts[i][j]);

            //Colocando zeros nos lugares da tabela que não são pontuados
            if (pilotosPontuados < pilotos)
            {
                for (k = pilotosPontuados; k < pilotos; k++)
                {
                    tabelasPonts[i][k] = 0;
                }
            }
        }

        for (i = 0; i < qTabelas; i++)
        {
            printf("tabela %d :", i);
            for (j = 0; j < pilotos; j++)
            {
                printf("%d ", tabelasPonts[i][j]);
            }
            printf("\n");
        }
        for (tabela = 0; tabela < qTabelas; tabela++)
        {
            //Pontuações ordenadas de pilotos 1 até pilotos.
            int pontuacoes[pilotos];
            for (i = 0; i < pilotos; i++)
                pontuacoes[i] = 0;

            for (gp = 0; gp < nGps; gp++)
            {

                for (posicaoPilotoC = 0; posicaoPilotoC < pilotos; posicaoPilotoC++)
                {
                    pilotoC = gps[gp][posicaoPilotoC];
                    printf("piloto no lugar %d com %d pontos\n", posicaoPilotoC + 1, tabelasPonts[tabela][posicaoPilotoC]);
                    pontuacoes[pilotoC] += tabelasPonts[tabela][posicaoPilotoC];

                }
            }

            int vencedores[pilotos];
            //Pontuação do piloto 1
            maiorPont = pontuacoes[0], countVencedores = 0;
            for (pilotoC = 0; pilotoC < pilotos; pilotoC++)
                if (pontuacoes[pilotoC] > maiorPont)
                {
                    maiorPont = pontuacoes[pilotoC];
                }

            for (pilotoC = 0; pilotoC < pilotos; pilotoC++)
            {
                if (pontuacoes[pilotoC] >= maiorPont)
                {
                    vencedores[countVencedores] = pilotoC;
                    countVencedores++;
                    printf("%d ", pilotoC+1);
                }
            }

            printf("\n");
        }
    }
}

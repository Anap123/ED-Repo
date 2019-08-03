#include <stdio.h>
#include <math.h>
void main()
{
    int numCartas, cartaAtual, limite, i, j, temp, retirada, lenPilha;
    int pontosBob = 0, pontosAlice = 0;

    scanf("%d %d %d", &numCartas, &cartaAtual, &limite);
    int pilha[numCartas];

    lenPilha = numCartas - 1;

    for (i = 0; i < lenPilha; i++)
    {
        scanf("%d", &temp);
        pilha[i] = temp;
    }

    for (i = 0; i < numCartas - 1; i++)
    {
        retirada = pilha[i];
        lenPilha--;
        //Retirar o ultimo item da pilha

        //Checar de quem é a vez

        //Alice
        if (fabs(cartaAtual - retirada) <= limite)
        {

            if (i % 2 == 0)
            {
                pontosAlice += abs(cartaAtual - retirada);
            }
            else
            {
                pontosBob += abs(cartaAtual - retirada);
            }
            cartaAtual = retirada;
        }
    }

    printf("%d %d\n", pontosAlice, pontosBob);
}

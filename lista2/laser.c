#include <stdio.h>
void main()
{
    int alt, camad, i, j, buracos, ant, temp;
    while (1)
    {
        scanf("%d %d", &alt, &camad);
        if (alt == 0 && camad == 0)
            break;
        buracos = ant = temp = 0;
        for(i = 0; i < camad; i++){
            scanf("%d", &temp);

            if(alt-temp > ant){
                buracos+=(alt-temp)-ant;
            }

            ant = alt-temp;
        }
        printf("%d\n", buracos);
    }
}

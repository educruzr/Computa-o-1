#include<stdio.h>

int main()
{

    int hora, min, seg;
    float aux = 5.5;

    printf("Digite hora, minuto e segundo:  ");
    scanf ("%d %d %d", &hora, &min, &seg);

    if (hora > 1 && min >15)
    {
        printf("Quantidade de segundos:%d", hora * 60 * 60 + min * 60 + seg );


    }

    else
    {
        printf("Quantidade de minutos:%d", min + hora * 60 + seg / 60  );
    }


    return 0;
}

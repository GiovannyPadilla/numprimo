#include <stdio.h>

int main()
{
    int num, primo = 1;
    int i;
    printf("Ingrese un numero:\n");
    scanf("%d", &num);
    
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
            break;
        }
    }
    
    if (primo == 1)
    {
        printf("El numero ingresado es primo.\n");
    }
    else
    {
        printf("El numero ingresado no es primo.\n");
    }
    
    return 0;
}

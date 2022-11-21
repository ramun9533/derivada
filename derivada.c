#include<stdio.h>

void main()

{
int a, b, c, d, n, m, p; //la variable d es la constante
printf("\n Favor de intruducir las constantes de la ecuacion (a, b, c, d) y sus exponentes (n, m, p) \n");
printf("\n aX^n+bX^m+cX^p+d \n");
printf("\n Favor de proporcionar la constante ""a"" \n"); // carga de exponentes y constantes
scanf("%d",&a);
printf("\n Favor de proporcionar el exponente ""n"" \n");
scanf("%d",&n);
// printf("\n Favor de proporcionar la constante ""b"" \n");
// scanf("%d",&b);
// printf("\n Favor de proporcionar el exponente ""m""\n");
// scanf("%d",&m);
// printf("\n Favor de proporcionar la constante ""c"" \n"); // carga de exponentes y constantes
// scanf("%d",&c);
// printf("\n Favor de proporcionar el exponente ""p"" \n");
// scanf("%d",&p);
// printf("\n Favor de proporcionar la constante ""d"" \n"); // carga de exponentes y constantes
// scanf("%d",&d);
//aX^n+bX^m+cX^p+d
// printf("\n %dX^%d+%dX^%d+%dX^%d+%dX \n", a, n, b, m, c, p, d);
//Aqui empieza la integral
    // n++;
    // if (a>1 && n>1 )
    // printf("%dX^%d",a,n);
    // if ((a>1 && n>1) && (a==n) )
    // printf("X^%d",a,n);
printf("(""%dX^%d"")/%d",a,n,n); // Prueba impresion de parentesis
}

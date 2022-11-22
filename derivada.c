#include<stdio.h>

void main()

{
float acumx1, acumx2, acumx3, acumx, acumy,acumxx, acumxx1, acumxx2 ,acumxx3 ,acumyy, acumyy1, acumyy2 ,acumyy3,acumy1, acumy2, acumy3;
int i,j,a, b, c, d, n, m, p, x, y; //la variable d es la constante
printf("\n Favor de intruducir las constantes de la ecuacion (a, b, c, d) y sus exponentes (n, m, p) \n");
printf("\n aX^n+bX^m+cX^p+d \n");
printf("\n Favor de proporcionar la constante ""a"" \n"); // carga de exponentes y constantes
scanf("%d",&a);
printf("\n Favor de proporcionar el exponente ""n"" \n");
scanf("%d",&n);
printf("\n Favor de proporcionar la constante ""b"" \n");
scanf("%d",&b);
printf("\n Favor de proporcionar el exponente ""m""\n");
scanf("%d",&m);
printf("\n Favor de proporcionar la constante ""c"" \n"); // carga de exponentes y constantes
scanf("%d",&c);
printf("\n Favor de proporcionar el exponente ""p"" \n");
scanf("%d",&p);
printf("\n Favor de proporcionar la constante ""d"" \n"); // carga de exponentes y constantes
scanf("%d",&d);
printf("\n Favor deos limites de la integral");
printf("\n Favor de proporcionar limite Siperior \n"); // carga de Limites
scanf("%d",&x);
printf("\n Favor de proporcionar limite Inferior  \n");
scanf("%d",&y);
//aX^n+bX^m+cX^p+d
// printf("\n %dX^%d+%dX^%d+%dX^%d+%dX \n", a, n, b, m, c, p, d);
//Aqui empieza la integral
n++; //primera integral
    // if (a>1 && n>1 )
    // printf("%dX^%d",a,n);
    if (a==1 && n>1) //aX^n+bX^m+cX^p+d
        printf("X^%d",n);
        
printf("\n");
    if ((a>1 && n>1) && (a==n) )
        printf("X^%d",a,n);
    if ((a>1 && n>1) && (a!=n))
        printf("(""%dX^%d"")/%d",a,n,n); // Prueba impresion de parentesis
//Segunda integral
//aX^n+ bX^m +cX^p+d
// printf("\n Favor de proporcionar la constante ""b"" \n");
// scanf("%d",&b);
// printf("\n Favor de proporcionar el exponente ""m""\n");
m++;
if (b==1 && m>1) //aX^n+bX^m+cX^p+d
        printf("X^%d",m);
if (a>1 && n>1 )
printf("%dX^%d",a,n);
printf("+");
    if ((b>1 && m>1) && (b==m) )
        printf("X^%d",m);
    if ((b>1 && m>1) && (b!=m))
        printf("(""%dX^%d"")/%d",b,m,m); // Prueba impresion de parentesis
//Tercera Integral
//aX^n+ bX^m + cX^p +d
// printf("\n Favor de proporcionar la constante ""c"" \n"); // carga de exponentes y constantes
// scanf("%d",&c);
// printf("\n Favor de proporcionar el exponente ""p"" \n");
// scanf("%d",&p);
p++;
if (c==1 && p>1) //aX^n+bX^m+cX^p+d
        printf("X^%d",p);
if (a>1 && n>1 )
printf("%dX^%d",a,n);
printf("+");
    if ((c>1 && p>1) && (c==p) )
        printf("X^%d",p);
    if ((c>1 && p>1) && (c!=p))
       printf("(""%dX^%d"")/%d",c,p,p); // Prueba impresion de parentesis
//Cuarta Integral
//aX^n+ bX^m + cX^p +d
printf("+");
printf("%dX+C\n",d);
//primera integral definida variable X
//aX^n +bX^m+cX^p+d
//acumx=0;


//float acumxx;
// if (n>1)
acumx=1;
int np=n+1;
// printf("%d\n",n);
// printf("%d\n",np);
{
    for (i=0;i<n;i++)
{
    acumx=(x*acumx);
}
}
printf("%.2f\n",acumx); //la variable X elevada al exponente n+1
acumxx=a*(acumx/n);//Suma 1 de X
printf("%.2f\n",acumxx);
//Segunda integral definida variable X
//aX^n +bX^m+cX^p+d
acumx1=1;
//int np=n+1;
printf("%d\n",m);
//printf("%d\n",np);
{
    for (i=0;i<m;i++)
{
    acumx1=(x*acumx1);
}
}
printf("%.2f\n",acumx1); //la variable X elevada al exponente n+1
acumxx1=b*(acumx1/m);//Suma 2 de X
printf("%.2f\n",acumxx1);
//Tercera integral definida variable X
//aX^n +bX^m+ cX^p+ d
acumx2=1;
//int np=n+1;
printf("%d\n",p);
//printf("%d\n",np);
{
    for (i=0;i<p;i++)
{
    acumx2=(x*acumx2);
}
}
printf("%.2f\n",acumx2); //la variable X elevada al exponente n+1
acumxx2=c*(acumx2/p);//Suma 3 de X
printf("%.2f\n",acumxx2);
//Cuarta integral definida variable X
//aX^n +bX^m+ cX^p+ d
acumx3=d*x; //Suma 4 de X
acumxx3=acumxx2+acumxx1+acumxx+acumx3;
printf("%.2f\n",acumxx3);
//Integral definida con el limite inferior
// acumyy, acumyy1, acumyy2 ,acumyy3,acumy, acumy1, acumy2, acumy3;
// int i,j,a, b, c, d, n, m, p, x, y; //la variable d es la constante
//primera integral definida variable X
//aX^n +bX^m+cX^p+d
//acumx=0;


//float acumxx;
// if (n>1)
acumy=1;
//int np=n+1;
// printf("%d\n",n);
// printf("%d\n",np);
{
    for (i=0;i<n;i++)
{
    acumy=(y*acumy);
}
}
printf("%.2f\n",acumy); //la variable X elevada al exponente n+1
acumyy=a*(acumy/n);//Suma 1 de X
printf("%.2f\n",acumyy);
//Segunda integral definida variable X
//aX^n +bX^m+cX^p+d
acumy1=1;
//int np=n+1;
printf("%d\n",m);
//printf("%d\n",np);
{
    for (i=0;i<m;i++)
{
    acumy1=(y*acumy1);
}
}
printf("%.2f\n",acumy1); //la variable X elevada al exponente n+1
acumyy1=b*(acumy1/m);//Suma 2 de X
printf("%.2f\n",acumyy1);
//Tercera integral definida variable X
//aX^n +bX^m+ cX^p+ d
acumy2=1;
//int np=n+1;
printf("%d\n",p);
//printf("%d\n",np);
{
    for (i=0;i<p;i++)
{
    acumy2=(y*acumy2);
}
}
printf("%.2f\n",acumy2); //la variable X elevada al exponente n+1
acumyy2=c*(acumy2/p);//Suma 3 de X
printf("%.2f\n",acumyy2);
//Cuarta integral definida variable X
//aX^n +bX^m+ cX^p+ d
acumy3=d*y; //Suma 4 de X
acumyy3=acumyy2+acumyy1+acumyy+acumy3;
printf("%.2f\n",acumyy3);
}

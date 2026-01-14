#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Entere the number 1");
    scanf("%d",&a);
    printf("Entere the number 2");
    scanf("%d",&b);
    
    printf("Entere 1 for addition,2 for substraction,3 for multiplication,4 for divede");
    scanf("%d",&c);
    switch (c)
    {
        case 1 : printf("%d",a + b);
            break;
        case 2 : printf("%d",a - b);
            break;
        case 3 : printf("%d",a*b);
            break;
        case 4: printf("%d",a % b);
         break;
         default:printf("Errror");
    }
return 0;
}

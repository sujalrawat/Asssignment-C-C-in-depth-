                            /* ASSIGNMENT-2(C,C++in depth)
                                  (sujal Rawat)*/

1.
 #include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number.\n ");
    scanf("%d",&x);
    y=x%10;
    printf("The unit digit of %d is %d",x,y);
    return 0;
}

2.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x/10;
    printf("%d",y);
    return 0;
}

3.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);

    return 0;
}

4.
#include<stdio.h>
int main()
{
    int x,y;
    x=2;
    y=5;
    printf("%d %d\n",x,y);
    x=x+y; //x=2+5=7
    y=x-y; //y=7-5=2
    x=x-y; //x=7-2=5
    printf("%d %d\n",x,y);
    return 0;
}

5.
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter a three digit number\n");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=b+c+d;
    printf("The sum of digit in %d is %d",a,e);


    return 0;
}

6.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);

    printf("The ASCII value of %c = %d",c,c);
    return 0;
}

7.
#include<stdio.h>
int main()
{
    int x,ans;
    printf("Enter a number\n");
    scanf("%d",&x);
    ans= (x/2)?printf("Even"):printf("Odd");
    printf("%d",ans);


    return 0;
}

8.
#include<stdio.h>
int main()
{
    printf("The size of int is  %lu\n",sizeof(int));
    printf("The size of char is %lu\n",sizeof(char));
    printf("The size of float is %lu\n",sizeof(float));
    printf("The size of double is %lu\n",sizeof(double));

    return 0;
}

9.
#include<stdio.h>
int main()
{
    int x,y;
    x=7868668;
    printf("x= %d\n",x);

    y=x%10;
    x=x-y;
    printf("x= %d\n",x);
    return 0;
}

10.
#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter a number\n");
   scanf("%d",&x);
   printf("Enter a digit\n");
   scanf("%d",&y);
   printf("%d%d",x,y);
   return 0;
}

11.
#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter amount in Indian Rupees(inr)\n");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("Rs.%0.3f = $%0.3f",inr,usd);
    return 0;
}

12.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a three digit number.\n");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    printf("%d%d%d",b,c,d);
    return 0;
}


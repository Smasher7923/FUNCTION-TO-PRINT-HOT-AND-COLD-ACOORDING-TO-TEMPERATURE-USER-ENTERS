#include<stdio.h>
void temperature (int temp);
int main()
{int temp;
    printf("Please enter temperature in celcius\n");
    scanf("%d",&temp);
    temperature();
    return 0;
}
//definition 
void temperature( int temp);
int p;
if(temp<35)
{p=1;
}
if(temp>=35)
{p=2;
}
switch(p)
{
case 1:printf("it is COLD");
break;
case 2:printf( "it is hot");
break;
default:printf(" enter temperature  in numbers format ");
break;
}
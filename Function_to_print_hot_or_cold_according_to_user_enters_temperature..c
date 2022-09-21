#include<stdio.h>
void temperature (int t);
int main()
{ int t;
    printf("Please enter temperature in celcius\n");
    scanf("%d",&t);
    temperature(t);
    return 0;
}
//definition 
void temperature( int t)
{
if(t<35)
{
printf("cold ");
}
else if(t>=35)
{
printf("hot ");
}
else {
printf("wrong temperature entered");
}
}
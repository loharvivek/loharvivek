#include<stdio.h>  
 int main()    
{    
int x=10, y=20;      
printf("Before swap x=%d y=%d",x,y);      
x=x+y;//x=30 (10+20)    
y=x-y;//y=10 (30-20)    
x=x-y;//x=20 (30-10)    
printf("\nAfter swap x=%d y=%d",x,y);    
return 0;  
}   

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
scanf("%c", &ch);
printf("%c\n", ch);
scanf("%[^\n]%*c"); 
printf("Language\n");
scanf("%[^\n]%*c");
printf("Welcome To C!!\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
return 0;
}

  

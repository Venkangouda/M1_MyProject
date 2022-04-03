#include <stdio.h>  
int main()  
{  
    char g;  
    int n1, n2;   
    float r;  
    printf (" Select operation +   -   *   /  to perform \n ");  
    scanf ("%c", &g);  
    printf (" Enter 1st number: ");  
    scanf(" %d", &n1);   
    printf (" Enter 2nd number: ");  
    scanf (" %d", &n2);   
      
    if (g == '+')  
    {  
        r = n1 + n2;  
        printf (" Addition of %d and %d is %f", n1, n2, r);  
    }  
      
    else if (g == '-')  
    {  
        r = n1 - n2;  
        printf (" Subtraction of %d and %d is %f", n1, n2, r);  
    }  
      
    else if (g == '*')  
    {  
        r = n1 * n2;  
        printf (" Multiplication of %d and %d is %f", n1, n2, r);  
    }  
      
    else if (g == '/')  
    {  
        if (n2 == 0)    
        {  
            printf (" \n Denominator should not be zero so enter another value ");  
            scanf ("%d", &n2);        
        }  
        r = n1 / n2; 
        printf (" Division of %d and %d is %.2f", n1, n2, r);  
    }  
    else  
    {  
        printf(" \n You have entered wrong inputs ");  
    }  
    return 0;  
}  
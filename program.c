#include <stdio.h>

// int main()
// {
//     printf("Congratulations for first program!");
//     return 0;
// }




// int addition(int num1, int num2)
// {
//     int sum;
//     sum = num1+num2;

//     return sum;
// }

// int main()
// {
//     int var1, var2;

//     printf("Enter Number 1: ");
//     scanf("%d", &var1);
//     printf("Enter Number 2: ");
//     scanf("%d", &var2);

//     int result = addition(var1,var2);

//     printf("Sum of two numbers are: %d", result);

//     return 0;
// }


// void youtube()
// {
//     printf("You are learning C language in Hindi \n");
//     printf("Welcome to the world of programming");
// }

// int main()
// {
//     youtube();
//     return 0;
// }


// int increment(int var)
// {
//     var = var+1;
//     return var;
// }

// int main()
// {
//     int num1;

//     printf("enter no:");
//     scanf("%d",&num1);
//     int num2 = increment(num1);

//     printf("num1 value is: %d", num1);
//     printf("\nnum2 value is: %d", num2);

//     return 0;
// }

#include <stdio.h>
void increment(int  *var)
{
    *var = *var+1;
}

int main()
{
     int num=20;
    
     increment(&num);
     printf("Value of num is: %d", num);
     
   return 0;
}

#include <stdio.h>

// int main()
// {
//    int age;

//    printf("Enter your age: ");
//    scanf("%d",&age);

//    if(age >= 18)
//    {
// 	printf("You are eligible for voting");
//    }
//    else
//    {
// 	printf("You are not eligible for voting");
//    }

//    return 0;
// }





// int main()
// {   
//     int x = 25;
//     int y = 22;

//     if (x<y)
//     {
//         printf("Variable x is less than y \n");
//     }
    
//     printf("Statement outside the if block");
    
//     return 0;
// }




// int main()
// {
//     int x, y;
//     printf("enter the value of x:");
//     scanf("%d", &x);
//     printf("enter the value of y:");
//     scanf("%d", &y);

//     if (x>y)
//     {
// 	    printf("x is greater than y\n");
//     }

//     if (x<y)
//     {
// 	    printf("x is less than y\n");
//     }

//     if (x==y)
//     {
// 	    printf("x is equal to y\n");
//     }

//     printf("End of Program");
//     return 0;
// }



int main()
{
   int var1, var2;

   printf("Input the value of var1:");
   scanf("%d", &var1);
   printf("Input the value of var2:");
   scanf("%d",&var2);

   if (var1 != var2)
   {
	printf("var1 is not equal to var2\n");
	//Nested if else
        if (var1 > var2)
        {
            printf("var1 is greater than var2\n");
        }
        else
        {
            printf("var2 is greater than var1\n");
        }
   }
   else
   {
	printf("var1 is equal to var2\n");
   }

   return 0;
}

#include <stdio.h>
// int main()
// {
//     int counter=10;
//     while (counter >=0)
//     {	 
//         if (counter == 6)
//         {
//             counter--;
//             continue;
//         }
        
//         printf("%d  ", counter);
//         counter--;
//     }
//     return 0;
// }

// int main()
// {
//     int sum=0;
//     for(int i = 0; i<=10; i++)
//     {               
//         sum = sum+i;  
//         if (i==5)
//         {
//             goto addition;
//         }      
//     }

//     addition:
//     printf("%d", sum);
//     return 0;
// }

int main()
{
     int num =0;

     while(num<=10)
     {
        printf("value of variable num is: %d\n", num);   

        if (num == 6)
        {
            break;
        }        

        num++;
     }

     printf("Out of while-loop");
     return 0;
}
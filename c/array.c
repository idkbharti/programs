#include <stdio.h>
// int main()
// {
//     int arr[5];

//     for (int j=0; j<=4; j++)
//     {
//        printf("Enter number %d \n", j);
//        scanf("%d", &arr[j]);
//     }
    

//     for (int i=0; i<=4; i++)
//     {
//          printf("%d ", arr[i]);
//     }   

//     return 0;
// }


// int main()
// {
//     int marks[2][4] = {
//         {10,20,30,40},
//         {50,60,70,80}
//     };

//     for (int i=0; i<=1; i++)
//     {
//         for (int j=0; j<=3; j++)
//         {
//             printf("%d ", marks[i][j]);
//         }

//         printf("\n");        
//     }    
    
//     return 0;
// }

#include <string.h>

int main()
{
    char first_name[20] = "simon";
    char last_name[10] = "simon";

    if (strcmp(first_name, last_name) == 0)
    {
        printf("string 1 and string 2 are equal");
    }
    else
    {
        printf("string 1 and 2 are different");
    }
    


    //printf("Length of string is: %d", strlen(name));

    /*puts("Whats is your name: ");
    gets(name);
    
    puts(name);*/
    
    /*scanf("%s", name);
    printf("Welcome %s to C Programming", name);*/
}

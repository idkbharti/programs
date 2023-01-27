/* Structure in C Programming Tutorial in Hindi - */
// #include <stdio.h>

// struct StudentData
// {
//     char *stu_name;
//     int stu_id;
//     int stu_age;    
// };

// int main()
// {
//     struct StudentData student;
//     struct StudentData stu;

//     stu.stu_age=23;

//     student.stu_name = "Simon";
//     student.stu_id = 78;
//     student.stu_age = 45;

//     printf("Student Name: %s \n", student.stu_name);
//     printf("Student Id: %d \n", student.stu_id);
//     printf("Student Age: %d \n", student.stu_age);

//     printf("Student Age: %d", stu.stu_age);


//     return 0;
// }



#include <stdio.h>
int main()
{
   int num = 10;

   int *p;

   p = &num;

   *p = 100;

   printf("Address of Variable num is: %p \n", p);
   printf("Value of Variable num is: %d", num);

   return 0;
}


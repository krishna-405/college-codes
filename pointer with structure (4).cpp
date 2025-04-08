/*   Write a C program to declare a structure Student with members name, roll_no, and marks. Create a 
     pointer to the structure and use it to access and modify structure members.  */
#include <stdio.h>
struct Student 
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct Student stu;
    struct Student *ptr;
    ptr = &stu;
    printf("Enter the details :\n");
    for(int i=0; i<3; i++)
    {
        printf("Student %d\n", i+1);
        printf("Roll number : ");
        scanf("%d", &ptr[i].roll);
        printf("Name : ");
        scanf("%s", ptr[i].name);
        printf("Marks : ");
        scanf("%f", &ptr[i].marks);
    }
    printf("\nThe details are : \n");
    for(int i=0; i<3; i++)
    {
        printf("Student %d\n", i+1);
        printf("Name : %s\n", ptr[i].name);
        printf("Roll number : %d\n", ptr[i].roll);
        printf("Marks : %.2f\n", ptr[i].marks);
    }

    return 0;
}

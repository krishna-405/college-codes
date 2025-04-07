#include <stdio.h>
int main()
{
    int amt, note, num;
    printf("Enter the ammount : ");
    scanf("%d", &amt);
    printf("Enter the note (5, 10, 20, 50, 100, 200, 500) : ");
    scanf("%d", &note);
    num = amt/note;
    printf("The number of note is : %d\n", num);
}

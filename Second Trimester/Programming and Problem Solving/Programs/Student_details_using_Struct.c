#include <stdio.h>

struct Student
{
    char name[100];
    int english;
    int maths;
    int science;
    int total, average, percentage;
};

int main()
{
    int number_of_students = 0;
    struct Student students[100];
    printf("Enter the number of students you want to enter the marks for (Less than 100): ");
    scanf("%d", &number_of_students);
    for (int i = 0; i < number_of_students; i++)
    {
        printf("\n Enter the name of the Student: ");
        scanf("%s", &students[i].name);
        printf("Enter the marks obtained out of 100 in Maths: ");
        scanf("%d", &students[i].maths);
        printf("Enter the marks obtained out of 100 in Science: ");
        scanf("%d", &students[i].science);
        printf("Enter the marks obtained out of 100 in English: ");
        scanf("%d", &students[i].english);
        students[i].total = students[i].english + students[i].maths + students[i].science;
        students[i].percentage = students[i].total / 3;
        printf("The Total Marks obtained by the student %s are: %d", students[i].name, students[i].total);
        printf("\nThe Percentage obtained by the student %s is: %d", students[i].name, students[i].percentage);
    }

    return 0;
}

// Enter the number of students you want to enter the marks for (Less than 100): 2

//  Enter the name of the Student: Tony
// Enter the marks obtained out of 100 in Maths: 99
// Enter the marks obtained out of 100 in Science: 99
// Enter the marks obtained out of 100 in English: 99
// The Total Marks obtained by the student Tony are: 297
// The Percentage obtained by the student Tony is: 99
//  Enter the name of the Student: Peter
// Enter the marks obtained out of 100 in Maths: 98
// Enter the marks obtained out of 100 in Science: 90
// Enter the marks obtained out of 100 in English: 78
// The Total Marks obtained by the student Peter are: 266
// The Percentage obtained by the student Peter is: 88
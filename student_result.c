#include <stdio.h>

float calculatePercentage(int total)
{
    return total / 5.0;
}

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    char name[50];
    int roll;
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    printf("===== Student Result System =====\n\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter marks for 5 subjects (0-100):\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = calculatePercentage(total);
    grade = calculateGrade(percentage);

    printf("\n========== RESULT ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);
    printf("Total Marks  : %d / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    if (grade == 'F')
        printf("Result       : FAIL\n");
    else
        printf("Result       : PASS\n");

    return 0;
}
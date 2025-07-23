#include <stdio.h>
#include<string.h>

int main() {
    int num_of_courses;
    float credit_hours [10];
    float grades_score, GPA, GPA_percent;
    float sum_of_grades = 0.0 , total_credit_hours = 0.0, weighted_sum_grades = 0.0;
    char grade [2] ;
    printf("Enter Number of Courses: ");
    scanf("%d" , &num_of_courses);
    
    for (int i = 0 ; i < num_of_courses; i++) {
        printf("Enter Number of Credit Hours per course : ");
        scanf("%f" , &credit_hours[i]);
        printf("\nCourse %d:\n", i + 1);
   
        printf("\nEnter Grades per Courses: ");
        scanf("%s" , &grade);
        
        if (strcmp(grade, "A") == 0)
            grades_score = 4.0;
        else if (strcmp(grade, "B+") == 0)
            grades_score = 3.5;
        else if (strcmp(grade, "B") == 0)
            grades_score = 3.0;
        else if (strcmp(grade, "C+") == 0)
            grades_score = 2.5;
        else if (strcmp(grade, "C") == 0)
            grades_score = 2.0;
        else if (strcmp(grade, "D+") == 0)
            grades_score = 1.5;
        else if (strcmp(grade, "D") == 0)
            grades_score = 1.0;
        else {
            printf("Invalid grade entered!\n");
            continue;
        }
 
    weighted_sum_grades += grades_score * credit_hours[i];
    total_credit_hours += credit_hours[i];
}
    GPA = weighted_sum_grades /total_credit_hours;
    printf("\nGPA is %.2f", GPA);
    
    GPA_percent = (GPA / 4.0) * 100;
    printf("\nPercentage: %.2f%%\n", GPA_percent);

}

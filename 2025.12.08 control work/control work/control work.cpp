#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>
#include <windows.h>

typedef struct 
{
    char name[50];
    char numb[20];
} student;

typedef struct 
{
    char course_name[50];
    char prepod[50];
    student* students;
    int stud_count;
    int capacity;
} course;

void init_course(course* c, char* name, char* prepod) 
{
    strcpy(c->course_name, name);
    strcpy(c->prepod, prepod);
    c->stud_count = 0;
    c->capacity = 5;
    c->students = (student*)malloc(c->capacity * sizeof(student));
}

void add_student(course* c, char* name, char* numb) 
{
    if (c->stud_count >= c->capacity) {
        c->capacity *= 2;
        c->students = (student*)realloc(c->students, c->capacity * sizeof(student));
    }
    strcpy(c->students[c->stud_count].name, name);
    strcpy(c->students[c->stud_count].numb, numb);
    c->stud_count++;
}

course* most_big_course(course* courses, int num_courses) 
{
    if (num_courses <= 0) 
    {
        return NULL;
    }

    course* max_course = &courses[0];

    for (int i = 1; i < num_courses; i++) 
    {
        if (courses[i].stud_count > max_course->stud_count) 
        {
            max_course = &courses[i];
        }
    }
    return max_course;
}

void print_course(const course* c)
{
    printf("Курс: %s\n", c->course_name);
    printf("Преподаватель: %s\n", c->prepod);
    printf("Количество студентов: %d\n", c->stud_count);

    if (c->stud_count > 0) 
    {
        printf("Студенты: \n");
        printf("%-30s %-15s\n", "Имя", "Номер зачетки");
        for (int i = 0; i < c->stud_count; i++) 
        {
            printf("%-30s %-15s\n", c->students[i].name, c->students[i].numb);
        }
    }
    else 
    {
        printf("На курсе нет студентов\n");
    }
    printf("\n");
}

void print_all_courses(course* courses, int course_num) 
{
    for (int i = 0; i < course_num; i++)
    {
        print_course(&courses[i]);
    }
}

void free_course(course* c) 
{
    free(c->students);
    c->students = NULL;
    c->stud_count = 0;
    c->capacity = 0;
}

void free_all_courses(course* courses, int course_num) 
{
    for (int i = 0; i < course_num; i++) 
    {
        free_course(&courses[i]);
    }
}

void remove_newline(char* str) 
{
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
    }
}

void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int course_num;
    printf("Введите количество курсов: ");
    scanf("%d", &course_num);
    clear_input_buffer();  

    course* courses = (course*)malloc(course_num * sizeof(course));

    if (courses == NULL)
    {
        printf("Ошибка выделения памяти для курсов\n");
        return 1;
    }

    for (int i = 0; i < course_num; i++) 
    {
        char course_name[50];
        char prepod[50];

        printf("\nКурс %d:\n", i + 1);

        printf("Название курса: ");
        fgets(course_name, sizeof(course_name), stdin);
        remove_newline(course_name);

        printf("Преподаватель: ");
        fgets(prepod, sizeof(prepod), stdin);
        remove_newline(prepod);
        init_course(&courses[i], course_name, prepod);
        int student_num;
        printf("Сколько студентов добавить на курс: ");
        scanf("%d", &student_num);
        clear_input_buffer();  
        for (int j = 0; j < student_num; j++) 
        {
            char student_name[50];
            char student_numb[20];

            printf("  Студент %d:\n", j + 1);
            printf("    Имя: ");
            fgets(student_name, sizeof(student_name), stdin);
            remove_newline(student_name);

            printf("    Номер зачетки: ");
            fgets(student_numb, sizeof(student_numb), stdin);
            remove_newline(student_numb);

            add_student(&courses[i], student_name, student_numb);
        }
    }
    printf("\n=== Все курсы ===\n");
    print_all_courses(courses, course_num);
    course* max_course = most_big_course(courses, course_num);
    if (max_course) {
        printf("=== Курс с наибольшим количеством студентов ===\n");
        printf("Курс: %s\n", max_course->course_name);
        printf("Преподаватель: %s\n", max_course->prepod);
        printf("Количество студентов: %d\n", max_course->stud_count);
    }
    free_all_courses(courses, course_num);
    free(courses);
    return 0;
}
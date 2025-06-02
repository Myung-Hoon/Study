#include<stdio.h>
#include<string.h>
typedef struct Student // 구조체 선언
{
    char name[20];
    int age;
    double score;
} Student;

int main(){ // main 함수
    int num = 0;
    int *p; //포인터 변수 선언
    Student s1; // 구조체 변수 선언
    
    s1.age = 25;
    strcpy(s1.name, "Sung");
    s1.score = 100;

    printf("%d\n", s1.age);
    printf("%s\n", s1.name);
    printf("%lf\n", s1.score);

    p = &num; //num '주소'를 포인터 변수 p에 선언

    printf("%d\n",p); // 주소 출력
    printf("%d\n",num); // num 변수 출력
    printf("%d",*p); // 포인터 주소에 속한 내용 출력

    return 0;
}
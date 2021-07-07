
#include<stdio.h>

float calcFinalMark(float assignmentMark, float paperMark);
char findGrades(float finalMark);
void printDetails(float finalMark, char Grade);

int main()
{
    int i;
    float mark1,mark2,Final_mark;
    char Grade;

    for(i=0;i<5;i++)
    {
         printf("\nEnter Student %d final Assignment Mark and Paper Mark :\n",i+1);
         scanf("%f",&mark1);
         scanf("%f",&mark2);

         Final_mark = calcFinalMark(mark1,mark2);
         printf("\nFinal Mark : %f \n",Final_mark);

         Grade=findGrades(Final_mark);

         printDetails(Final_mark ,Grade) ;
    }

}

float calcFinalMark(float assignmentMark, float paperMark)
{
    float A_mark,P_mark, f_mark;

    A_mark= assignmentMark * 30/100;
    P_mark= paperMark *70/100;
    f_mark = A_mark + P_mark;

    return f_mark;


}

char findGrades(float finalMark)
{
    float mark = finalMark;

    if(mark>=75)
    {
        printf("Grade : A\n");
    }
    else if(mark>=60&&mark<75)
    {
        printf("Grade : B\n");
    }
    else if(mark>=50&&mark<60)
    {
        printf("Grade : C\n");
    }
    else
    {
        printf("Grade : F\n");
    }
}

void printDetails(float finalMark, char Grade)
{
    printf("\n final Marks \t Grade\n");
    printf(" %f \t %c",finalMark,Grade);

}



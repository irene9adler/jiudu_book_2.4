//¾Å¶È 2.4
#include <stdio.h>
#include <algorithm>
#include <string.h>
#define M 1000
using namespace std;
struct student
{
    char name[100];
    int age;
    int grade;
}stu[M];

bool cmp (student a,student b)
{
    if(a.grade != b.grade) return a.grade<b.grade;
    else
    {
        int tmp = strcmp(a.name,b.name);
        if(tmp!=0) return tmp<0;//a.name<b.name true
        else return a.age<b.age;
    }
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i=0;i<n;i++)
            scanf("%s %d %d",&stu[i].name,&stu[i].age,&stu[i].grade);

        sort(stu,stu+n,cmp);
        for(i=0;i<n;i++)
            {
                printf("%s %d %d",stu[i].name,stu[i].age,stu[i].grade);
                printf("\n");
            }
    }
    return 0;
}

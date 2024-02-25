#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//  struct Person
// {
//     char name[64];
//     int age;
// };
// typedef struct Person myperson;

//typedef 的用法就可以体现为以下，可以将多行构造函数的代码进行合并

typedef struct Person
{
   char name[64];
   int age;
}myperson;


void test1()
{
    char* p1,p2;
    cout<< typeid(p1).name()<<endl;
    cout<< typeid(p2).name()<<endl;
    //通过typid的出两个p1,p2的类型，但是此时所得出的p1为char*而p2为char
}
typedef char* PCHAR;
void test1extend()
{
  PCHAR p1,p2;
  cout<< typeid(p1).name()<<endl;
    cout<< typeid(p2).name()<<endl;
    //此时通过添加typedef char* PCHAR; 则可以保证p1和p2的类型都为char*
}
int main()
{

}
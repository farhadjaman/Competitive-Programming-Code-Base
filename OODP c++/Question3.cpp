#include<iostream>
#include<string.h>
using namespace std;

 class A
 {

      char str[100];
      public:
      void operator =(char* s1)
      {
          strcpy(str,s1);
      }
      void operator +(A obj1)
      {
          strcat(str,obj1.str);
      }
      void operator <=(A obj)
      {
          if(strcmp(str,obj.str)==0)
            cout<<"Both strings are identical."<<endl;
          else
          {
              if(strlen(str)==strlen(obj.str))
                cout<<"Strings are not identical but there length is same"<<endl;
              else
                cout<<"Strings not identical and there length is also different"<<endl;

          }
          cout<<endl;
      }
      void display()
      {
          cout<<str<<endl;
      }

 };



 int main()
 {
     char str1[100];
     char str2[100];
     cout<<"Please Enter the first string"<<endl;
     cin.getline(str1,100);
     cout<<"Please Enter the second string"<<endl;
     cin.getline(str2,100);
     A s1,s2;
     s1=str1;
     s2=str2;
     cout<<"After String Copy"<<endl;
     s1.display();
     s2.display();
     cout<<endl;
     cout<<"String Comparison :"<<endl;
     (s1<=s2);
     s1+s2;
     cout<<"After string concatenation :" ;
     s1.display();


 }

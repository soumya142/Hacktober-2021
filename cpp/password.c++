#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int passwordgenerator(int n);
int main()
{int a;
cout<<"enter the lenght of password = ";
cin>>a;
passwordgenerator(a);
return 0;
}
int passwordgenerator(int n)
{   char Letter[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    char letter[]="qwertyuiopasdfghjklzxcvbnm";
    char number[]="0123456789";
    char special[]="!@#$%^&*";
    srand(time(0));
    int randomizer=0;
    char password[n];
    randomizer=rand()%4;
    
    for(int i=0;i<n;i++)
    {       if(randomizer==1)
            {password[i]=Letter[rand()%26];
            cout<<password[i];
            randomizer=rand()%4;
            }
            else if(randomizer==2)
            {password[i]=special[rand()%8];
            cout<<password[i];
                randomizer=rand()%4;
            }
                else if(randomizer==3)   
                {password[i]=number[rand()%10];
                cout<<password[i];
                    randomizer=rand()%4;
                }
            else
            {
                password[i]=letter[rand()%26];
            cout<<password[i];
                randomizer=rand()%4;

            }
    }
    return 0;
}
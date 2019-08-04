#include<iostream>
using namespace std;

int main()
{
    char str[50]="my name is sam";

    char div_str[20][20];

    int r=0;
    int c=0;

    //taking the string into a 2d array , each row contains a word
    for(int i=0;str[i]!='\0';i++)
    {
        div_str[r][c++]=str[i];

        if(str[i]==' '){
        r++;
        c=0;
        }
    }
  
    for (size_t i = 0; i < r+1; i++)
    {
        int count =0;
        char * index = &div_str[i][0];
        while(*index!=' '&&*index!='\0')
        {
            index++;
            count++;
        }

        //reversing logic 
         for(int j=0;j<count/2;j++)
         {
             char temp = div_str[i][j];
             div_str[i][j] = div_str[i][count-j-1] ;
             div_str[i][count-j-1] =temp;
         }
    }
    
    //output of reverse string 
    for(int i= 0;i<r+1;i++)
    {
        cout<<div_str[i];
    }
        return 0;
}
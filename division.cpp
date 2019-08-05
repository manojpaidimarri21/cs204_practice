
#include<bits/stdc++.h> 
using namespace std; 

string remzer(string str1)
{ int j=0;
  while(str1[j]=='0')
  {
      j++;
  }
  str1=str1.substr(j);
  return str1;
}
int compare(string *str1,string *str2)
{
   int len1=(*str1).length();
   int len2=(*str2).length();
   if(len1<len2)
   {
       return 0;
   }
   else if(len1>len2)
   {
       return 1;
   }
   else 
   { int j=0;
       while( j<len1 )
       {
           if((*str1)[j]<(*str2)[j])
           {   
               return 0;
               break;
           }
           if((*str1)[j]>(*str2)[j])
           {
               return 1;
               break;
           }
           if((*str1)[j]==(*str2)[j])
           {
               j++;
           }
       }
       if(j==len1)
       {
           return 2;
       }
   }
}

int main()
{   

    string str1,str2,str3="";
    string quo,rem;
    
    cin>>str1;
    cin>>str2;
    str1=remzer(str1);
    str2=remzer(str2);
    if(compare(&str1,&str2)==1)
    {   
        rem=str2;
        quo="0";
        
    }
    if(compare(&str1,&str2)==2)
    {
        rem="0";
        quo="1";
    }

    cout<<"reminder is "<<rem<<endl;
    cout<<"quotient is "<<quo<<endl;
    return 0;
}

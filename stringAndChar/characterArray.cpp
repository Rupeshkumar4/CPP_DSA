#include<iostream>
using namespace std;
int lenFun(char st[]){
     int len=0;
    int i=0;
    while (st[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

void revChar(char st[]){
    int i=0;
    int len = lenFun(st);
    int j = len-1;
    while (i<=j)
    {
        swap(st[i],st[j]);
        i++;
        j--;
    }
    //  cout<<st<<endl;
    //  cout<<" rev"<<endl;
}
bool isPalindrome(char st[]){
     int i=0;
    int len = lenFun(st);
    int j = len-1;
    while (i<=j)
    {
        if (st[i] !=st[j])
        {
            return 0;
        }
        
        i++;
        j--;
    }

    return 1;
}
int main(){
    char st[10];
    // st[3]='\0';
    cout<<"Enter value\n";
    st[0]='a';
    st[1]='b';
    st[2]='\0'; // \0 not count in the length..
    // cin>>st;
    cout<<st<<endl;
    int len = lenFun(st);
   
    cout<<"length=>"<<len<<endl;
    // revChar(st);
    //  cout<<st<<endl;
    //  cout<<isPalindrome(st)<<endl;

    //  cout<<sizeof(5);
    //  cout<<sizeof('a');
    //  cout<<sizeof('a'+2);

    return 0;
}
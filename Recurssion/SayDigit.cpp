#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter number n"<<endl;
   cin>>n;

   while (n>0)
   {
        int ld = n%10;
        n=n/10;


        switch (ld)
        {
        case 1:
            cout<<"ONE"<<endl;
            break;
        case 2:
            cout<<"TWO"<<endl;
            break;

        case 3:
            cout<<"Three"<<endl;
            break;

        case 4:
            cout<<"FOUR"<<endl;
            break;
        case 5:
            cout<<"FIVE"<<endl;
            break;
        case 6:
            cout<<"SIX"<<endl;
            break;
        case 7:
            cout<<"SEVEN"<<endl;
            break;
        case 8:
            cout<<"EIGHT"<<endl;
            break;
        case 9:
            cout<<"NINE"<<endl;
            break;
        case 0:
            cout<<"ZERO"<<endl;
            break;
        
        default:
            cout<<"NOT valid digit";
            break;
        }

   }
   
    return 0;
}
// #include <iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int Replace(int n){
//     int result=0;
//     while(n>0){
//         int ld=n%10;
//         n=n/10;
//         if(ld==0){
//             ld=1;
//         }
//         result=ld+result*10 ;
//     }
//     string str = to_string(result);
//     reverse(str.begin(), str.end());
//     result = stoi(str);
//     return result;
// }

// int main(){
//     int n=20104;
//     cout<<Replace(n);
//     return 0;
// }

// M2

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int Replace(int n){
    int result=0;
    int p=1;
    while(n>0){
        int ld=n%10;
        n=n/10;
        if(ld==0){
            ld=1;
        }
        result=ld*p+result ;
        p=p*10;
    }
    
    return result;
}

int main(){
    int n=20104;
    cout<<Replace(n);
    return 0;
}
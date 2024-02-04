#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="deaeiourup daeifhdjkj vbcjfhg";

    int cnt=1;
    int n=str.size();
    int i=0;
    while(i<n){
          if(cnt==1){
        while(str[i] != ' '){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                str[i]='@';
            }
            i++;
        }
        cnt++;
        while(str[i]==' ') i++;
    }
    else if(cnt==2){
        while(str[i] != ' '){
            if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')){
                str[i]='#';
            }
            i++;
        }

        while (str[i]==' ') i++;
        cnt++;
        
    }
    else{
        while(i<n && str[i] !=' '){
            str[i]=toupper(str[i]);
            i++;
        }
    }
    }
    for(int j=0;j<n;j++){
        cout<<str[j];
    }
    return 0;
}
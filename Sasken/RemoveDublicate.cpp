int main(){
    string str="xxxxyyz";
    // cin >> str;
    int n=str.size();
    int arr[26];
    cout<<"hi1"<<endl;
    for(int i=0; i<n; i++){
        arr[str[i]-'a']++;
    }
    cout<<"hi2"<<endl;
    int cnt=0;
    int maxi=-1;
    int ind=-1;
    for(int i=0; i<26; i++){
        if(arr[i]==1) cnt++;
        if(arr[i]>maxi) {
            maxi = arr[i];
            ind=i;
        }
    }
    cout<<"hi3"<<endl;
    if(cnt==n){
        cout<<str<<endl;
    }else{
        cout<<char('a'+ind)<<endl;
    }
    cout<<"bye"<<endl;
    return 0;

}


#include <iostream>
#include <string>
#include <vector>
using namespace std;

char* Remove(char* arr1) {
    string str = "";
    int i = 0;
    while (arr1[i] != '\0') {
        str += arr1[i];
        i++;
    }
    int n = str.size();
    int arr[26] = {0};
    for (int i = 0; i < n; i++) {
        arr[str[i] - 'a']++;
    }
    int cnt = 0;
    int maxi = -1;
    int ind = -1;
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) cnt++;
        if (arr[i] > maxi) {
            maxi = arr[i];
            ind = i;
        }
    }
    char chag[n];
    char* ptr2=chag;
    for(int i=0;i<n;i++){
        chag[i]=str[i];
    }
    if (cnt == n) {
        return ptr2;
    } else {
        char ch = char('a' + ind);
        char* ptr = new char[2];
        ptr[0] = ch;
        ptr[1] = '\0';
        return ptr;
    }
}

int main() {
    char arr[] = "man";
    char* ans = Remove(arr);
    int i = 0;
    while (ans[i] != '\0') {
        cout << ans[i];
        i++;
    }
    delete[] ans; // Don't forget to free the dynamically allocated memory
    return 0;
}

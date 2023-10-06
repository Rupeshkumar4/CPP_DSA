// #include<iostream>
// #include<vector>
// using namespace std;

// void rotateBy90(vector<vector<int> >&v){

//     //TransPose
//     for(int i = 0; i < v.size();i++){
//         for(int j = 0; j < i;j++){
//             swap(v[i][j], v[j][i]);
//         }
//     }

//     //Reverse each row
//     for(int i = 0; i < v.size();i++){
//         reverse(v[i].begin(), v[i].end());
//     }
// }

// int main(){
//     int n;
//     int m;
//     cin >> n >> m;
//     vector<vector<int> >v(n,vector<int>(m));
//     for(int i = 0; i < n; i++){
//         for(int j = i; j < m; j++){
//             cin >>v[i][j];
//         }
//     }
//     rotateBy90(v);
//     cout<<endl<<endl;
//     cout<<"Printing"<<endl;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout<<v[i][j]<<" ";
//         }cout<<endl;
//     }
// }



#include<iostream>
#include<vector>
using namespace std;

void rotateBy90(vector<vector<int> >&v){

    //TransPose
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < i; j++){
            swap(v[i][j], v[j][i]);
        }
    }

    //Reverse each row
    for(int i = 0; i < v.size(); i++){
        reverse(v[i].begin(), v[i].end());
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    rotateBy90(v);
    cout << "Printing" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

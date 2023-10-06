#include <iostream>
#include<queue>
using namespace std;

class Node
{
    public:
        int data;
        Node * left;
        Node* right;

    //Constructor
    Node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;
    }
};

//creation of Tree Recursive
Node * buildTree(Node* root){
    cout<<"Enter Data"<<endl;
    int data;
    cin>>data;
    root = new Node(data); //Constructor call
    if(data==-1){
        return NULL; //For ending..
    }
    cout<<"Enter Data for inserting in Left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter Data for inserting in Right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

//Traversal With seperator

void LevelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL); 

    while(!q.empty()){
        Node * temp=q.front();
        q.pop();

        if(temp==NULL){
            //Purana level khatam ho gaya hain..
            cout<<endl;
            if(!q.empty()){
                //Still some elements in queue
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" "; // printing data
            //Adding Left And Right Child in queue
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }

    }
}

void LevelOrderTraversalWithOutSeperator(Node * root){
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        cout<<temp->data<<" "; 
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }

}

//Q
pair<bool,int>isSumTreeFast(Node * root){
        pair<bool,int> p ;
        //Base Case
        if(root == NULL){
            p= make_pair(true,0);
            return p;
        }
        //Base case
        if(root->left==NULL && root->right ==NULL){
            p = make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int>leftAns= isSumTreeFast(root->left);
        pair<bool,int>rightAns= isSumTreeFast(root->right);
        
        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;
        int leftSum = leftAns.second;
        int rightSum = rightAns.second;
        
        bool condation = root->data == leftSum+rightSum;
        
        pair<bool,int>ans;
        
        if(isLeftSumTree && isRightSumTree && condation){
            ans.first=true;
            ans.second = root->data + leftSum + rightSum; // or 2*root->data;
        }
        else{
            ans.first=false;
            ans.second=-1; //write or not not matter in false
        }
        return ans;
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         return isSumTreeFast(root).first;
    }

int main(){
    Node * root=NULL;
    root=buildTree(root);
    // LevelOrderTraversal(root);
    LevelOrderTraversalWithOutSeperator(root);
    cout<<endl;

    cout<<isSumTreeFast(root).first<<endl;
    return 0;
}

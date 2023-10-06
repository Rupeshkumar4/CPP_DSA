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
 int Height(Node * root){
    if (root==NULL) return 0;
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    int ans = max(leftHeight, rightHeight)+1;
    return ans;
    }
    
int diameter(Node* root) {
        // Your code here
        //Time O(N^2) or O(H^2)
        if(root==NULL) return 0;
        int leftSide = diameter(root->left);
        int rightSide = diameter(root->right);
        int bothSide = Height(root->left) +Height(root->right) +1;
        return max(bothSide, max(leftSide,rightSide));
    }

pair<int, int> DiameterFast(Node* root){

    // first store Diameter
    // second store height
    if(root==NULL){
        pair<int, int> p = make_pair(0,0);
        return p;
    }
    pair<int, int> leftSide = DiameterFast(root->left);
    pair<int, int> rightSide = DiameterFast(root->right);

    int left = leftSide.first;
    int right = rightSide.first;
    int both = leftSide.second+rightSide.second+1;
    pair<int, int>ans;
    ans.first = max(left,max(right,both));
    ans.second = max(leftSide.second,rightSide.second);
    return ans;
}
int diameterFastMethod(Node* root) {
        // Your code here
        //Time O(N or Height)
        return DiameterFast(root).first;
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



int main(){
    Node * root=NULL;
    root=buildTree(root);
    // LevelOrderTraversal(root);
    LevelOrderTraversalWithOutSeperator(root);
    cout<<diameterFastMethod(root)<<endl;
    return 0;
}

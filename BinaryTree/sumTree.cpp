#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node*root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node*root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int product(Node*root){
    if(root==NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}
int size(Node*root){ 
    return root==NULL? 0:1+size(root->left)+size(root->right);
}
int sizeTree(Node*root){
    if(root==NULL) return 0;
    int leftsize=sizeTree(root->left);
    int rightsize=sizeTree(root->right);
    return 1+leftsize+rightsize;
}
int maxValue(Node*root){
    if(root==NULL) return INT_MIN;
    int leftMax= max(maxValue(root->left),root->val);
    int rightMax=max(maxValue(root->right),root->val);
    return max(rightMax,leftMax);
}
int minValue(Node*root){
    if(root==NULL) return INT_MAX;
    int leftMax= min(maxValue(root->left),root->val);
    int rightMax=min(maxValue(root->right),root->val);
    return min(rightMax,leftMax);
}
int levels(Node*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(18);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<product(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<sizeTree(a);
    cout<<endl;
    cout<<maxValue(a);
    cout<<endl;
    cout<<minValue(a)<<" ";
    cout<<levels(a);
    cout<<" Height of tree is :"<<levels(a)-1;
    
   
}
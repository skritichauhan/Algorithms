#include<iostream>
#include<queue>
using namespace std;
struct tree{
int c;
tree *right;
tree *left;
};
tree* gettree(int c){
tree *current_root= new tree();
current_root->c=c;
current_root->right=NULL;
current_root->left=NULL;
return current_root;
}
tree* insertnode(int c,tree *ptr){
if(ptr==NULL){
    ptr=gettree(c);
}
else{
if(c<=ptr->c){
    ptr->left=insertnode(c,ptr->left);
}
else if(c>ptr->c){

ptr->right=insertnode(c,ptr->right);
}
}

return ptr;
}
void LevelOrderTraversal(tree *root){
queue <tree*> q;
q.push(root);
while(!q.empty()){
    tree *current=q.front();
    cout<<current->c<<" ";
    if(current->left!=NULL){
        q.push(current->left);}
    if(current->right!=NULL){
        q.push(current->right);
    }
    q.pop();
}

}
void Preorder(tree *root){
if(root==NULL)return;
cout<<root->c<<" ";
Preorder(root->left);
Preorder(root->right);
}
void Inorder(tree *root){
if(root==NULL)return;
Inorder(root->left);
cout<<root->c<<" ";
Inorder(root->right);
}
void Postorder(tree *root){
if(root==NULL)return;
Postorder(root->left);
Inorder(root->right);
cout<<root->c<<" ";
}
int main(){
    tree *root=NULL;
root=insertnode(3,root);
//root=insertnode(8,root);
root=insertnode(1,root);
root=insertnode(4,root);
root=insertnode(7,root);
root=insertnode(2,root);
root=insertnode(5,root);
root=insertnode(6,root);
LevelOrderTraversal(root);
cout<<endl;
Preorder(root);
cout<<endl;

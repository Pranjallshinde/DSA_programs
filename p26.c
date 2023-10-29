/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
pid-26
*/


//BST
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}


int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct node * search(struct node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        return search(root->left,key);
    }
    if(key>root->data){
        return search(root->right,key);
    }
    return NULL;
}

struct node * ItrSearch(struct node *root,int key){
    while (root!=NULL){
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        root=root->left;
    }
    if(key>root->data){
       root=root->right;
    }
    }
    return NULL;

}

void insert(struct node *root,int key){
    struct node *prev;
    while(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("cannot insert %d as it is already there in the BST",key);
        }
        if(key<root->data){
            root=root->left;
        }
        if(key>root->data){
            root=root->right;
        }
    }
    struct node *new= createNode(key);
    if(prev->data<key){
      prev->right=new;
    }
    if(prev->data>key){
        prev->left=new;
    }
}

int countNodes(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Function to count the number of leaf nodes in the BST
int countLeafNodes(struct node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main(){


    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \   \
    //  1   4   7


    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("\n");
    if(isBST(p)){
        printf("This is a bst\n" );
    }
    else{
        printf("This is not a bst\n");
    }

    struct node *a= search(p,7);
    if(a!=NULL){
        printf("Found:-%d\n",a->data);
    } else{
        printf("Not Found\n");
    }
    insert(p,7);
    struct node *b= ItrSearch(p,7);
    if(b!=NULL){
        printf("Found:-%d\n",b->data);
    } else{
        printf("Not Found\n");
    }

    int totalNodes = countNodes(p);
    printf("Total nodes in the BST: %d\n", totalNodes);

    int leafNodes = countLeafNodes(p);
    printf("Leaf nodes in the BST: %d\n", leafNodes);

    return 0;
}
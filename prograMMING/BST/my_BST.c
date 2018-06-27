#include<stdio.h>
#include<stdlib.h>

struct bst
{
int data;
struct bst *left;
struct bst *right;
};
// printing the preorder
void preorder(struct bst *root)
{

    if(root)
    {
        printf("%d->",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Binary search tree
void inorder(struct bst *root)
{

    if(root)
    {
        preorder(root->left);
        printf("%d->",root->data);
        preorder(root->right);
    }
}

void postorder(struct bst *root)
{

    if(root)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d->",root->data);
    }
}
int main()
{
    int n,i;
    printf("enter the no of nodes required :");
    scanf("%d",&n);


    struct bst *root = NULL;
    struct bst *new,*ptr;
    for(i=0 ;i<n;i++)
    {
        new = (struct bst *) malloc(sizeof(struct bst));
        printf("enter the data:\n");
        scanf("%d",&new->data);
        new->left=NULL;
        new->right =NULL;

        if(root == NULL)
            root = new;
        else
        {
            ptr = root;
            while(1)
            {  

                if(new->data > ptr->data) //ptr is root
                {
                    if(ptr->right == NULL){
                        ptr->right = new;
                        break;
                    }
                    else
                        ptr = ptr->right;
                }
                else 
                {
                    if(ptr->left == NULL){
                        ptr->left = new;
                        break;
                    }
                    else
                        ptr = ptr->left;
                }

            }
        }
    }

printf("\npreorder data BST:");
preorder(root);
printf("\ninorder data BST:");
inorder(root);
printf("\npostorder data BST:");
postorder(root);
printf("\n");
   return 0;
}

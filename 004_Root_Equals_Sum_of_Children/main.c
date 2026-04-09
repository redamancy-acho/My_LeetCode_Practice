#include <stdio.h>
#include <stdbool.h>

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right; 
};

bool checkTree(struct TreeNode* root)
{
    return root->val==root->left->val+root->right->val; 
}

int main()
{
    bool res;
    int val_root,val_left,val_right;

    printf("val_root=");
    scanf("%d",&val_root);
    printf("val_left=");
    scanf("%d",&val_left);
    printf("val_right=");
    scanf("%d",&val_right);

    struct TreeNode root={val_root,NULL,NULL};
    struct TreeNode left={val_left,NULL,NULL};
    struct TreeNode right={val_right,NULL,NULL};

    root.left=&left;
    root.right=&right;

    res=checkTree(&root);
    if(res)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

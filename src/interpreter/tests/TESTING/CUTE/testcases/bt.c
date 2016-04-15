#include <stdio.h>
#include <cute.h>

typedef struct btNode {
	struct btNode * left;
	struct btNode * right;
	int val;
} BT;

int max(BT * t){
	if(t->right!=0)
		return max(t->right);
	return t->val;
}		

int min(BT * t){
	if(t->left!=0)
		return min(t->left);
	return t->val;
}		


int isOk(BT * t){
	if(t==0) return 1;
	if(t->left !=0 && (!isOk(t->left) || max(t->left)>=t->val)) return 0;
	if(t->right !=0 && (!isOk(t->right) || min(t->right)<=t->val)) return 0;
	return 1;
}


void print(BT * t){
	if(t==0) {
          printf(".");
          return;
    }
	printf("(");
	print(t->left);
	printf(" %d ",t->val);
	print(t->right);
	printf(")");
}

f(){
    BT * t;
    CUTE_input(t);
    CUTE_assume(isOk(t));
    printf("BT---------- ");
    print(t);
    printf("\n");
}
	
	
		

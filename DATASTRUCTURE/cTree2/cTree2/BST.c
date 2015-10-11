//
//  BST.c
//  cTree2
//
//  Created by Kate KyuWon on 5/31/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *rightChild;
    struct node *leftChild;
    struct node *parent;
}node_t;

typedef struct tree{
    node_t *root;
}tree_t;

tree_t* makeSampleBST(void);
void printBSTWithInorder(node_t*);

node_t* bstSearch(node_t* node, int key);
node_t* bstMinimumBelow(node_t* node);
node_t* bstMaximumBelow(node_t* node);
node_t* bstSuccessorOf(node_t* node);
node_t* bstProcessorOf(node_t* node);
void test_minimum(node_t* root);
void test_maximun(node_t* root);
void test_successor(node_t* node);

void bstInsertNode(tree_t* tree, node_t* givenNode);
void bstTransplant(tree_t* tree, node_t* rmNode, node_t*mvNode);
void bstDeleteNode(tree_t* tree, node_t* node);



int main(void){
    tree_t *tree = makeSampleBST();
    
    puts("\ntest1: make Sample BST");
    printBSTWithInorder(tree->root);
    puts(" ");
    
    puts("\ntest2-1: search node whose key is 12");
    printf("The node whose key is %d is at %p. \n", 12 ,bstSearch(tree->root, 12));
    
    puts("\ntest2-2: search node whose key is 2");
    printf("The node whose key is %d is at %p. \n", 2 ,bstSearch(tree->root, 2));
    
    puts("\ntest2-2: search node whose key is 7");
    printf("The node whose key is %d is at %p. \n", 7 ,bstSearch(tree->root, 7));
    
    puts("\ntest3-1: minimum node of tree");
    test_minimum(tree->root);
    
    puts("\ntest3-2: maximum node of tree");
    test_maximun(tree->root);
    
    puts("\ntest4-1: successor node of 2");
    test_successor(bstSearch(tree->root, 2));
    
    puts("\ntest4-2: successor node of 9");
    test_successor(bstSearch(tree->root, 9));
    
    puts("\ntest4-3: successor node of 12");
    test_successor(bstSearch(tree->root, 12));
    
    puts("\ntest4-4: successor node of 15");
    test_successor(bstSearch(tree->root, 15));
    
    puts("\ntest4-5: successor node of 19");
    test_successor(bstSearch(tree->root, 19));
    
    puts("\n\ntest4-6: successor node of 15");
    printf("the precessor of 15 is %d\n", bstProcessorOf(bstSearch(tree->root, 15))->data);
    
    puts("\n\ntest4-7: successor node of 12");
    printf("the precessor of 12 is %d\n", bstProcessorOf(bstSearch(tree->root, 12))->data);
    
    
    puts("\n\ntest5-1: BST insertion 1");
    tree_t *insertTree = (tree_t*)malloc(sizeof(tree_t));
    insertTree->root =NULL;
    
    node_t *insert1 = (node_t*)malloc(sizeof(node_t));
    insert1->data = 1;
    bstInsertNode(insertTree, insert1);
    
    node_t *insert2 = (node_t*)malloc(sizeof(node_t));
    insert2->data = 2;
    bstInsertNode(insertTree, insert2);
    
    node_t *insert3 = (node_t*)malloc(sizeof(node_t));
    insert3->data = 3;
    bstInsertNode(insertTree, insert3);
    
    node_t *insert4 = (node_t*)malloc(sizeof(node_t));
    insert4->data = 4;
    bstInsertNode(insertTree, insert4);
    
    node_t *insert5 = (node_t*)malloc(sizeof(node_t));
    insert5->data = 5;
    bstInsertNode(insertTree, insert5);
    
    node_t *insert6 = (node_t*)malloc(sizeof(node_t));
    insert6->data = 6;
    bstInsertNode(insertTree,insert6);
    
    printBSTWithInorder(insertTree->root);
    
    puts("\ntest5-2: BST insertion 2");
    insertTree->root = NULL;
    insert1->data = 6;
    bstInsertNode(insertTree, insert1);
    insert2->data = 5;
    bstInsertNode(insertTree, insert2);
    insert3->data = 4;
    bstInsertNode(insertTree, insert3);
    insert4->data = 3;
    bstInsertNode(insertTree, insert4);
    insert5->data = 2;
    bstInsertNode(insertTree, insert5);
    insert6->data = 1;
    bstInsertNode(insertTree, insert6);
    
    printBSTWithInorder(insertTree->root);
    
    puts("\ntest5-3: BST insertion 3");
    insertTree->root = NULL;
    insert1->data = 8;
    bstInsertNode(insertTree, insert1);
    insert2->data = 4;
    bstInsertNode(insertTree, insert2);
    insert3->data = 2;
    bstInsertNode(insertTree, insert3);
    insert4->data = 1;
    bstInsertNode(insertTree, insert4);
    insert5->data = 3;
    bstInsertNode(insertTree, insert5);
    insert6->data = 6;
    bstInsertNode(insertTree, insert6);
    
    node_t *insert7 = (node_t*)malloc(sizeof(node_t));
    insert7-> data = 5;
    bstInsertNode(insertTree, insert7);
    
    node_t *insert8 = (node_t*)malloc(sizeof(node_t));
    insert8->data = 7;
    bstInsertNode(insertTree, insert8);
    
    node_t *insert9 = (node_t*)malloc(sizeof(node_t));
    insert9->data = 12;
    bstInsertNode(insertTree, insert9);
    
    node_t *insert0x = (node_t*)malloc(sizeof(node_t));
    insert0x->data= 10;
    bstInsertNode(insertTree, insert0x);
    
    node_t *insert01 = (node_t*)malloc(sizeof(node_t));
    insert01->data = 9;
    bstInsertNode(insertTree, insert01);
    
    node_t *insert02 = (node_t*)malloc(sizeof(node_t));
    insert02->data = 11;
    bstInsertNode(insertTree, insert02);
    
    node_t *insert03 = (node_t*)malloc(sizeof(node_t));
    insert03->data = 13;
    bstInsertNode(insertTree, insert03);
    
    node_t *insert04 = (node_t*)malloc(sizeof(node_t));
    insert04->data = 14;
    bstInsertNode(insertTree, insert04);
    
    node_t *insert05 = (node_t*)malloc(sizeof(node_t));
    insert05->data = 15;
    bstInsertNode(insertTree, insert05);
    
    printBSTWithInorder(insertTree->root);
    
    
    
    
    puts("\n\ntest6-1: BST transplant 1");
    insertTree->root = NULL;
    
    insert4->data = 12;
    bstInsertNode(insertTree, insert4);
    
    insert2->data = 5;
    bstInsertNode(insertTree, insert2);
    
    insert7->data = 18;
    bstInsertNode(insertTree, insert7);

    insert1->data = 2;
    bstInsertNode(insertTree, insert1);
    
    
    insert3->data = 9;
    bstInsertNode(insertTree, insert3);

    
    insert5->data = 15;
    bstInsertNode(insertTree, insert5);
    
    insert6->data = 17;
    bstInsertNode(insertTree, insert6);
    
    
    insert8->data = 19;
    bstInsertNode(insertTree, insert8);
    
   // printf("%d",isBST(insertTree->root) );
    puts("(before)");
    printBSTWithInorder(insertTree->root);
    bstTransplant(insertTree, bstSearch(insertTree->root, 15), bstSearch(insertTree->root, 17));
    puts("\n(after)");
    printBSTWithInorder(insertTree->root);
    
    puts("\n\ntest6-2: BST transplant 2");
    insertTree->root = NULL;
    
    insert3->data = 12;
    bstInsertNode(insertTree, insert3);
    
    insert2->data = 5;
    bstInsertNode(insertTree, insert2);

    insert6->data = 18;
    bstInsertNode(insertTree, insert6);
    
    insert1->data = 2;
    bstInsertNode(insertTree, insert1);
    
    insert4->data = 15;
    bstInsertNode(insertTree, insert4);
    
    insert5->data = 17;
    bstInsertNode(insertTree, insert5);
    

    insert7->data = 19;
    bstInsertNode(insertTree, insert7);
    

    puts("(before)");
    printBSTWithInorder(insertTree->root);
    bstTransplant(insertTree, bstSearch(insertTree->root, 5), bstSearch(insertTree->root, 2));
    puts("\n(after)");
    printBSTWithInorder(insertTree->root);
    
    puts("\n\ntest7-1 : BST deletion 1");
    puts("(before)");
    printBSTWithInorder(tree->root);
    bstDeleteNode(tree, bstSearch(tree->root, 13));
    puts("\n(after)");
    printBSTWithInorder(tree->root);
    
    puts("\n\ntest7-2 : BST deletion 2");
    puts("(before)");
    tree = makeSampleBST();
    printBSTWithInorder(tree->root);
    bstDeleteNode(tree, bstSearch(tree->root, 17));
    puts("\n(after)");
    printBSTWithInorder(tree->root);
    
    puts("\n\ntest7-3 : BST deletion 3");
    puts("(before)");
    tree= makeSampleBST();
    printBSTWithInorder(tree->root);
    bstDeleteNode(tree, bstSearch(tree->root, 12));
    puts("\n(after)");
    printBSTWithInorder(tree->root);
    
    puts("\n\ntest7-4 : BST deletion 4");
    puts("(before)");
    tree= makeSampleBST();
    printBSTWithInorder(tree->root);
    bstDeleteNode(tree, tree->root);
    puts("\n(after)");
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
    puts(" ");
    bstDeleteNode(tree, tree->root);
    printBSTWithInorder(tree->root);
 
    puts("\ntest7-5 : BST deletion 5 - 1");
    
    insertTree->root = NULL;
    insert1->data = 1;
    bstInsertNode(insertTree, insert1);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert2->data = 2;
    bstInsertNode(insertTree, insert2);
    printBSTWithInorder(insertTree->root);
     puts(" ");
    insert3->data = 3;
    bstInsertNode(insertTree, insert3);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert4->data = 4;
    bstInsertNode(insertTree, insert4);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert5->data = 5;
    bstInsertNode(insertTree, insert5);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert6->data = 6;
    bstInsertNode(insertTree, insert6);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 1));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 2));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 3));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 4));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 5));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 6));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    
    puts("\ntest7-5 : BST deletion 5 - 2");
    
    insertTree->root = NULL;
    insert1->data = 1;
    bstInsertNode(insertTree, insert1);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert2->data = 2;
    bstInsertNode(insertTree, insert2);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert3->data = 3;
    bstInsertNode(insertTree, insert3);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert4->data = 4;
    bstInsertNode(insertTree, insert4);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert5->data = 5;
    bstInsertNode(insertTree, insert5);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert6->data = 6;
    bstInsertNode(insertTree, insert6);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 6));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 5));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 4));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 3));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 2));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 1));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    
    puts("\ntest7-5 : BST deletion 5 - 3");
    
    insertTree->root = NULL;
    insert1->data = 8;
    bstInsertNode(insertTree, insert1);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert2->data = 4;
    bstInsertNode(insertTree, insert2);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert3->data = 2;
    bstInsertNode(insertTree, insert3);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert4->data = 1;
    bstInsertNode(insertTree, insert4);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert5->data = 3;
    bstInsertNode(insertTree, insert5);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert6->data = 6;
    bstInsertNode(insertTree, insert6);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert7->data = 5;
    bstInsertNode(insertTree, insert7);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert8->data = 7;
    bstInsertNode(insertTree, insert8);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    insert9->data = 12;
    bstInsertNode(insertTree, insert9);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstInsertNode(insertTree, insert0x);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstInsertNode(insertTree, insert01);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstInsertNode(insertTree, insert02);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstInsertNode(insertTree, insert03);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstInsertNode(insertTree, insert04);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstInsertNode(insertTree, insert05);
    printBSTWithInorder(insertTree->root);
    puts(" ");
    
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 7));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 6));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 5));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 9));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 12));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 8));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 4));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 15));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 13));
    printBSTWithInorder(insertTree->root);
    puts(" ");
    bstDeleteNode(insertTree, bstSearch(insertTree->root, 9));
    printBSTWithInorder(insertTree->root);
    puts(" ");
   

}


void bstDeleteNode(tree_t* tree, node_t* node){
    if(!tree||!node) return;
    
    node_t* successor = NULL;
    if(!node->leftChild) bstTransplant(tree, node, node->rightChild);
    else if(!node->rightChild) bstTransplant(tree, node, node->leftChild);
    else{
        successor = bstSuccessorOf(node);
        if(successor != node->rightChild){
            bstTransplant(tree, successor, successor->rightChild);
            successor->rightChild = node->rightChild;
            node->rightChild->parent = successor;
        }
        bstTransplant(tree, node, successor);
        successor->leftChild = node->leftChild;
        node->leftChild->parent = successor;
    }
}

void bstTransplant(tree_t* tree, node_t* rmNode, node_t*mvNode){
    if(!tree||!rmNode) NULL;
    
    if(rmNode == tree->root){
        tree->root = mvNode;
        if(mvNode)
            mvNode->parent = NULL;
    }
    else if(rmNode == rmNode->parent->leftChild){
        rmNode->parent->leftChild = mvNode;
    }
    else if(rmNode == rmNode->parent->rightChild){
        rmNode->parent->rightChild = mvNode;
    }
    
    if(mvNode)
        mvNode->parent = rmNode->parent;
    
}

node_t* bstProcessorOf(node_t* node){
    if(!node) return NULL;
    
    node_t* curNode = node;
    if(node->leftChild)
        return bstMaximumBelow(node->leftChild);
    else {
        while(curNode){
            if(curNode == curNode->parent->rightChild) return curNode->parent;
            curNode = curNode->parent;
        }
        
    }
    
    return curNode;
}

int isBST(node_t* node){
    
    if(!node) return 1;
    if(!node->leftChild && !node->rightChild) return 1;
    
    if(node->leftChild)
        if(node->leftChild->data > node->data) return 0;
    if(node->rightChild)
        if(node->data > node->rightChild->data) return 0;
    
    if(! isBST(node->leftChild) ) return 0;
    if(! isBST(node->rightChild) ) return 0;
    
    return 1;
}

int countLeafNode(node_t* node){
    
    if(!node) return 0;
    if(!(node->leftChild) && !(node->rightChild) ) return 1;

    return countLeafNode(node->leftChild) + countLeafNode(node->rightChild);
}

void bstInsertNode(tree_t* tree, node_t* givenNode){
    
    if(!tree||!givenNode) return;
    
    if(!tree->root){
        tree->root = givenNode;
        givenNode->leftChild = NULL;
        givenNode->rightChild = NULL;
        return ;
    }
    
    node_t *curNode = tree->root;
    node_t *parent = NULL;
    while(curNode){
        parent = curNode;
        if(curNode->data < givenNode->data) curNode = curNode->rightChild;
        else curNode = curNode->leftChild;
    }
    
    
   if(givenNode->data < parent->data)
    {
        parent->leftChild = givenNode;
        
    }
    else{
        parent->rightChild = givenNode;
    }
    givenNode->parent = parent;
    givenNode->leftChild =NULL;
    givenNode->rightChild =NULL;
    

}

node_t* bstSuccessorOf(node_t* node){
    if(!node) return NULL;
    
    if(node->rightChild) return bstMinimumBelow(node->rightChild);
    else{
        
        while(node->parent){
            if(node == node->parent->leftChild) return node->parent;
            node = node->parent;
        }
    }
    
    return NULL;
}

void test_successor(node_t* node){
    node_t *successor = bstSuccessorOf(node);
    
    
    if(!successor) {
        printf("successor 없음");
        return ;
    }
    

    printf("%d, ", successor->data);
    if(successor->parent) printf("%p, %d, ", successor->parent, successor->parent->data);
    else printf("NULL, 없음, ");
    if(successor->leftChild) printf("%p, %d, ", successor->leftChild, successor->leftChild->data);
    else printf("NULL, 없음, ");
    if(successor->rightChild) printf("%p, %d \n", successor->rightChild, successor->rightChild->data);
    else printf("NULL, 없음 \n");

    
}

void test_minimum(node_t* root){
    
    node_t *min = bstMinimumBelow(root);
    
    printf("%d, ", min->data);
    if(min->parent) printf("%p, %d, ", min->parent, min->parent->data);
    else printf("NULL, 없음, ");
    if(min->leftChild) printf("%p, %d, ", min->leftChild, min->leftChild->data);
    else printf("NULL, 없음, ");
    if(min->rightChild) printf("%p, %d \n", min->rightChild, min->rightChild->data);
    else printf("NULL, 없음 \n");
    
    
}
void test_maximun(node_t* root){
    
    node_t *max = bstMaximumBelow(root);
    
    printf("%d, ", max->data);
    if(max->parent) printf("%p, %d, ", max->parent, max->parent->data);
    else printf("NULL, 없음, ");
    if(max->leftChild) printf("%p, %d, ", max->leftChild, max->leftChild->data);
    else printf("NULL, 없음, ");
    if(max->rightChild) printf("%p, %d \n", max->rightChild, max->rightChild->data);
    else printf("NULL, 없음 \n");

}

node_t* bstMinimumBelow(node_t* node){
    
    if(!node) return NULL;
    
    while(node->leftChild)
        node = node->leftChild;
    
    return node;
    
}
node_t* bstMaximumBelow(node_t* node){
    
    if(!node) return NULL;
    
    while(node->rightChild)
        node = node->rightChild;
    
    return node;
}


node_t* bstSearch(node_t* node, int key){
    
    if(!node) return NULL;
    
    while((node) && (node->data != key)){
        if(node->data < key)
            node = node->rightChild;
        else
            node = node->leftChild;
    }
    
    return node;
}

void printBSTWithInorder(node_t* node){
    if(!node) return;
    
    printBSTWithInorder(node->leftChild);
    printf("%d ", node->data);
    printBSTWithInorder(node->rightChild);
    
}

tree_t* makeSampleBST(void){
    tree_t *newTree = (tree_t*)malloc(sizeof(tree_t));
    
    node_t *depth0 = (node_t*)malloc(sizeof(node_t));
    newTree->root = depth0;
    depth0->data = 12;
    depth0->parent = NULL;
    
    node_t *depth1_1 = (node_t*)malloc(sizeof(node_t));
    depth1_1->data = 5;
    depth1_1->parent = depth0;
    depth0->leftChild = depth1_1;
    
    node_t *depth1_2 = (node_t*)malloc(sizeof(node_t));
    depth1_2->data = 18;
    depth1_2->parent = depth0;
    depth0->rightChild =depth1_2;
    
    node_t *depth2_1 = (node_t*)malloc(sizeof(node_t));
    depth2_1->data = 2;
    depth2_1->parent= depth1_1;
    depth1_1->leftChild= depth2_1;
    depth2_1->leftChild = NULL;
    depth2_1->rightChild = NULL;
    
    node_t* depth2_2 = (node_t*)malloc(sizeof(node_t));
    depth2_2->data = 9;
    depth2_2->parent = depth1_1;
    depth1_1->rightChild =depth2_2;
    depth2_2->leftChild = NULL;
    depth2_2->rightChild = NULL;
    
    node_t *depth2_3 = (node_t*)malloc(sizeof(node_t));
    depth2_3->data =15;
    depth2_3->parent = depth1_2;
    depth1_2->leftChild = depth2_3;
    
    node_t *depth2_4 = (node_t*)malloc(sizeof(node_t));
    depth2_4->data = 19;
    depth2_4->parent = depth1_2;
    depth1_2->rightChild =depth2_4;
    depth2_4->leftChild = NULL;
    depth2_4->rightChild = NULL;
    
    node_t *depth3_1 = (node_t*)malloc(sizeof(node_t));
    depth3_1->data = 13;
    depth3_1->parent = depth2_3;
    depth2_3->leftChild =depth3_1;
    depth3_1->leftChild = NULL;
    depth3_1->rightChild = NULL;
    
    node_t *depth3_2 = (node_t*)malloc(sizeof(node_t));
    depth3_2->data = 17;
    depth3_2->parent = depth2_3;
    depth2_3->rightChild =depth3_2;
    depth3_2->leftChild= NULL;
    depth3_2->rightChild = NULL;
    
    return newTree;
}
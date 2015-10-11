//
//  main.c
//  cLinkedList
//
//  Created by Kate KyuWon on 5/15/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node_t;

typedef struct list {
    node_t* head;
} list_t;

void printAllList(list_t* list);

void insertNodeAtFront(list_t* list, node_t* node);

node_t* searchNode(list_t* list, int key);
node_t* searchPrevNode(list_t* list, node_t*);

void insertNode(list_t* list, node_t* nodeA, node_t* nodeB);
void deleteNode(list_t* list, node_t* prevN, node_t* targetN);

node_t* invert_linked_list(node_t* head);
node_t* concatenate(node_t* head1, node_t* head2);

int countLinkedListLength(list_t* list);

int main(int argc, const char * argv[]) {
    
    puts("실습1 : linked list 만들기 ");
    
    list_t* list = (list_t*) malloc( sizeof(list_t));
    
    node_t *first = (node_t*) malloc(sizeof(node_t));
    list->head = first;
    first->data = 10;
    
    node_t *second = (node_t*) malloc(sizeof(node_t));
    first->next = second;
    second->data = 20;
    
    node_t *third = (node_t*) malloc(sizeof(node_t));
    second->next = third;
    third->data = 30;
    
    node_t *fourth = (node_t*) malloc(sizeof(node_t));
    third->next = fourth;
    fourth->data = 40;
    
    node_t *fifth = (node_t*) malloc(sizeof(node_t));
    fourth->next = fifth;
    fifth->data = 50;
    
    node_t *sixth = (node_t*) malloc(sizeof(node_t));
    fifth->next = sixth;
    sixth->data = 100;
    
    sixth->next = NULL;
    
    node_t * curNode;
    
    curNode = list->head;

    while(1){
        if(!curNode->next){
            printf("current node's data : %d, next's address: NULL, next data: none \n", curNode->data);
            break;
        }
        
        printf("current node's data : %d, next's address: %p, next data: %d \n", curNode->data, curNode->next, curNode->next->data);
        curNode = curNode->next;
        
    }

    printAllList(list);
    
    
    puts("\n//");
    puts("실습2 : list 앞에 node 추가하기.");
    
    list_t *list2;
    list2->head = NULL;
    
    node_t *first2 = (node_t*) malloc(sizeof(node_t));
    first2->data = 100;
    insertNodeAtFront(list2, first2);
    
    printAllList(list2);
    
    node_t *second2 = (node_t*) malloc(sizeof(node_t));
    second2->data = 50;
    insertNodeAtFront(list2, second2);

    node_t *third2 = (node_t*) malloc(sizeof(node_t));
    third2->data = 40;
    insertNodeAtFront(list2, third2);

    node_t *fourth2= (node_t*) malloc(sizeof(node_t));
    fourth2->data = 30;
    insertNodeAtFront(list2, fourth2);

    node_t *fifth2 = (node_t*) malloc(sizeof(node_t));
    fifth2->data = 20;
    insertNodeAtFront(list2, fifth2);

    node_t *sixth2 = (node_t*) malloc(sizeof(node_t));
    sixth2->data = 10;
    insertNodeAtFront(list2, sixth2);

    printAllList(list2);
    
    puts("\n//");
    puts("실습3 : list에서 입력된 데이터 찾기");
    
    searchNode(list2, 30);
    searchNode(list2, 70);
    
    puts("\n//");
    puts("실습4 : 주어진 노드 다음에 새 노드 추가하기");
    puts("(test1)");
    
    node_t *nodeA = searchNode(list2, 40);
    node_t *nodeB = (node_t*)malloc(sizeof(node_t));
    nodeB->data = 45;
    
    insertNode(list2, nodeA, nodeB);
    
    printAllList(list2);
    
    puts("(test2)");
    
    nodeA = NULL;
    nodeB->data = 5;
    
    insertNode(list2, nodeA, nodeB);
    
    printAllList(list2);
    
    puts("\n//");
    puts("실습5 : 노드 삭제하기");
    puts("(test1/특정 노드 삭제하기)");
    
    node_t* targetN = searchNode(list, 40);
    node_t* prevN = searchPrevNode(list, targetN);
    
    deleteNode(list, prevN, targetN);
    printAllList(list);
    
    puts("(test2/노드 없을 때까지 삭제하기)");
    
    
    while(list->head){
        targetN = list->head;
        prevN  = searchPrevNode(list, targetN);
  
        deleteNode(list, prevN, targetN);
        printAllList(list);
    }
    
    
    puts("\n//");
    puts("실습6 : 역순");
    
    list_t *list3 = (list_t*) malloc( sizeof(list_t) );
    
    node_t *node1 = (node_t*) malloc(sizeof(node_t));
    node1->data = 100;
    insertNodeAtFront(list3, node1);
    
    node_t *node2 = (node_t*) malloc(sizeof(node_t));
    node2->data = 50;
    insertNodeAtFront(list3, node2);
    
    node_t *node3 = (node_t*) malloc(sizeof(node_t));
    node3->data = 40;
    insertNodeAtFront(list3, node3);
    
    node_t *node4 = (node_t*) malloc(sizeof(node_t));
    node4->data = 30;
    insertNodeAtFront(list3, node4);
    
    node_t *node5 = (node_t*) malloc(sizeof(node_t));
    node5->data = 20;
    insertNodeAtFront(list3, node5);
    
    node_t *node6 = (node_t*) malloc(sizeof(node_t));
    node6->data = 10;
    insertNodeAtFront(list3, node6);
    
    puts("before invert");
    printAllList(list3);
    
    puts("after invert");
    list3->head = invert_linked_list(list3->head);
    printAllList(list3);
    
    puts("\n//\n실습7 : Concatenate");
    
    list_t *list4 = (list_t*)malloc(sizeof(list_t));
    
    node_t *node_a = (node_t*) malloc(sizeof(node_t));
    node_a->data = 200;
    insertNodeAtFront(list4, node_a);
    
    node_t *node_b = (node_t*) malloc(sizeof(node_t));
    node_b->data = 150;
    insertNodeAtFront(list4, node_b);
    
    node_t *node_c = (node_t*) malloc(sizeof(node_t));
    node_c->data = 140;
    insertNodeAtFront(list4, node_c);

    node_t *node_d = (node_t*) malloc(sizeof(node_t));
    node_d->data = 130;
    insertNodeAtFront(list4, node_d);
    
    node_t *node_e = (node_t*) malloc(sizeof(node_t));
    node_e->data = 120;
    insertNodeAtFront(list4, node_e);
    
    node_t *node_f = (node_t*) malloc(sizeof(node_t));
    node_f->data = 110;
    insertNodeAtFront(list4, node_f);
    
    list3->head = invert_linked_list(list3->head);
    list3->head = concatenate(list3->head, list4->head);
    free(list4);

    printAllList(list3);
    
    puts("\n//\n자료구조 책 4.2-4 : length");
    int len = countLinkedListLength(list3);
    puts("list3: ");
    printAllList(list3);
    printf("list3의 노드 갯수 : %d \n", len);
    
    len = countLinkedListLength(list4);
    puts("\nlist4: ");
    printAllList(list4);
    printf("list4의 노드 갯수 : %d \n", len);
    
    len =countLinkedListLength(list);
    puts("\nlist: ");
    printf("list의 노드 갯수 : %d \n", len);
    
    
    free(list);
    list = NULL;
    len =countLinkedListLength(list);
    puts("\nif list is freed  ");
    printf("list의 노드 갯수 : %d \n", len);
    
    

  
    return 0;
}

int countLinkedListLength(list_t* list){
    
    int count = 0;
    node_t *curNode = NULL;
    
    if(list == NULL) return -1;
    if(list->head == NULL) return count;
    else{
        curNode = list->head;
        count++;
        
        while(curNode->next){
            curNode = curNode->next;
            count++;
        }
        return count;
    }
}

node_t* concatenate(node_t* head1, node_t* head2){
    node_t* temp = NULL;
    
    if(head1==NULL && head2==NULL) return NULL;
    else if(!head1) return head2;
    else if(!head2) return head1;
    else{
        
        temp = head1;
        while(temp->next)
            temp = temp->next;
        
        temp->next = head2;
        
        return head1;
    }
    
}

node_t* invert_linked_list(node_t* head){
    node_t *temp = NULL;
    node_t *newHead = NULL;
    
    if(!head) return NULL;
    
    while(head){
        temp = head;
        head = head->next;
        
        temp->next = newHead;
        newHead = temp;
    }
    
    return newHead;
}

void printAllList(list_t *list){
    
    if(list==NULL) return;
    
    node_t *curNode;
    curNode = list->head;
    
    while(curNode){
        printf("%d ", curNode->data);
        
        curNode = curNode->next;
    }
    printf("\n");
    
    
    return;
}

void insertNodeAtFront(list_t* list, node_t* node){
    
    if(node==NULL) return;
    
    if(list){
        node->next = list->head;
        list->head = node;
    }
    else{
        node->next = NULL;
        list->head = node;
    }
    
    return;
}

node_t* searchNode(list_t* list, int key){
    if(list){
        node_t *curNode = list->head;
        
        while(curNode){
            if(curNode->data == key){
                printf("%d는 %p에 있습니다.\n", key, curNode);
                return curNode;
            }
            
            curNode = curNode->next;
        }
    }
    else{
        printf("리스트를 찾을 수 없습니다\n");
        return NULL;
    }
    
    printf("찾는 숫자가 없습니다.\n");
    return NULL;
}

node_t* searchPrevNode(list_t* list, node_t* targetN){
    if(targetN == NULL) return NULL;
    
    node_t* curNode = list->head;
    
    while(curNode){
        if(curNode->next == targetN) return curNode;
        
        curNode = curNode -> next;
    }
    
    printf("타겟 노드는 list head에 있습니다.\n");
    return NULL;
}
void insertNode(list_t* list, node_t* nodeA, node_t* nodeB){
    if(nodeB == NULL) return;
    
    if(nodeA){
        nodeB->next = nodeA->next;
        nodeA->next = nodeB;
    }
    else{
        nodeB->next = NULL;
        list->head = nodeB;
    }
    return;
}

void deleteNode(list_t* list, node_t* prevN, node_t* targetN){
    if(targetN == NULL || list == NULL) return;
    if(prevN){
        prevN->next = targetN->next;
    }
    else{
        list->head = targetN->next;
    }
    return;
}

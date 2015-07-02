//
//  doubly_linked_list.c
//  cLinkedList
//
//  Created by Kate KyuWon on 5/24/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int element;
    struct node *prev;
    struct node *next;
} node_t;

typedef struct list{
    node_t *head;
} list_t;

node_t* search_double_linked_list(list_t* list, int key);
void insertNode(node_t* node, node_t* newNode);
void deleteNode(list_t* list, node_t* node);

void printAllNodes(list_t* list);

int main(void){
    list_t *list;
    node_t *dummy = (node_t*) malloc(sizeof(node_t));
    
    list->head = dummy;
    dummy->prev = dummy;
    dummy->next = dummy;
    
    node_t *first= (node_t*) malloc(sizeof(node_t));
    first->element = 9;
    node_t *second= (node_t*) malloc(sizeof(node_t));
    second->element = 16;
    node_t *third= (node_t*) malloc(sizeof(node_t));
    third->element = 4;
    node_t *fourth= (node_t*) malloc(sizeof(node_t));
    fourth->element =1;
    
    insertNode(dummy, first);
    insertNode(first, second);
    insertNode(second, third);
    insertNode(third, fourth);
    
    
    puts("//실습 : 생성된 circular doubly linked list 확인");
    node_t *curNode = dummy->next;
    while(curNode != dummy){
        printf("data: %d, prev adress: %p, prev data: %d, next address: %p, next data: %d \n", curNode->element, curNode->prev, curNode->prev->element, curNode->next, curNode->next->element);
        curNode = curNode->next;
    }
    
    puts("//실습: 모든 노드의 데이터 출력하기");
    printAllNodes(list);
    
    puts("//실습: 주어진 키값을 갖는 노드 찾기");
    printf("1을 갖는 노드의 주소: %p \n", search_double_linked_list(list, 1));
    printf("20을 갖는 노드의 주소: %p \n", search_double_linked_list(list, 20));
    
    puts("//실습: 키값으로 16을 갖는 노드 다음에 새로운 노드 추가하기");
    node_t *newNode = (node_t*)malloc(sizeof(node_t));
    newNode->element = 45;
    
    insertNode(search_double_linked_list(list, 16), newNode);
    printAllNodes(list);
    
    puts("//실습: 키값으로 16을 갖는 노드 삭제하기" );
    deleteNode(list, search_double_linked_list(list, 16));
    printAllNodes(list);
    
    return 0;
}

void printAllNodes(list_t* list){
    node_t *curNode = list->head->next;
    
    while(curNode != list->head){
        printf("%3d", curNode->element);
        curNode = curNode->next;
    }
    printf("\n");
}

node_t* search_double_linked_list(list_t* list, int key){
    node_t* curNode = list->head->next;
    if(!list) return NULL;
    
    while(curNode != list->head){
        if(curNode->element == key) return curNode;
        
        curNode = curNode->next;
    }
    
    return (node_t*)NULL;
}
void insertNode(node_t* node, node_t* newNode){
    
    if(!newNode) return;
    
    
    if(!node){
        newNode->prev = newNode;
        newNode->next = newNode;
        return;
    }
    
    newNode->next = node->next;
    newNode->prev = node;
    
    if(node->next)
        node->next->prev = newNode;
    node->next = newNode;
}

void deleteNode(list_t* list, node_t* node){
    if(!list||!node) return;
    
    if(node->prev == node){
        if(list->head) list->head = NULL;
       // if(node->next) node->next->prev = NULL;
    }
    else{
        if(node->prev) node->prev->next = node->next;
        //if(node->next) node->next->prev= node->prev;
    }
    
    
    if(node->next) node->next->prev = node->prev;
}


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
    node_t *dummy;
    list->head = dummy;
    dummy->prev = NULL;
    dummy->next = NULL;
    
    node_t *first;
    first->element = 9;
    node_t *second;
    second->element = 16;
    node_t *third;
    third->element = 4;
    node_t *fourth;
    fourth->element =1;
    
    insertNode(dummy, first);
    insertNode(first, second);
    insertNode(second, third);
    insertNode(third, fourth);
    
    
    
    
}

void printAllNodes(list_t* list){
    node_t *curNode = list->head;
    
}

node_t* search_double_linked_list(list_t* list, int key){
    node_t* curNode = list->head;
    if(!list) return NULL;
    
    while(curNode){
        if(curNode->element == key) return curNode;
        
        curNode = curNode->next;
    }
    
    return (node_t*)NULL;
}
void insertNode(node_t* node, node_t* newNode){
    
    if(!node||!newNode) return;
    
    newNode->next = node->next;
    newNode->prev = node;
    
    if(node->next)
        node->next->prev = newNode;
    node->next = newNode;
}

void deleteNode(list_t* list, node_t* node){
    if(!list||!node) return;
    
    if(node->prev == NULL){
        if(list->head) list->head = node->next;
       // if(node->next) node->next->prev = NULL;
    }
    else{
        if(node->prev) node->prev->next = node->next;
        //if(node->next) node->next->prev= node->prev;
    }
    
    
    if(node->next) node->next->prev = node->prev;
}


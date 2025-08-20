#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct{
int elem[MAX];
int count;
}List;

List init(){
    List L;
    for(int i = 0; i < MAX; i++){
        L.elem[i] = -1;
    }
    return L;
}

List insertPos(List L, int data, int pos){
//    if(L.count == MAX){
//     printf("full");
//     return L;
//    } 
   for (int i = L.count; i > pos; i--){
    L.elem[i] = L.elem[i - 1];
   }
   L.elem[pos] = data;
   L.count++;
   return L;
}

List deletePos(List L, int pos){
    // if(pos < 0 || pos >= L.count){
    //     printf("invalid");
    // }
    for (int i = pos; i < L.count - 1; i++){
        L.elem[i] = L.elem[i + 1];
    }
    L.count--;
    return L;
}

int locate(List L, int data){
    for (int i = 0; i < MAX; i++){
        if(L.elem[i] == data){
            return i;
        }
    }
}

void display(List L){
    for (int i = 0; i < L.count; i++){
        printf("%d", L.elem[i]);
    }
}

int main(){
List L;
L.count = 0;

L = insertPos(L, 0, 10);
L = insertPos(L, 1, 20);
L = insertPos(L, 1, 30);


return 0;
}
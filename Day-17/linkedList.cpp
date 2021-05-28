#include <iostream>

struct NODE{
    int value;
    int *next;
};

int main(){
    NODE *C;
    NODE n;
    C = &n;
    C.value = 5;
    C.next = "/0";
    cout<<C.value;
}
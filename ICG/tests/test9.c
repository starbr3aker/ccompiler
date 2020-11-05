// Explicit Error that our Language doesn't support '@' as a character to start identifiers.
//fail
#include<stdio.h>

int main() {
    char @hello;
    @hello = 'c';
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
 
void proof() {
    setreuid(geteuid(), geteuid());
    system("/bin/bash");
}

void func(){

    char buffer[64];
    fgets(buffer,69,stdin);
}

int main(){

    printf("Hello, good ! This is the second part of the challenge\n");
    printf("\n\nFirst tell me your name :\n\n");
    char buffer[128];
    fgets(buffer,133,stdin);
    printf("\nSecond tell me your age :\n\n");
    func();
    return(0);
}

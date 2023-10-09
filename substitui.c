#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,NULL);
    char S[20]; 
    char c1;
    char c2;
    fgets(S,20,stdin);
    scanf(" %c",&c1);
    scanf(" %c",&c2); 
    int length = strlen(S); 
    for(int i=0;i<length;i++){
        if(S[i]==c1){
            S[i]=c2;
            break;
        }
    }
    printf("%s",S);
    return 0;
}

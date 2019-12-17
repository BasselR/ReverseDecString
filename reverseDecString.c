#include <stdio.h>
#include <string.h>

int main(){

    char myString[80]; // Prof said you can assume inputs will be <= 80
    int ready = 0;
    int counter = 0;
    int leading = 0;
    int allZeros = 1;

    printf("Enter a integer: ");
    scanf("%s", myString);

    for(int i = 0; i < strlen(myString) - 1; i++){
        if(myString[i] == '0'){
            leading++;
        }
        else{
            allZeros = 0;
            break;
        }
    }

    if(allZeros == 1){
        myString[0] = '\0';
        printf("%s", myString);
    } 

    if(strlen(myString) <= 20){
        for (int i = strlen(myString) - 1; i >= leading; i--){
        if(counter < 20){
            if(myString[i] != '0'){
            printf("%c", myString[i]);
            ready = 1;
            }
            else{
                if(ready == 1){
                    printf("%c", myString[i]);
                }
            }
        }
        counter++;      
        }
    }

    else{
        for (int i = 19; i >= leading; i--){
        if(counter < 20){
            if(myString[i] != '0'){
            printf("%c", myString[i]);
            ready = 1;
            }
            else{
                if(ready == 1){
                    printf("%c", myString[i]);
                }
            }
        }
        counter++;      
        }        
    }
     return 0;
}
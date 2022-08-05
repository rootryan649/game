#include <stdio.h>

/* 

locations

1 = living room
2 = bedroom
3 = kitchen
4 = bathroom

commands

1= change location

*/

int main(){
    char welcomeMessage[] = "Welcome to game\n";
    printf(welcomeMessage);
    int location;
    int command;
    printf("Enter command: ");
    scanf("%d", &command);
    if (command == 1){
        printf("Enter location: ");
        scanf("%d", &location);
        if(location == 1){
            printf("You are in the living room");
        }  
        else if (location == 2){
            printf("You are in the bedroom");
        }
        else if (location == 3){
            printf("You are in the kitchen");
        }
        else if (location == 4){
            printf("You are in the bathroom");
        } 
        else{
            printf("Invalid location");
        }
    }
    else{
        printf("Invalid location");
    }
    return 0;
}

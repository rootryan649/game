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
    printf("Enter command: \n");
    scanf("%d", &command);
    switch(command){
        case 1:
            printf("Enter location: ");
            scanf("%d", &location);
            switch(location){
                case 1:
                    printf("You are in the living room");
                    break;
                case 2:
                    printf("You are in the bedroom");
                    break;
                case 3:
                    printf("You are in the kitchen");
                    break;
                case 4:
                    printf("You are in the bathroom");
                    break;
                default:
                    printf("Invalid location");
                    break;
            }
            break;
        default:
            printf("Invalid command");
            break;
        }
    return 0;
}

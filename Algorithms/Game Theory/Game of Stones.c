/*
Two players (numbered 1 and 2) are playing a game with stones. 
Player always plays first, and the two players move in alternating turns. 
The game's rules are as follows:

-In a single move, a player can remove either , , or stones from the game board.
-If a player is unable to make a move, that player loses the game.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,res;
    scanf("%d", &n);
    int *stone = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&stone[i]);
    }
    
    for(int i = 0; i < n; i++){      
        res = stone[i] % 7;

//If numberofstone mod 7 equal and greater than 2, definitely first player win.
        if(res >= 2)
        printf("First\n");

//If numberofstone mod 7 less than 2, definitely second player win.
        if(res < 2)
        printf("Second\n");
    } 
    
    return 0;
}
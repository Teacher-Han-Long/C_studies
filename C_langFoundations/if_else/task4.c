#include <stdio.h>

int main(void) {
/*
	You decide to bet on the final match of the Tug of War National Championship. 

Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the same number of players on each side. You record the player weights as they are presented and calculate a total weight for each time to inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights (integers representing kilograms) alternating by team. 

After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 or 2 depending on which team has a greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see example below).
You are guaranteed that the two teams will not have the same total weight.
Input: 4
110
106
113
102
112
121
117
111
Output:
Team 1 has an advantage
Total weight for team 1: 452
Total weight for team 2: 440
*/

	int numOfPlayers;
    int i, x, t1Weight, t2Weight;
    scanf("%d", &numOfPlayers);
    int team1Sum = 0, team2Sum = 0;
    
    for (i = 0; i < numOfPlayers; i++) {
    scanf("%d", &t1Weight);
    team1Sum += t1Weight;
    scanf("%d", &t2Weight);
    team2Sum += t2Weight;
    }
    
    if (team1Sum > team2Sum) {
        x = 1;
    } else {
        x = 2;
    }
    
    printf("Team %d has an advantage \n", x);
    printf("Total weight for team 1: %d \n", team1Sum);
    printf("Total weight for team 2: %d \n", team2Sum);
	
	
	//Their code
	int i;
    int nbMembers = 0;
    int totalWeightTeam1 = 0;
    int totalWeightTeam2 = 0;
    int weightRead = 0;
    scanf("%d", &nbMembers);
    for(i=0; i<nbMembers; i++){
        scanf("%d", &weightRead);
        totalWeightTeam1 = totalWeightTeam1 + weightRead;
        scanf("%d", &weightRead);
        totalWeightTeam2 = totalWeightTeam2 + weightRead;
    }
    int advantageTeam1 = totalWeightTeam1 > totalWeightTeam2;
    if(advantageTeam1){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalWeightTeam1);
    printf("Total weight for team 2: %d\n", totalWeightTeam2);
    return 0;
}
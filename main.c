#include <stdio.h>
#include <stdlib.h>

//MOHAMMAD ALI NASIRI
//404149076
//!!!!!comend ha finglish va print ha english hastand!!!!
int main(int argc, char *argv[]) {
	
	int vot,cand,i,j,vote,win=0,winner=0;
	//vot = tedad ray dahandeh | cand = tedad namzad ha | vote = ray dadeh shode | win = bala tarin tedad ray | winer = namzad ba bala tarin ray |
	printf("Enter the number of candidates : ");
	scanf("%d",&cand);//cand -> number of candidates
	
	int arr[cand];
	
	for(i=0;i<cand;i++){
		arr[i] = 0;
	}
	
	printf("Enter the number of voters : ");
	scanf("%d",&vot);//vot -> number of voters
	
	for(j=0;j<vot;j++){
		printf("Enter the code of your chosen candidate to vote : "); 
		scanf("%d",&vote);
		
		if(vote >= 1 && vote <= cand){
			arr[vote - 1]++;
			printf("Your vote has been successfully submitted\n\n");
			printf("Please, the next person should vote.\n\n");}
			
		 else { printf("The electoral candidate code is invalid \n\n please try again\n\n");
		 j--;
		 continue;
		 }}
		 
		//Baraye shenakhtan namzadi ke bala tarin ray ra darad
	for(i=0;i<cand;i++){
		if(arr[i]>win){
			win=arr[i];
			winner=i;
		}}
		
	//har namzad chand ray avardeh	
		for(i = 0; i < cand; i++) {
    printf("Candidate number %d : %d vote\n\n", i + 1, arr[i]);
    }
    
	//Baraye tashkhis inke agar bish az 2 kandida ray barabar dashtan, ray giri dobare anjam beshe.
	int temp=0;
	 for(i=0;i<cand;i++){
        if(arr[i] == win){
        	temp++;
        }}   
     if (temp!=1){
    	printf("There is more than one winner, and the voting starts over.\n");
    	printf("Vote again.\n");
    	return 0;}
    	
    
    printf("********  candidates number %d is winner  ********\n", winner + 1);
    printf("         ********  with %d vote  ********\n", arr[winner]);

	return 0;
}
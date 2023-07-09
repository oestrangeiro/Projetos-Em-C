// Prototipagem das funcoes mais zikas de toda a computação

#include "CoresAnsi.h"


void boasVindas(void){
	system("clear");
	printf(NC_AMARELO "\n\n\t\t*******************************************\n" NC_RESET);
	printf(NC_AMARELO "\t\t*" NC_VERDE " BEM-VINDO AO MELHOR JOGO DE ADIVINHAÇÃO " NC_AMARELO "*\n" NC_RESET);
	printf(NC_AMARELO "\t\t*******************************************\n\n" NC_RESET);
}

void instrucoes(void){
	printf(NC_AMARELO "VOCÊ DEVE CHUTAR UM NÚMERO ENTRE 1 ~ 20\n" NC_RESET);
	printf(NC_AMARELO "Não se preocupe, você tem tentativas ilimitadas\n" NC_RESET);
}

void pedePalpite(void){
	printf(NC_CIANO "\nQual o seu palpite?:" NC_VERDE);	
}

void mostraRostinhoFeliz(void){

printf(NC_AMARELO"                    *****************\n");
printf("               ******               ******\n");
printf("           ****                           ****\n");
printf("        ****                                 ***\n");
printf("      ***                                       ***\n");
printf("     **           ***               ***           **\n");
printf("   **           *******           *******          ***\n");
printf("  **            *******           *******            **\n");
printf(" **             *******           *******             **\n");
printf(" **               ***               ***               **\n");
printf("**                                                     **\n");
printf("**       *                                     *       **\n");
printf("**      **                                     **      **\n");
printf(" **   ****                                     ****   **\n");
printf(" **      **                                   **      **\n");
printf("  **       ***                             ***       **\n");
printf("   ***       ****                       ****       ***\n");
printf("     **         ******             ******         **\n");
printf("      ***            ***************            ***\n");
printf("        ****                                 ****\n");
printf("           ****                           ****\n");
printf("               ******               ******\n");
printf("                    *****************\n" NC_RESET);

}
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <conio.h>
# include <windows.h>


void setTextColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int input (void){ // Pega o caractere digitado pelo usuário e devolve um valor entre 1 e 5
	char resposta;
	printf ("Resposta?\n");
	do {
		scanf ("%c", &resposta);
		if (resposta >= 'a' && resposta <= 'e') resposta = toupper(resposta);
	} while (resposta < 'A' || resposta > 'E');
	switch (resposta) {
		case 'A' : return 1;
		case 'B' : return 2;
		case 'C' : return 3;
		case 'D' : return 4;
		default : return 5;
	}
}

void exibe_grafico(char parametro, int pontos, int *p1pontos, int *p2pontos, int *p3pontos) { // Recebe os valores de cada parâmetro e mostra uma barra de pontuação
	if (parametro == '$') {printf ("Pontua%c%co em Caixa($) %c:\n[", 135, 198, 130); setTextColor(4);}
	if (parametro == '@') {printf ("Pontua%c%co em Efici%cncia %c:\n[", 135, 198, 136, 130); setTextColor(2);}
	if (parametro == '%') {printf ("Pontua%c%co em Efic%ccia %c:\n[", 135, 198, 160, 130);setTextColor(1);}
	for(int i=1; i<=100; i++)
		if (i <= pontos) printf("%c",219);
		else {
			setTextColor(15);
			printf("%c",219);
		}
	setTextColor(7);
	printf ("] %d / 100\n\n", pontos);
	if (parametro == '$') {printf("Voce recebeu %d pontos em Caixa($)\n\n", *p1pontos); *p1pontos = 0;}
	if (parametro == '@') {printf("Voce recebeu %d pontos em Efici%cncia\n\n\n", *p2pontos, 136); *p2pontos = 0;}
	if (parametro == '%') {printf("Voce recebeu %d pontos em Efic%ccia\n\n\n", *p3pontos, 160); *p3pontos = 0;}
}

void score_1 (int questao, int alternativa, int *p1, int *p2, int *p3, int *p1pontos, int *p2pontos, int *p3pontos) { //Tabela de pontuações para cada questão Gestao Publica
	if (questao == 1) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + ( *p2pontos = 5); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 4) { 			                *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 3);*p2 = *p2 + (*p2pontos = -5); *p3 = *p3 + (*p3pontos = -5);}
	}
	if (questao == 2) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = 5); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = -1);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = 5);                             ; *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = 3); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = 3); *p2 = *p2 + ( *p2pontos = 5);   			                }
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos = 3); *p2 = *p2 + (*p2pontos = -5); *p3 = *p3 + ( *p3pontos = -5);}
	}
	if (questao == 3) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = 1) ;                                *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = 1) ; *p2 = *p2 + ( *p2pontos = -1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 3) {                              *p2 = *p2 + ( *p2pontos = -1); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -3); *p2 = *p2 + ( *p2pontos = -3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos = 5) ; *p2 = *p2 + ( *p2pontos = 1) ; *p3 = *p3 + (*p3pontos = -3);}
	}
	if (questao == 4) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos = 1);}
		if (alternativa == 4) {                              *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + (*p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos = 1);}
	}
	if (questao == 5) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -2); *p2 = *p2 + ( *p2pontos = 8); *p3 = *p3 + ( *p3pontos = 8);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = -2); *p2 = *p2 + ( *p2pontos = 6); *p3 = *p3 + ( *p3pontos = 8);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 4); *p2 = *p2 + ( *p2pontos = 8); *p3 = *p3 + ( *p3pontos = 2);}
		if (alternativa == 4) {*p1 = *p1 + ( *p1pontos = 8); *p2 = *p2 + ( *p2pontos = 4); *p3 = *p3 + (*p3pontos = -4);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 6); *p2 = *p2 + ( *p2pontos = 4);			                    }
	}
	if (questao == 6) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = 1); *p2 = *p2 + (*p2pontos = -1);*p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 1);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + (*p2pontos = 1);                             }
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -3);*p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1);*p2 = *p2 + (*p2pontos = 5); *p3 = *p3 + (*p3pontos = 3);}
	}
	if (questao == 7) {
		if (alternativa == 1) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = -3); *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -3); *p2 = *p2 + (*p2pontos = -1);*p3 = *p3 + (*p3pontos = 1);}
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = -1);*p3 = *p3 + (*p3pontos =-1);}
	}
	if (questao == 8) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos =  5); *p2 = *p2 + (*p2pontos =  5); *p3 = *p3 + (*p3pontos =  5);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -3);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos =  1); *p2 = *p2 + (*p2pontos =  1); *p3 = *p3 + (*p3pontos =  3);}
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos =  1); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos =  1);}
	}
	if (questao == 9) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + (*p2pontos = -3);*p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = -1);*p2 = *p2 + (*p2pontos = -1);*p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {                             *p2 = *p2 + (*p2pontos = -1);*p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + ( *p1pontos = 3);*p2 = *p2 + ( *p2pontos = 3);*p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 3);*p2 = *p2 + ( *p2pontos = 1);*p3 = *p3 + ( *p3pontos = 1);}
	}
	if (questao == 10) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos =  1); *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 1);}
		if (alternativa == 2) {                              *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos =  1); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 1);}
		if (alternativa == 5) {                              *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 5);}
	}

}

void score_2 (int questao, int alternativa, int *p1, int *p2, int *p3, int *p1pontos, int *p2pontos, int *p3pontos) { //TEMPLATE Tabela de pontuações para cada questão Gestao Privada
	if (questao == 1) {
		if (alternativa == 1) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos = -3);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 4) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + (*p2pontos = -3); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 5) {                              *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos = -5);}
	}
	if (questao == 2) {
		if (alternativa == 1) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = -5); *p3 = *p3 + (*p3pontos = -3);}
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos = -3); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos = -3);}
	}
	if (questao == 3) {
		if (alternativa == 1) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 4) {                                                           *p3 = *p3 + (*p3pontos = -3);}
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos = -3); *p2 = *p2 + (*p2pontos = 5); *p3 = *p3 + ( *p3pontos = 3);}
	}
	if (questao == 4) {
		if (alternativa == 1) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + ( *p3pontos = 1);}
	}
	if (questao == 5) {
		if (alternativa == 1) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 3) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + ( *p1pontos = 3); *p2 = *p2 + (*p2pontos = 1); *p3 = *p3 + (*p3pontos = 3);}
		if (alternativa == 5) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + (*p2pontos = 3); *p3 = *p3 + (*p3pontos = 3);}
	}
	if (questao == 6) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 5); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
	}
	if (questao == 7) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 5); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
	}
	if (questao == 8) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 5); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
	}
	if (questao == 9) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 5); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
	}
	if (questao == 10) {
		if (alternativa == 1) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 5); *p3 = *p3 + ( *p3pontos = 3);}
		if (alternativa == 2) {*p1 = *p1 + ( *p1pontos = 5); *p2 = *p2 + (*p2pontos = -1); *p3 = *p3 + (*p3pontos = -1);}
		if (alternativa == 3) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + ( *p3pontos = 1);}
		if (alternativa == 4) {*p1 = *p1 + (*p1pontos = -1); *p2 = *p2 + ( *p2pontos = 3); *p3 = *p3 + ( *p3pontos = 5);}
		if (alternativa == 5) {*p1 = *p1 + ( *p1pontos = 1); *p2 = *p2 + ( *p2pontos = 1); *p3 = *p3 + (*p3pontos =  1);}
	}
}

void prova_1 (void) { //Prova 1 - gestao publica
	int p1 = 50;	int p2 = 50;	int p3 = 50; //pontuação inicial dos 3 parâmetros
	int p1pontos = 0; int p2pontos = 0; int p3pontos = 0;
	system("cls");
	for (int i=1; i<=10; i++) {
		exibe_questao_1 (i);
		score_1 (i, input (), &p1, &p2, &p3, &p1pontos, &p2pontos, &p3pontos);
		exibe_grafico ('$', p1, &p1pontos, &p2pontos, &p3pontos);
		exibe_grafico ('@', p2, &p1pontos, &p2pontos, &p3pontos);
		exibe_grafico ('%', p3, &p1pontos, &p2pontos, &p3pontos);
		system("PAUSE");
		system("cls");
	}
	fechamento (p1, p2, p3);
}

void prova_2 (void) { //Prova 2 - gestao privada
	int p1 = 50;	int p2 = 50;	int p3 = 50; //pontuação inicial dos 3 parâmetros
	int p1pontos = 0; int p2pontos = 0; int p3pontos = 0;
	system("cls");
	for (int i=1; i<=5; i++) {
		exibe_questao_2 (i);
		score_2 (i, input (), &p1, &p2, &p3, &p1pontos, &p2pontos, &p3pontos);
		exibe_grafico ('$', p1, &p1pontos, &p2pontos, &p3pontos);
		exibe_grafico ('@', p2, &p1pontos, &p2pontos, &p3pontos);
		exibe_grafico ('%', p3, &p1pontos, &p2pontos, &p3pontos);
		system("PAUSE");
		system("cls");
	}
	fechamento (p1, p2, p3);
}

int main (void) {
	char opcao; // opção feita na tela título
	do {
		tela_titulo();
		scanf("%c", &opcao);
		if (opcao == '1') prova_1 ();
		if (opcao == '2') prova_2 ();
		if (opcao == '3') instrucoes ();
	} while (opcao != '4');
	return 0;
	}

#include <stdio.h>
int main() {
	int n_alunni = 10;
	int n_voti = 15;
	float classe[n_alunni][n_voti], medie[n_alunni];
	
	int alunno_corrente, voto_corrente, somma_voti_corrente, da_stampare;

	for ( alunno_corrente = 0; alunno_corrente < n_alunni; alunno_corrente++ ) {
		printf("\n\nInserisci i voti dell'alunno %d:\n", alunno_corrente);
		
		somma_voti_corrente = 0;
		for(voto_corrente = 0; voto_corrente < n_voti; voto_corrente++) {
			printf("\n    Inserisci il voto %d: ", voto_corrente);
			scanf("%f", &classe[alunno_corrente][voto_corrente] );
			somma_voti_corrente += classe[alunno_corrente][voto_corrente];
		}	
		medie[alunno_corrente] = (float) somma_voti_corrente / n_voti;
		printf("\nL'alunno ha la media del %.1f\n", medie[alunno_corrente]);
	}
	printf("\nOra inserisci 1 se vuoi la lista dei promossi, inserisci 2 per quella dei bocciati: ");
	scanf("%d", &da_stampare);
	switch (da_stampare) {
		
		case 1:
			for (alunno_corrente = 0; alunno_corrente < n_alunni; alunno_corrente++) {
				if (medie[alunno_corrente]  >= 6) {
					printf("\n    - E' stato promosso l'alunno %d con la media del %.1f", alunno_corrente, medie[alunno_corrente]);
				}
			}
		break;
		
		case 2:
			for (alunno_corrente = 0; alunno_corrente < n_alunni; alunno_corrente++) {
				if (medie[alunno_corrente]  < 6) {
					printf("\n    - E' stato bocciato l'alunno %d con la media del %.1f", alunno_corrente, medie[alunno_corrente]);
				}
			}
		break;

		default:
			printf("\nValore non accettabile!\n");
		break;
	}

	printf("\n\n");
	return 0;
}

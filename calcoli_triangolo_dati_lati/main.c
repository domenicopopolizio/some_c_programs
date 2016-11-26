#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	// inizializzazione variabili che dovranno contenere le misure dei lati del triangolo, chiamati x, y, z;	
	int x, y, z;
	
	// inizializzazione delle variabili che conterranno area (A) perimetro (P) semiperimetro (p) e anche delta (D)
	float A, P, p, D;
	
	// inizializzazione della variabile contenente il tipo di triangolo ( ISOSCELE; SCALENO; EQUILATERO )
	// si usa un char con  "*" per indicare che è una stringa (in parole MOLTO povere)
	char *tipo;

	//richiediamo all'utente le misure dei lati x, y, z
	printf("Inserisci le misure dei lati del triagolo (x y z): ");
	scanf("%d%d%d", &x, &y, &z);
	
	// verifichiamo che i dati inseriti appartengano a un triangolo ( ogni lato deve essere minore della somma degli
	// altri due, altrimenti le misure dei lati inseriti non appartengono ad un triangolo
	if ( x < y+z && y < x+z && z < x+y ) {
		
		// nel caso in cui il triangolo sia esistente

		//calcoliamo P come somma dei lati
		P = x+y+z;
		
		//calcoliamo p come metà del perimetro (P)
		p = P/2.0;
		
		//calcoliamo A con la formula matematica per calcolare l'area sapendo i lati
		D = (p*(p-x)*p*(p-y)*p*(p-z));
		A = sqrt(D);

		// se tutti i lati sono uguali
		if ( (x == y) && (y == z) ) {
			// Il triangolo è equilatero
			tipo = "Equilatero";
		} // altrimenti se sono tutti diversi
		else if ( (x != y) && (x != z) && (y != z)) {
			tipo = "Scaleno"; // il triangolo è scaleno
		}
		else { // altrimenti (se non sono tutti uguali e nemmeno tutti diversi, allora due saranno uguali e uno diverso)
			tipo = "Isoscele"; // quindi il triangolo è isoscele
		}
		
		//mostriamo i dati a video
		printf("\nI dati inseriti appartengono ad un triangolo %s ", tipo); //correggere
		printf("di Area = %f, e Perimetro = %f\n", A, P);
	}
	else {
		//scriviamo che il triangolo non esiste perche almeno un lato NON
		//è minore della somma degli altri due
		printf("\nMi dispiace ma i valori inseriti non appartengono ad un triangolo!");
	}
	
	
	//Nuova linea per questioni estetiche su linux
	printf("\n");
	
	// SE SEI SU WINDOWS TOGLI "//" DALL'INIZIO DELLA PROSSIMA RIGA
	//system("pause")
	
	
	return 0;
}

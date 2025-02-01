
											//Hier eine kurze Einleitung in die Funktion//
											  //und Nutzung dieser kleien Bibliothek//

							//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		Dateipfad bearbeiten: 
			logger.h -> # deffine OUTPUT "C:/Dein/Wunsch/Pfad.txt"


							//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		Simples loggen einer Textausgabe:
			printf("\n\n\nGeschafft Sie sind dem 'ARQ' entkommen\n");
			logger("\n\n\nGeschafft Sie sind dem 'ARQ' entkommen\n");


							//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		Loggen einer formatierten Ausgabe/Eingabe:

			char logstring[100];

			printf("\n\n\nAnzahl der moeglichen Kombinationen: %llu\n", Anzahlmogl);
			snprintf(logstring, sizeof(logstring), "\n\n\nAnzahl der moeglichen Kombinationen: %llu\n", Anzahlmogl);
			logger(logstring);
			memset(logstring, 0, sizeof(logstring));


						////////////////////////////////

			int n = 0;
			char input[5] = {0};
			char logstring[100];

			printf("Geben Sie bitte n an: ");
			logger("Geben Sie bitte n an: ");

			fgets(input, sizeof(input), stdin);
			sscanf(input, "%d", n);

			snprintf(logstring, sizeof(logstring), "%d", *n);
			logger(logstring);

			memset(logstring, 0, sizeof(logstring));
			memset(input, 0, sizeof(input));

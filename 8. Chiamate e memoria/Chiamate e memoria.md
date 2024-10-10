## chiamate e memoria
### chiamata a funzione
- Causa la creazione di una ==RA== (**Function Activation Record**) che contiene:
	- copia dei parametri
	- variabili locali
- **RA** impilati in uno **stack** (zona di memoria) LIFO
- Dimensione **RA** dipende da numero e tipo variabili locali
- Tempo di inserimento **costante**
- **Ogni chiamata a funzione** ha il proprio **RA**
	- se una funzione viene chiamata ricorsivamente due volte, ci saranno due RA
	- viene liberata la memoria solo dopo essere usciti dalla funzione
![[Pasted image 20241010132547.png|500]]
### layout di memoria
![[Pasted image 20241010133105.png|700]]
- ==Text segment==
	- contiene istruzioni in binario del programma
	- copiato in memoria dal file oggetto
	- contiene le istruzioni eseguibili
	- spesso read-only
	- spesso condiviso
- ==Initialized data segment==
	- contiene variabili locali e statiche
	- read/write
- ==Uninitialized data segment==
	- **BSS**
	- contiene variabili globali/statiche non inizializzate esplicitamente
- ==Stack==
	- contiene **RA** delle funzioni
		- variabili locali e parametri
- ==Heap==
	- ha dimensione standard
	- può essere modificato con comandi speciali
	- può essere gestito usando blocchi di memoria non contigui
	- gestito tramite ```new``` e ```delete```

#### verificare layout memoria
```shell
size main.o
```

### ordine di valutazione di un programma
- La valutazione di un programma corrisponde alla sua esecuzione
#### valutazione delle variabili
- **Variabili globali**
	- inizializzate prima del main
	- esistono durante tutta l'esecuzione del programma
- **Variabili automatiche**
	- variabili locali
	- esistono solo all'interno dello scope
	- ricreate ogni volta
- **Variabili statiche**
	- inizializzate solo la prima volta
	- mantengono valore anche al di fuori del loro scope
	- possono essere globali o locali

![[Pasted image 20241010134405.png|500]]
#### ottimizzazioni del compilatore
- Varie ottimizzazioni sono possibili
- Compilatori possono modificare implementazione mantenendo invariata la logica
#### inizializzazione globale
- Può causare problemi con programmi di più file:
	- **NON** si conosce in che ordine vengono effettuate le inizializzazioni
	- hanno la memoria scritta a 0 prima delle inizializzazioni
- Evitare l'utilizzo di ```extern```

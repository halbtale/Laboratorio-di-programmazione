## array
### definizione di array
- Sequenza **omogenea** di **oggetti** allocati in **spazi di memoria contigui**
	- ogni elemento dell'array deve avere lo **stesso tipo**
	- non ci sono spazi **vuoti** tra elementi
- Indicizzati con ```[]```
- Random access
- NO controllo se si legge fuori range
#### sintassi
```cpp
int myArray[100]; // array di 100 elementi
```
### dimensione array
- Deve essere una costante conosciuta in **compilazione**

>[!info] VLA (Variable Length Array)
>- Array di lunghezza variabile
>- Accettati dal compilatore per standard C99
>- NON standard del C++

### array come named variable
- Istanziati come **variabili**
- Possono essere utilizzati come **argomenti** di funzione

<div style="page-break-after: always;"></div>

### puntatori a elementi di un array
- Posso definire puntatori a elementi di array
```cpp
double ad[10]; 
double* p = &ad[5];
*p = 7;
p[2] = 6;
p[-3] = 9;
```
![[Pasted image 20241030114342.png|400]]
### aritmetica dei puntatori
- **Puntatori** supportano somma/sottrazione con interi
	- spostamento a destra/sinistra di $N$ slot
	- in numero di byte per cui si sposta dipende dal tipo del puntatore
### stringhe  stile c
- ==Array di char==
	- **terminano** sempre con ```\0```
- Manipolabili con funzioni dedicate
- **Retaggio** C
	- sconsigliato da usare
	- meglio: ```std::string```
### dedicadimento di un array
- Il nome di un array è un puntatore const al primo elemento dell'array
	- **RValue**
	- non posso usarlo per la copia
	- quando lo si passa ad una funzione, NON copia l'array ma passa puntatore
- Passare un array alla funzione significa passare il puntatore
	- si perdono altre informazioni (es. lunghezza array)

<div style="page-break-after: always;"></div>

### inizializzazione di un array
```cpp
char ac[] = "Beorn"; 
char* pc = "Howdy";
int ai[] = { 1, 2, 3, 4, 5, 6 };
double ad[100] = {}; // tutti a 0
```

### problemi array
- Accesso al di **fuori** dei **limiti** di un array
	- undefined behaviour
- **NON** si possono creare array di **riferimenti**, ma solo di **puntatori**
	- le reference non sono oggetti e non occupano spazio in memoria, quindi è impossibile creare un array di reference
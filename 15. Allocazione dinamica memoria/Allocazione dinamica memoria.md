## allocazione dinamica memoria
### introduzione a std::vector
- Ha un comportamento **intelligente**
	- conosce la propria dimensione
	- modifica dinamicamente la dimensione durante l'inserimento di un nuovo elemento
	- accesso con verifica
		- controlla se index a cui si accede è corretto
- È un wrapper di operazioni a basso livello
	- gestisce memoria dinamicamente e indirizzi di memoria
- **Non** può essere implementato con **array stile C**: hanno dimensione fissa
### struttura std::vector
- In memoria:
	- prima cella indica **dimensione**
	- seconda cella **puntatore** primo degli elementi contenuti nel vettore
![[Pasted image 20241106104953.png|300]]
### free store
- Sistema operativo riserva spazio per:
	- codice (text)
	- variabili globali (initialized/uninitialized data segment)
	- chiamate a funzione (stack)
- Il resto è disponibile: ==Free store== (o **heap**)
#### allocazione dinamica memoria
- Utilizzo ==new==
	- **alloca memoria** nel free store
		- dimensione **variabile**: può essere definita **runtime** (differenza con array stile C)
	- **ritorna puntatore** a primo elemento array
		- non fornisce informazioni sulla dimensione dell'array
	- la zona di memoria generata da new **NON ha un nome**
		- se perdo il puntatore, non posso più accedere a quella zona di memoria
```cpp
double* p = new double[n]
```
#### aCcesso agli elementi nel free store
- Si utilizza **aritmetica dei puntatori** e operatore ```[]```
	- ```*p```e ```p[0]```sono equivalenti
	- ```[]```permette di vedere la memoria come un array
![[Screenshot 2024-11-06 alle 11.01.55.png|500]]
>[!bug] Attenzione
>- se leggo indici fuori range il programma potrebbe terminare inaspettatamente
>- può causare bug difficile da gestire
#### inizializzazione tipi built-in
![[Pasted image 20241106110428.png|600]]

>[!danger] Ricorda
>Nel caso dell'allocazione dinamica non c'è una inizializzazione di default per i tipi builtin
#### inizializzazione udt
![[Pasted image 20241106110720.png|600]]

>[!bug] Attenzione
>Se il costruttore di default non esiste, mi dà errore se non passo gli argomenti

### null pointer - controllo di validità
![[Pasted image 20241106111038.png|600]]

>[!bug] Attenzione
>I puntatori non vengono inizializzati a ```nullptr```in automatico, bisogna farlo in modo esplicito

### spostamento di un puntatore
![[Pasted image 20241106111254.png|600]]
<div style="page-break-after: always;"></div>

### garbage
- Si definisce ==garbage== un'area di **memoria** di cui si **perdono** i **riferimenti**
- ==Memory leak==
	- **memoria** rimane **allocata** ma è **inservibile**
	- può portare all'**esaurimento** della memoria
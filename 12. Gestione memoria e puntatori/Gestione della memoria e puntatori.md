## gestione della memoria e puntatori
### introduzione
- Compito di **basso livello**
	- molto vicine all'HW
- Di solito gestito da librerie
- Non tutto il codice può essere ad alto livello 
	- es. dispositivi embedded (poca ram)
### puntatori
- **Tipo di variabili**
- Contiene un ==indirizzo di memoria==
- Attraverso l'indirizzo si può accedere al ==dato puntato==
![[Pasted image 20241030104857.png|200]]
- Contiene informazione sul ==tipo== del dato puntato
	- è noto il tipo a cui punta quindi ne si conosce anche la dimensione
#### sintassi
```cpp
double* p
```
- Il carattere ```*``` indica che la variabile definito è un puntatore
	- può essere unito al tipo o al puntatore
	- può essere separato
- Per dichiarare due puntatori in una sola istruzione devo ripetere ```*```
- Utilizzando ```&``` su una variabile, posso estrarne l'indirizzo
<div style="page-break-after: always;"></div>

### organizzazione della memoria
- Indirizzata a **byte**
- Indirizzo memoria $\Rightarrow$ locazione memoria 
#### esempio
```cpp 
int var = 17
int* ptr = &var;
```
-  In questo caso, ptr conterrà l'indirizzo di var
![[Pasted image 20241030105526.png|400]]
### tipi di puntatori
- **Ogni tipo** ha il suo puntatore

>[!warning] Attenzione
>- Non si può effettuare la conversione tra tipi direttamente
>- Due puntatori a tipi diversi vengono considerati tipi diversi

### null pointer
- Usato per indicare valore non valido/puntatore non inizializzato
#### sintassi
```cpp
double* p0 = nullptr;
```

<div style="page-break-after: always;"></div>

### accedere al dato puntato
- Si può usare l'operatore **dereference**: ```*```
- ```*ptr``` mi restituisce il valore puntato da ```ptr```

>[!error] Cose da non fare
>- Dereferenziare nullptr
>- Accedere a puntatore non inizializzato
>- Restituire un puntatore da una funzione e provare ad accedervi fuori dallo scope 

### sizeof
- Funzione builtin 
	- restituisce **dimensione** del tipo
- Richiede come argomento:
	- nome tipo o nome variabile
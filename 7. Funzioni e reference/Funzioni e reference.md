## funzioni e Reference
### excursus - sdt::vector
- Versione moderna dell'array in C
- **Gestisce vettori** di ogni tipo di dato:
	- es. ```std::vector<int>```
- Conosce **quanti elementi** ha in memoria:
	- ```.size()```
- **Gestisce** automaticamente la **memoria**
- Si possono aggiungere elementi:
	- ```.push_back()```
- Costruttore con **inizializzazione**
	- ```std::vector<int> v(10)``` (10 elementi inizializzati a 0)
### funzioni
- Suddividono la computazione in **blocchi logici e funzionali**
	- input: argomenti (0+)
	- output: valore di ritorno (0 o 1)
- Passare un argomento = inizializzare un parametro con il valore dell'argomento
![[Pasted image 20241010124038.png|]]
<div style="page-break-after: always;"></div>

### passaggio per valore
- ==Argomento== = **variabile locale** della funzione
	- inizializzato a ogni chiamata
	- valore **copiato**
- Comodo, efficace, efficiente
- Si usa con:
	- dati **piccoli**
	- dati che **non** devono essere **modificati**
- **Problemi** di efficienza:
	- dati grandi (vettori, matrici, testi, immagini)
		- il computer deve effettuare una copia dei dati all'interno della funzione
		- se gli array sono piccoli il rallentamento è trascurabile

>[!info] Tipica domanda d'esame

### reference
- Permette **passaggio per riferimento**:
	- non viene copiato il valore, ma viene passato solo il riferimento a quel valore
	- si usa per dati grandi
	- si possono modificare gli input
```cpp
void print(vector<double>& v) {...}
```
- Permette anche per creare **alias** di variabili
	- più nomi che si riferiscono allo stesso valore
```cpp
double& var = v[f(x)][g(y)]; 

var = var / 2 + sqrt(var); // ora possiamo scrivere su var! 
```

>[!warning] Attenzione:
>- Il passaggio per reference fornisce accesso in lettura e scrittura
>- Richiede un LValue (non posso passare un literal)

- Passaggio per **riferimento const**
	- permette accesso in **sola lettura**
	- migliora la **leggibilità** del codice
		- la funzione non va a modificare l'input
```cpp
void print(const vector& v) {...}
```

>[!success] Good practice
>- Passare riferimento const nei progetti
>- Le ```const reference``` accetta anche rvalue (viene creata variabile temporanea)

### check degli argomenti
- Un argomento passato a una funzione è convertito nel tipo del parametro
	- è legale tutte le volte che ```T x = y``` lo è
	- effettua quindi anche il narrowing se necessario
- **Conversione esplicita**
	- attraverso ```static_cast<type>(x)```
	- rende chiara l'intenzione del programmatore
	- good practice


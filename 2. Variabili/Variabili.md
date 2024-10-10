## variabili
### definizioni
- ==Tipo==
	- definisce **tipologia** di contenuto
	- definisce **range** di valori
	- definisce insieme di **operazioni** per un oggetto
- ==Oggetto==:
	- regione di **memoria** (RAM)
	- specifica quale tipo di dato può essere inserito
- ==Variabile==:
	- oggetto con **nome**
- ==Valore==
	- **elemento** posto dentro alla variabile
	- bit di memoria interpretati **in funzione del tipo**
![[Pasted image 20241003124521.png|300]]

### tipo di una variabili
- Determina operazioni che possono essere effettuate e il loro significato
- Ha **formato literal**
```
39 // int 
3.5 // double 
'.' // char 
"Annemarie" // string 
true // boolean
```
<div style="page-break-after: always;"></div>

### assegnamento e inizializzazione
- Operatore: **assegnamento** (=)
- Può essere usato per due operazioni diverse
![[Pasted image 20241003124757.png|300]]
>[!warning] Undefined behaviour
>```cpp
>int a;
>a += 7;

### type safety
- Il tipo condiziona:
	- **natura dati** contenuti
	- **dimensione** in byte
- Alcune operazioni non sono **type-safe**
	- usare variabile non inizializzata
	- conversioni non sicure
#### conversioni sicure
- Preservano il valore (verso tipo con maggiore capacità)
```cpp
bool → char  
bool → int 
bool → double 
char → int 
char → double 
int → double
```
#### conversioni non sicure
- **Narrowing**
	- conversione verso tipo con meno capacità
	- accettata per motivi storici (da C)
```cpp
double → int 
double → char 
double → bool 
int → char 
int → bool 
char → bool
```

#### controllo su inizializzazione
- ==Universal and uniform initialization==: **{ }**
	- segnala errore con conversioni non sicure
```cpp
double d = 2.5; 
int i = 2; 
double d2 = d/i; // d2 == 1.25 
int i2 = d/i; // i2 == 1 
int i3 {d/i}; // errore: double -> int, narrowing
```

### nomi delle variabili
- Convenzione **Google C++ Style Guide**
	- nomi **significativi** ed evocativi
	- **NO** acronimi
	- accettabili nomi **brevi** se definiti per **convenzione** (variabile i per loop)
	- **non** troppo **lunghi**

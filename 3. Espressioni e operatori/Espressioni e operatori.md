## espressioni e operatori
### computazione
- Produrre **output** da **input**
- I blocchi computazionali devono essere **atomici**
	- si dividono blocchi di computazione complessi in tanti piccoli blocchi semplici
### astrazione
- **Nascondere** dettagli implementativi che non servono per utilizzare una risorsa
- **Interfaccia**
	- definizione di come utilizzare una risorsa o una funzione
### espressioni
- Definizione di ==espressione==
	- più piccolo elemento per esprimere la computazione
- Espressioni **semplici**
	- **literal**:
		- ```10, 'a', 3.14, "Test"```
	- **nomi** di variabili
- Espressioni **complesse**
	- combinazione di espressioni semplici
#### lvalue e rvalue
- ==Left Value==
	- sta a **sinistra** dell'operatore di assegnamento
- ==Right value==
	- sta a **destra** dell'operatore di assegnamento
- Variabili possono essere usate sia come LValue e RValue (nelle espressioni)
<div style="page-break-after: always;"></div>
#### espressioni costanti
- Valori che **NON** cambiano durante l'esecuzione del programma
- Accessibili solo in **lettura**
```cpp
constexpr doublie pi = 3.14;
pi = 7; //errore
```
- Sintassi
	- ```constexpr```
		- valore noto durante **compilazione**
	- ```const```
		- valore noto durante **esecuzione**
- Esempio:
```cpp
constexpr int max = 100;  
void use (int n)  
{  
    constexpr int c1 = max + 7; // OK: da costanti  
    constexpr int c2 = n + 7;   // errore: non conosciamo il  
							    // valore a tempo di compilazione
	const int c2 = n + 7;       // OK
}
```
### operatori e side effect
- Operatori sono caratterizzati da:
	- 1,2,3 **operandi**
	- **risultato**
- Alcuni operatori hanno ==side effect==
	- **modificano** **operandi** su cui operano
	- forniscono risultato
	- es:
		- ```++, --, +=, -=```
<div style="page-break-after: always;"></div>

### ordine valutazione delle espressioni
- Alcune operazioni (es. lettura operandi) vengono eseguite in un ordine che dipende dal compilatore
	- permette **ottimizzazione**

>[!error] Attenzione
> - È sbagliato usare la stessa variabile come lvalue e rvalue
> - potrebbero esserci side effect

```cpp
v[i] = ++i;         // Ordine di valutazione non definito:  
			        // i a sinistra è letto prima o dopo la valutazione di ++i?
			          
v[++i] = i;         // Ordine di valutazione non definito:  
					// Come sopra  
					
int x = ++i + ++i;  // Ordine di valutazione non definito:  
					// lettura e incremento potrebbero non essere consecutivi 
					 
std::cout << ++i << ' ' << i << '\n’; // Ordine di valutazione non definito
```

### operatori << e >>
- **Inserimento/Estrazione da uno stream**
- Sensibili al **tipo**
	- se può essere convertito lo converte
	- altrimenti errore/valore default in base al compilatore
### operatore +
- Sensibile al **tipo**
	- può sommare numeri
	- può unire stringhe
- N.B. l'operatore **-** invece non può sottrarre stringhe


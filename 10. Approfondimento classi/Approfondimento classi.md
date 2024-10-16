## approfondimento classi
### progettazione di una classe
- Si possono utilizzare questi strumenti:
	- funzioni membro
	- costruttori
	- protezione dati
	- overloading operatori
	- gestione copia dati
	- helper function
- Approccio scrittura classe:
	- **prima**: si scrive interfaccia
	- **dopo**: si scrive implementazione
### helper function
- **Funzioni esterne** alla classe che operano sulla classe
- Di solito utilizzano la classe come **reference** e ritornano **void**
![[Pasted image 20241016112546.png|600]]
>[!failure] Criticità
>Anche se sono a disposizione dell'utente, possono essere bypassate

### costruttore
- Funzione membro con **stesso nome della classe**
	- usato per inizializzare gli oggetti della classe
- Se esiste un costruttore con argomenti, è **errore** di compilazione non chiamarlo
- Sintassi ```{}```preferibile per inizializzazione
#### esempi
![[Pasted image 20241016113603.png|600]]
### controllo di accesso
- Funzioni membro garantiscono che **dati membro siano sempre coerenti**
- Mantiene oggetto in uno **stato valido**
### invarianti
- **Regole** per definire **valori validi** dello stato
### classe definita in più file
- ==Interfaccia== (header)
![[Pasted image 20241016114437.png|400]]
- ==Implementazione== (file sorgente)
	- includere **header**
	- **initializer list** nel costruttore
		- permette di inizializzare direttamente le variabili
		- + efficiente
	- **riferimento** alla classe nelle funzioni membro
![[Pasted image 20241016114508.png|400]]
#### definizioni inline
- Si possono effettuare definizioni **inline** (direttamente nell'interfaccia della classe)
	- dettagli implementativi si mescolano con l'interfaccia
- Le funzioni vengono automaticamente rese **inline**
	- codice replicato da compilatore ad ogni chiamata **senza fare jump**
- Good practice
	- funzioni inline solo per funzioni molto **brevi** (getter)
### rilevare errori
- Si definisce una sottoclasse ```class Invalid {}```
	- eccezione
#### gestione eccezioni (excursus)
- Meccanismo che **separa** rilevamento errore dalla sua gestione
	- **rilevamento**:
		- dalla funzione chiamata (inside)
		- si lancia con ```throw```
	- **gestione**:
		- nella funzione chiamante (outside)
		- se la gestione non viene gestita, il programma termina
		- si gestisce con ```try/catch```
![[Pasted image 20241016115852.png|700]]
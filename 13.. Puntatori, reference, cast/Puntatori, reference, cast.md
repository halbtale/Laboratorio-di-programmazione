## puntatori, reference, cast
### void*
- Puntatore **memoria raw**
	- rappresenta concetto puro di "indirizzo di memoria" senza informazioni sul tipo
- I puntatori standard hanno un type check
	- ```void*```permette di **saltare qualsiasi controllo**
#### utilizzo
![[Pasted image 20241030111349.png|600]]
### cast
- ```static_cast```permette **conversione esplicita** tra tipi (inclusi puntatori)
	- **Check in compilazione, nessun check a runtime**
- Esistono anche **cast** senza type check
	- utilizzati per interfacciarsi a HW o a codice non modificabile
![[Pasted image 20241030111900.png|700]]
<div style="page-break-after: always;"></div>

### puntatori vs reference
#### assegmaneto
- **Puntatori**:
	- cambio valore del puntatore, non dell'oggetto puntato
	- per cambiare valore dell'oggetto puntato devo usare **dereference** (```*```)
- **Reference**:
	- cambio valore dell'oggetto puntato (come se fosse un alias)
#### accedere a dato puntato
- **Puntatori**:
	- si utilizza ```*```  o ```[]```
- **Reference**:
	- nessun operatore per accedere al dato puntato
#### copia
- **Puntatori**:
	- **shallow copy**
	- copia il puntatore, non dell'oggetto puntato
- **Reference**:
	- **deep copy**
	- copia il contenuto dell'oggetto a cui si riferisce
#### null
- **Puntatori**:
	- esiste **null** pointer
- **Reference**
	- non esiste valore non valido
#### passare valori ad una funzione
- Copia del valore:
	- ```int incr_v(int x) { return x + 1; }```
	- ok per dati piccoli o per oggetti grandi con move constructor
- Puntatori:
	- ```void incr_p(int* p) { ++*p; }```
	- sono espliciti e possono avere null pointer
- Rerefence:
	- ```void incr_r(int& r) { ++r; }```
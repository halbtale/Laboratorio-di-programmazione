## copia di oggetti
### copia un array
- Default: effettua una **shallow copy**
	- copia membro a membro dei puntatori degli elementi
	- avviene in assenza del costruttore di copia (viene chiamato quello di default)
- ```vector v2 = v1```
	- gli elementi dei due array puntano alla stessa area di memoria
	- ```v2```condivide gli stessi elementi di ```v```

>[!bug] Problemi:
>- in uscita dallo scope, vengono chiamati i distruttori di ```v1```e ```v2```: avviene una doppia deallocazione della stessa area di memoria

### costruttore di copia
- **Costruttore** che accetta una **reference** a oggetto della **stessa classe**
![[Pasted image 20241113105846.png]]
- Si può utilizzare con:
	- ```vector v2 = v1```
	- ```vector v2 {v1}```
- Effettua una **deep copy**
	- comportamento predefinito di ```std::vector```, ```std::string```
### assegnamento di copia
- ```v2 = v1```
	- **NON** chiama costruttore di copia
	- operazione di **assegnamento**
	- può causare doppia deallocazione + perdita riferimento a v2 (memory leak)
- Overload assegnamento di copia:
	- ```vector& operator=(const vector& a);```
#### implementazione
- A differenza del costruttore di copia, il vettore potrebbe contenere già dati vecchi 
- Procedimento:
	- creo copia dati source
	- elimino dati vecchi
	- faccio puntare a dati nuovi
![[Pasted image 20241113110720.png|600]]
>[!attention] Attenzione
>- Non è buona norma eliminare i dati vecchi se non si è sicuri di poterli rimpiazzare
>- Edge case: ```v = v``` (**autoassegnamento**)

### terminologia di copia
- ==Shallow copy==
	- copia dei **puntatori** o **reference** senza copiare i dati
	- tipi hanno **pointer semantics**
- ==Deep copy==
	- copia dei **dati**
	- definiti da **costruttore** e **assegnamento** **di copia**
	- tipi hanno **value semantics**
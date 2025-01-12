## smart pointers
### che cosa sono
- **Puntatori intelligenti**
	- è un container che **detiene** un puntatore
- Definite in ```<memory>```
- Gestiscono **automaticamente** la **deallocazione** della memoria quando escono dallo scope
	- eliminano **memory leak**
	- eliminano **dangling pointer**
- Overhead limitato rispetto a un **garbage collector**
### std::unique_ptr
- **Dealloca** la memoria quando esce dallo scope
- Permette i **move**
- **NON** permette le copie
- Efficiente: **NO** overhead rispetto a un puntatore
- Tipo **generico**
#### inizializzazione
- **Costruttore**
	- accetta puntatore come argomento
	- design pattern: si inizializza il puntatore direttamente nell'argomento (con ```new```)
- Funzione ```reset()```
	- accetta puntatore come argomento
		- senza argomenti: semplice deallocazione
	- permette inizializzazione e re-inizializzazione
		- se unique_ptr deteneva un precedente puntatore, l'oggetto puntato viene distrutto 
#### uso e rilascio
- **Accesso**
	- È possibile usarlo con al stessa sintassi di un puntatore
- **Liberazione automatica della memoria**
	- quando lo smart pointer è distrutto, dealloca l'oggetto puntato
- **Rilascio del puntatore**
	- ```release()```rilascia il puntatore
	- lo smart pointer viene resettato a ```nullptr```

#### esempio
![[Pasted image 20241218113138.png|600]]
#### spostamento
- Posso restituire lo smart pointer in una funzione (viene chiamato _move constructor_)
#### restrizioni
- È disabilitato il costruttore/assegnamento di copia
- Non ci possono essere due smart pointer che puntano alla stessa area di memoria
	- per evitare doppio ```delete```
- Si può utilizzare ```make_unique```per evitare doppia inizializzazione con stesso puntatore
### std::shared_pointer
- Smart pointer
- Rimuove vincoli ```unique_pointer```
- Può essere copiato e condiviso
	- più shared pointer possono detenere lo stesso puntatore
- Implementazione interna
	- **reference counting**
		- conta quanti shared pointer utilizzano il puntatore
	- la memoria viene deallocata quando l'ultimmo shared pointer della memoria viene distrutto
- Efficienza: **overhead maggiore**
#### esempio
![[Pasted image 20241218113928.png|460]]
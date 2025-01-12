## stl container
### caratteristiche container stl
- **Sequenza** di elementi ```[begin(),end()]```
- Supporta **operazioni di copia**
	- assegnamento e costruttore di copia
- Tipo elementi ```value_type```
- Possiede iteratori chiamati ```iterator``` e ```const_iterator```
	- ```*```, ```++```, ```==```, ```!=```
	- ```--```, ```[]```, ```+```, ```-```, ```<```, ```<=```, ```>```, ```>=```  (in alcuni casi)
- Metodi:
	- ```insert(),erase(),front(),back(),push_back(),pop_back(),size(),...```
### lista container in stl
![[Pasted image 20241211114808.png|300]]
### std::list
- **Struttura dati** linked list
	- è un tipo di sequenza
- Ogni nodo ha:
	- **puntatore** a nodo **successivo**
	- **puntatore** a nodo **precedente**
- Supporta operazioni di base eccetto ```[]``` 
- Espandibile
- Definiti gli operatori di confronto per confrontare gli elementi
#### caso di insert() e erase()
- **Efficienti**
- **Non** invalidano iteratori
![[Pasted image 20241211111134.png|600]]
#### nodo
![[Pasted image 20241211111515.png|400]]
#### lista
- Contiene puntatore al primo e all'ultimo elemento
- Operazioni consentite:
	- simili a vector
	- insert, erease
	- iteratori per attraversare la lista
	- **NO** ```[]``` 
		- non è possibile avere un random-access
![[Pasted image 20241211112053.png|600]]
#### iteratore
- **Sottoclasse**
- Deve contenere puntatore a elemento lista
- Deve implementare gli operatori ```++, --, * , == , !=```
- Lista vuota: ```begin == end```
![[Pasted image 20241211112252.png|600]]
### std::vector
- Supporta **TUTTE** le operazioni
- Caratterizzato da **elementi contigui** in memoria
- Fornisce random access: ```[]```
- Fornisce range check con ```.at()```
- Espandibile 
#### caso di insert() e erase()
- **Inefficienti**
	- togliere o aggiungere elementi in mezzo muove molti elementi in memoria
- **Invalida** **iteratori** che stavano puntando al vector
### std::string
- Alle operazioni di base, si aggiungono operazioni di **manipolazione** del **testo**
- Concatenazione: ```+,+=```
- Gli operatori di confronto confrontano gli elementi
- Migliore di ```char[]```
	- no size, no iteratori, no range check, dimensione fissa, operatori confronto relativi solo al puntatore del primo elemento
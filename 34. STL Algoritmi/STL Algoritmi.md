## stl algoritmi
### introduzione
- STL offre grande numero di **algoritmi**
	- ricerca
	- ordinamento
	- conteggio
	- copia con/senza duplicati
	- fusione
- Algoritmi **compatibili** con tutti i **container** STL
![[Pasted image 20241212123815.png|600]]
![[Pasted image 20241212123831.png|600]]

<div style="page-break-after: always;"></div>

### predicati
- Funzione che ritorna ```true```o ```false```
- Viene passato ad una funzione usando il nome della funzione stessa
	- nome = **puntatore** alla **funzione** (senza parentesi tonde)
![[Pasted image 20241212125039.png|500]]
### function object
- Definito anche **function call operator** o **application operator**
- Oggetto che può essere usato come una funzione
- Permette di creare un predicato in modo dinamico
- Operatore ```()```definito **inline**
- Consigliato passarli per copia se piccoli, altrimenti per riferimento
![[Pasted image 20241212125715.png|500]]

### lamda expression
- **Funzione anonima**
- Permette di definire **function object** nella stessa riga dove viene utilizzata
- Può anche **catturare** variabili locali e specificare tipo di ritorno
#### esempio di utilizzo
![[Pasted image 20241212131714.png|500]]
#### clausole di cattura
![[Pasted image 20241212132150.png|600]]

### algoritmo find
- **Cerca** un elemento in una sequenza
	- definita tramite due iteratori (first, last)
- Ritorna un iteratore
	- punta all'elemento trovato
	- oppure ```end()```
- Generico
	- valido su tutti i container e su tutti i tipi di dato
#### implementazione in stl
![[Pasted image 20241212124141.png|500]]
#### esempio utilizzo
![[Pasted image 20241212124605.png|500]]

<div style="page-break-after: always;"></div>

### algoritmo find_if
- Cerca valore tale per cui un **criterio** sia soddisfatto
- Si utilizzano **predicati** (ed eventualmente **function object**)
#### implementazione in stl
![[Pasted image 20241212124900.png|500]]
#### esempio utilizzo
![[Pasted image 20241212125151.png|500]]
![[Pasted image 20241212125902.png|500]]

### algoritmo sort
- Algoritmo di **ordinamento** 
- Sfrutta due iteratori
	- posso ordinare anche solo una parte del container
- Due versioni:
	- ordinamento con ```operator <```
		- ascendente
	- ordinamento con predicato
#### esempio di utilizzo
![[Pasted image 20241212131342.png|600]]
### algoritmo copy
- Effettua una **copia** di un **container** su un altro container
	- anche tra container diversi
- Spetta all'utente verificare che sia disponibile sufficiente spazio a destinazione
#### implementazione in sTL
![[Pasted image 20241212132435.png|500]]
#### esempio di utilizzo
![[Pasted image 20241212132922.png|500]]
### algoritmo copy_if
- Copia con verifica di un **predicato** 
#### esempio di utilizzo
![[Pasted image 20241212133046.png|500]]

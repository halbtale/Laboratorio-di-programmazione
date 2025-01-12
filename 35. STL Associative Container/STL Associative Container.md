## stl associative container
### lista associative container
![[Pasted image 20241212133330.png|600]]
### pair
- **Coppia chiave-valore**
- ```first```e ```second``` come membri pubblici
	- rispettivamente chiave e valore
- ```make_pair()```per creare un oggetto pair

### map
- Struttura dati che gestisce **coppie chiave-valore**
- Contenitore **ordinato**
- Ottimizzate per la ricerche dalla chiave
	- internamente attraverso albero di ricerca bilanciato
#### indicizzazione
- La mappa può essere **indicizzata** attraverso le **chiavi**
- Se la chiave non è esistente, viene creata una nuova entry con quella chiave inizializzata a valore di default
![[Pasted image 20241212133912.png|500]]
### set
- **Insieme** di **chiavi**
- Contenitore **ordinato**
	- deve essere definita una funzione d'ordine per ogni tipo contenuto
		- funzione passata come argomento
	- non è disponibile ```[]```, ```push_back()```: è il set che decide dove inserire l'elemento
- Si accede al dato direttamente deferenziando con ```*```
#### esempio di utilizzo
![[Pasted image 20241212134930.png|500]]
![[Pasted image 20241212134836.png|500]]
![[Pasted image 20241212134849.png|500]]
![[Pasted image 20241212134902.png|500]]

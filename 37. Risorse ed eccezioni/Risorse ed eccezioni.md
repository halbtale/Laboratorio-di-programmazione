## risorse ed eccezioni
### lancio eccezione in presenza di risorse occupate
- Se viene lanciata un'**eccezione**, bisogna assicurarsi che le **risorse** occupate siano **liberate**:
	- **memoria**
	- **lock**
	- **file aperti**
	- **thread**
	- **window**
- Se viene lanciata un'eccezione e non viene gestita, si esce dallo scope
	- potrebbe essere lanciata anche da un ```.at()```di un vector utilizzato
	- potrebbe **corrompere** il flusso di acquisizione/rilascio risorse e causare memory leak
#### soluzione per liberare risorse
- Costruttore e distruttore risolvono in maniera **semplice** problema di liberare risorse
- Quando un flusso di esecuzione lascia uno scope:
	- invocati **distruttori** di tutti gli oggetti e sotto-oggetti
### resource acquisition is initialization (raii)
- Approccio che prevede:
	- ==acquisire== **tutte** le risorse nel **costruttore**
	- ==liberare== **tutte** le risorse nel **distruttore**
- Vale per qualsiasi tipo di risorsa acquisita
- Meccanismo si basa sull'**uscita dallo scope**
### garanzie
- ==Basic guarantee==
	- il blocco di codice **funziona** correttamente oppure lancia **eccezione**
	- **NON** crea memory leak
		- si può utilizzare ```try/catch```internamente per liberare eventuali risorse
		- si possono utilizzare smart pointers
	- fornita da STL per tutti i container/algoritmi
- ==Strong guarantee==
	- rispetta _basic guarantee_
	- in caso di fallimento, le variabili del codice rimangono **immutate** da come erano presenti prima della chiamata della funzione
- ==No-throw guarantee==
	- la funzione **NON** lancia eccezioni
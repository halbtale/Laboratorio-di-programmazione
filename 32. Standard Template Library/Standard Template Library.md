## standard template library
### operazione sui dati
- Gestire una sequenza di dati implica numerose operazioni:
	- **inserire** dati in contenitori
	- **organizzare** dati
	- **accesso** e stampa
	- **trovare** i dati
	- **modificare** contenitore (aggiungere/rimuovere elementi)
### stl
- Fornisce:
	- **contenitori**
	- **algoritmi generici**
- Tutti i container di stl hanno un **accesso unificato** ai dati
	- stessa **interfaccia**
	- NON dipende dal tipo di dato
	- NON dipende dal tipo di container
	- NON serve quasi mai scrivere codice aggiuntivo per effettuare operazioni sui dati
- Accesso **safe**
	- possibilità di accedere in modo sicuro ai dati 
- **Facilità** di visita
- Salvataggio **compatto**
- Operazioni di aggiunta/rimozione/ricerca **efficienti**
### sequenze 
- Concetto fondamentale STL
- Struttura dati che ha **inizio** e **fine**
	- proprietà generica comune a tutti i container
- Gestita tramite **iteratori**
### iteratore
- **Iteratore** punta ad un elemento di una sequenza
- Sequenza $[$begin, end$]$
	- iteratore **begin**
		- primo elemento sequenza
	- iteratore **end**
		- primo elemento dopo l'ultimo (NON all'ultimo)
- Requisiti iteratori:
	- deve essere possibile confrontarli (operatori ```==```e ```!=```)
	- è possibile riferirsi agli oggetti puntati usando operatore ```*```
	- è possibile ottenere elemento successivo usando ```++```
![[Pasted image 20241211105204.png|600]]
#### iteratori e puntatori
- Un puntatore è un esempio di puntatore
	- ma molti iteratori NON sono puntatori
- Gli iteratori possono definire **proprietà aggiuntive**:
	- range-check
	- non hanno legame con il tipo
	- elastico e flessibile
### algoritmi e collezioni di dati
- Importante separare nel codice **collezione di dati** e **algoritmi**
- Interazione gestita attraverso ==interfaccia standard==
	- data da **iteratori**
	- garantita da STL
- **Disaccoppiamento algoritmi**
	- non serve conoscere dettagli struttura dati
	- è sufficiente usare iteratori della struttura dati
- **Disaccoppiamento struttura dati**
	- non conosce l'algoritmo che opera su essa
	- è sufficiente che essa fornisca i vari iteratori
#### esempio
![[Pasted image 20241211110623.png|600]]

### keyword auto
- **Auto** riconosce automaticamente il tipo
![[Pasted image 20241211113006.png|600]]
![[Pasted image 20241211113247.png|600]]

>[!error] Attenzione
>- Si può usare solo per gli iteratori, negli altri casi è sconsigliato

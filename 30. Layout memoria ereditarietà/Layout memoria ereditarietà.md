## layout memoria ereditarietà
### layout dati membro
- I dati membro di una classe derivata sono messi dopo quelli aggiuntivi
![[Pasted image 20241204112607.png|400]]
### layout funzioni membro
- La chiamata alle **funzioni virtuali** viene gestita tramite le ==virtual table== (**vtbl**)
- **vtbl** sono gestite tramite ==virtual pointer== (**vptr**)
- Ogni funzione esiste in **una sola** parte (a differenza di cosa avviene nei template)
	- la virtual table permette la differenziazione
![[Pasted image 20241204112850.png|500]]

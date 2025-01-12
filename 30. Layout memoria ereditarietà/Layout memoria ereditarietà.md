## layout memoria ereditarietà
### layout dati membro
- I dati membro di una classe derivata sono messi dopo quelli aggiuntivi
![[Pasted image 20241204112607.png|400]]
### layout funzioni membro
- ==Virtual Table== (**vtbl**)
	- gestisce **chiamate** alla **funzione virtuale**
- ==Virtual Pointer== (**vptr**)
	- punta alla **vtbl**
- Le funzioni ereditate nelle classi derivate **NON** occupano spazio aggiuntivo in memoria:
	- ogni funzione viene definita **una sola volta** (nella classe base) e la **vtbl** delle classi derivate presenta solo il puntatore ad essa
![[Pasted image 20241204112850.png|500]]

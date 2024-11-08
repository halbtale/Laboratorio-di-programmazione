## allocazione dinamica memoria
### imlementare std::vector
- Ha un comportamento **intelligente**
	- conosce la propria dimensione
	- modifica dinamicamente la dimensione durante l'inserimento di un nuovo elemento
	- accesso con verifica
		- controlla se index a cui si accede è corretto
- È un wrapper di operazioni a basso livello
	- gestisce memoria e indirizzi di memoria
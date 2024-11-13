## liberare la memoria
### garbage collector
- 404, not found (in C++)
- Produzione di **garbage** è **errore tecnico grave**
- Motivazioni dell'assenza del garbage collector:
	- **efficienza**
		- garbage collector impiega **molte risorse**
	- **controllo**
		- posso decidere io quando la memoria viene rilasciata
- È good practice avere tutta la memoria deallocata al termine del programma
### come liberare la memoria
- Presenza di istruzioni dedicate
	- ```delete```
		- se memoria allocata con ```new```
	- ```delete[]```
		- se memoria allocata con ```new[]```
![[Pasted image 20241106112608.png|600]]
### passaggio di memoria tra funzioni
- Possiamo creare un oggetto in uno scope e passarlo in un altro scope
	- viene **copiato** solo il **puntatore**
- Se restituisco puntatore, effettuare **deallocazione nel chiamante**
### errore: doppia cancellazione
- Dealloco **due volte** la stessa area di memoria
	- in quella area di memoria potrebbero esserci altri oggetti
- Causa **errore runtime**
### errore: dangling pointer
- Dopo ```delete```, il **puntatore** mantiene lo stesso indirizzo di memoria
	- punta a qualcosa di **non valido**
	- è un errore utilizzare il puntatore

>[!success] Good practice
>Dopo ```delete```, **settare** p a ```nullptr```

### distruttore
- **Funzione membro** classi
- Viene chiamato **implicitamente** ogni volta che un oggetto viene distrutto
- Sintassi: ```~NomeClasse()```
- Si può utilizzare per **deallocare** memoria dinamica usata dalla classe
#### distruttore creato dal compilatore
- **Compiler-generated destructor**
	- **NON** dealloca la memoria
	- chiama distruttori di eventuali oggetti membro

<div style="page-break-after: always;"></div>

### esempio: implementazione std::vector
![[Pasted image 20241106114352.png|400]]
### pattern acquisizione risorse
- Un oggetto acquisisce risorse nel costruttore
- Durante la sua vita l'oggetto può:
	- acquisire o liberare alcune risorse
- Fine vita: l'oggetto deve rilasciare tutte le risorse
### pro e contro allocazione dinamica memoria
#### vantaggi
- Accedere a **grandi quantità** di **memoria**
- Ottenere blocchi di memoria di **dimensione non nota** a tempo di compilazione
- **Controllo** su allocazione/deallocazione
#### svantaggi
- Gestione **esplicita** deallocazione
- Gestione memoria tramite **puntatori**
- Maggiore **carico computazionale**:
	- allocazione/deallocazione avviene tramite chiamate al **sistema operativo**
- Utilizzarla solo se strettamente **necessario allocare dinamicamente memoria**

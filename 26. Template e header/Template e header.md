## template e header
### Effetti collaterali
- Template combinano **flessibilità** ed **efficienza**
- Svantaggi
	- poca separazione tra dichiarazione e definizione 
	- errori di compilazione poco comprensibili
	- compilatore controlla sia template che il suo argomento
- **Il compilatore richiede che i template siano completamente definiti prima di essere usati**
	- dovrei spostare la implementazione dei template nei file header (brutto)
### header con i blocchi
- Si divide l'header in **due blocchi**
	- ```.h```
		- contiene definizioni di classi e dichiarazioni di funzioni
	- ```.hpp```
		- definizioni di funzione
- Blocchi combinati con un _include atipico_
#### implementazione
![[Pasted image 20241127112406.png|600]]
![[Pasted image 20241127112510.png|600]]
### compilazione
- Devo compilare anche i file ```.h```
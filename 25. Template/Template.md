## template
### concetto di template
- Meccanismo che permette al programma di usare un **tipo** come **parametro** di una classe/funzione
- Il compilatore **genera il codice necessario** per ogni tipo per cui il template è specializzato
### sintassi
![[Pasted image 20241127105130.png|500]]

### class template
- Un **class template** è detto anche **type generator**, **parametrized type** o **parametrized class
- ==Specializzazione== o **template instantiation**
	- processo di generazione di una classe su un tipo specifico
	- avviene al tempo di **compilazione**
	- es: ```std::vector<char>```è specializzazione di ```std::vector<>```
#### esempio
![[Pasted image 20241127105411.png|600]]
<div style="page-break-after: always;"></div>

#### funzioni membro di una class template
- Seguono la stessa specializzazione dell'oggetto istanziato
- Nell'implementazione è richiesto di ripetere la keyword ```template```per ogni funzione membro
![[Pasted image 20241127105931.png|500]]
### funzione template
- Una **function template** è detta anche **parametrized function** o **algorithm**
#### esempio definizione funzione template
![[Pasted image 20241127110223.png|500]]
#### chiamata funzione
![[Pasted image 20241127110507.png|500]]
#### deduzione argomenti template
- Il compilatore è in grado di **dedurre** gli **argomenti template** dagli argomenti di una funzione
- Si può omettere la specifica del tipo nella chiamata alla funzione
![[Pasted image 20241127111556.png|500]]

<div style="page-break-after: always;"></div>

### interi come parametri template
- Oltre a un tipo, posso passare nel template anche un **intero**
	- il valore è noto al tempo di **compilazione**
#### array
- Presente anche nella **standard library**
	- controparte dei vector ma di dimensione fissa
- Non necessita del free store e può essere più efficiente
- Esempi di utilizzo:
	- triplette (x,y,z), (R,G,B), ecc
	- programmazione embedded
![[Pasted image 20241127110720.png|600]]

## tipi definiti dall'utente
### tipi
#### tipi built-in
- Tipi **built-in**
	- int
	- char
	- double
	- ...
#### udt (user defined types)
- **Libreria STD**:
	- fornisce tipi
		- std::string, std::list, std::ostream
	- vengono definiti UDT
	- costruiti con le stesse tecniche delle classi definite dal programmatore
		- no "superpoteri"
	- sono comunque parte del linguaggio
- **Definiti dal programmatore**:
	- **classi** definite dal programmatore
	- **struct** definite dal programmatore
### strumenti per definire i tipi
- In c++: ==classe== e ==enumerazione==
### classi
- Programmazione ad oggetti porta alla creazione di nuovi tipi
- Rappresenta un concetto in un programma
- Specifica:
	- come sono **rappresentati** gli oggetti
	- come questi oggetti possono essere **creati**/**usati**/**distrutti**
#### elementi chiave
- ==Rappresentazione==
	- tipo deve sapere come rappresentare dati necessari in un oggetto
	- concetto di **stato**
- ==Operazioni==
	- operazioni che possono essere applicate su un oggetto
#### caratteristiche principali
- È composta da:
	- tipi built-in
	- altri UDT 
		- es. un'altra classe
	- funzioni
- ==Membri==
	- entità utilizzate per definire la classe
	- si dividono in:
		- ==data member==
		- ==function member==
	- per accedere un membro si utilizza: ```oggetto.membro```

#### sintassi
![[Pasted image 20241016105703.png|700]]
>[!attention] Osservazione
>La classe è chiusa da un ```;```
#### interfaccia e implementazione
- Interfaccia **public**
	- accessibile in lettura e scrittura
- Implementazione **private**
	- default: **membri** classe sono privati
	- non direttamente accessibile
		- lettura/scrittura solo tramite interfaccia
	- permette controllo dello stato e incapsulamento
![[Pasted image 20241016110349.png|700]]
#### progettazione di una classe
- Si possono utilizzare questi strumenti:
	- funzioni membro
	- costruttori
	- protezione dati
	- overloading operatori
	- gestione copia dati
	- helper function
### struct
- Varianti delle classi
- Unica differenza tecnica: i membri di default sono privati
- Convenzione:
	- usata per tipi con solo dati membri (senza funzioni)
![[Pasted image 20241016110737.png|600]]

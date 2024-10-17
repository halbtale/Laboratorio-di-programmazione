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
	- fornisce **tipi**
		- std::string, std::list, std::ostream
	- vengono definiti UDT
	- costruiti con le stesse tecniche delle classi definite dal programmatore
		- no "superpoteri"
	- sono comunque parte del linguaggio
- **Definiti dal programmatore**:
	- **classi**/**struct**
	- **enumerazioni**
### classi
- **Programmazione orientata agli oggetti porta** alla creazione di nuovi tipi
- Rappresenta un concetto in un programma
- Specifica:
	- come sono **rappresentati** i relativi oggetti
	- come questi oggetti possono essere **creati**/**usati**/**distrutti**
#### elementi chiave
- ==Rappresentazione==
	- come rappresentare dati necessari in un oggetto
	- concetto di **stato**
- ==Operazioni==
	- quali operazioni possono essere applicate su un oggetto
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
![[Pasted image 20241016110349.png|600]]

### struct
- Varianti delle classi
- Unica differenza tecnica: i membri di default sono privati
- Convenzione:
	- usata per tipi con solo dati membri (senza funzioni)
![[Pasted image 20241016110737.png|600]]
### enumerazioni
- **Tipo** definito dall'**utente**
- Specifica **set di valori**
	- rappresentati con costanti simboliche
#### enum con classi
- Sintassi:
	- ```enum class EnumName {...};```
		- ```class``` crea uno scope
	- corpo = lista enumeratori
		- di default parte da 0
		- successivo = precedente + 1
		- è possibile scegliere valori specifici
```cpp
enum class Month { 
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec 
};
```

![[Pasted image 20241017090535.png|500]]
>[!hint] Suggerimento
>- Si possono creare helper functions per convertire int -> enum
>- ```int(EnumName::enumElement)``` converte enum -> int
#### enum senza classi
- È possibile utilizzare enumerazione senza uno scope:
- Sintassi:
	- ```enum EnumName {...}```
![[Pasted image 20241017090424.png|600]]
>[!bug] Bad practice
>È pericoloso e può causare errori/conflitti


## overloading e interfacce
### overloading degli operatori
- È possibile implementarlo per quasi tutti gli operatori 
	- **solo** di operatori esistenti
- Può essere effettuato usando una funzione standard o attraverso funzioni di membro
#### sintassi
- Bisogna creare una funzione con un nome specifico:
```cpp
operator+, operator++, operator*, operator[], ...
```
- Può essere una funzione esterna o funzione membro:
![[Pasted image 20241023110113.png|300]]
#### requisiti
- Deve essere presente almeno **un argomento UDT**
	- non è possibile riscrivere operator su type built-in già esistenti
- Importante definire operatori con significati **intuitivi**
#### overloading operator++
- Due implementazioni:
	- **pre-incremento**
	- **post-incremento**
![[Pasted image 20241023110612.png|600]]
#### overloading operator<<
![[Pasted image 20241023111006.png|700]]
#### overloading operator==
![[Pasted image 20241023113654.png|400]]
### interfaccia
- Good practices:
	- interfaccia deve essere **completa**
		- deve avere tutte le funzionalità che mi servono
	- interfaccia deve essere **minimale**
	- devono essere forniti i **costruttori**
	- la **copia** deve essere supportata o proibita
	- usare tipi per **controllare gli argomenti**
	- identificare **funzioni membro costanti**
	- liberare tutte le risorse nel **distruttore**
#### tipi degli argomenti
- Invece di usare tipi built-in, è consigliato utilizzare **tipi** per gli **argomenti** del costruttore
![[Pasted image 20241023111820.png|400]]
#### copia di oggetti
- Copiare un oggetto = copiare tutti i suoi membri
#### costruttore di default
- In alcuni casi (es. stringhe, vector) ha senso prevedere un **costruttore di default**
- Nei **tipi built-in** il costruttore di default li inizializza a 0
- Si possono definire nel **costruttore** o nella **definizione dei membri**
![[Pasted image 20241023112604.png|550]]
#### funzioni membro const
- Esempio di possibile errore:
	- se ho una reference costante e chiamo una funzione al suo interno, devo segnalare al compilatore che essa non modifica l'oggetto, altrimenti dà errore
![[Pasted image 20241023113052.png|600]]
- Soluzione: dichiarare funzione membro ```const```
![[Pasted image 20241023113205.png|230]]
#### funzioni membro vs helper function
- Rendere una funzione membro **se e solo se** necessita accesso alla classe
- Spesso le helper function sono inserite in un _namespace_ insieme alla classe
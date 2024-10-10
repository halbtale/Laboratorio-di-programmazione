## scope e namespace
### definizione di scope
- **Regione del testo** di un programma
- Ciascuna variabile è dichiarata in uno **scope**
	- esiste dalla dichiarazione fino alla fine dello scope
- Obiettivo: rendere i nomi **locali**
	- permette di evitare **clash** (problemi di interferenza)

>[!info] Per l'esame
>- Spiegare lo scope è una tipica domanda aperta

### tipi di scope
- **Globale**
	- al di fuori di ogni altro scope
	- da usare con **cautela**
- **Scope di classe**
	- testo all'interno di una classe
- **Scope locale**
	- all'interno di un blocco { }
	- nella lista degli argomenti di una funzione
- **Scope di statement**
	- es. in un for, if, switch, etc
- **Namespace**
	- scope che ha un nome
#### scope globale
- **Funzioni** definite nello scope globale (OK)
- Problematico per le variabili (MALE)
	- accessibile in tutto il programma
	- difficilmente controllabile
	- no protezione/incapsulamento
	- codice meno espressivo
### scope annidati
- Definire uno scope all'interno di un altro scope
- Utilizzare indentazione per leggibilità
- Es. due for-loop annidati
#### bad practices:
- **Classi locali**
	- classi in funzioni
	- funziona ma da evitare
- **Funzioni in funzioni**
	- errore!
### namespace
- **Costrutti** dedicati allo **scoping**
- Permettono di definire uno spazio di nomi senza definire un tipo
- Utilizzato in particolare per le librerie
- Si può accedere ad un elemento del namespace attraverso:
	- ```namespace::membro```
#### esempio
![[Pasted image 20241009111253.png|600]]
- Accedere ad elementi dei namespace:
	- ```Graph_lib::Text```
	- ```TextLib::Text```
#### direttiva using
- ```using declaration```
	- associa namespace ad un nome
	- ```using std::cout;```
- ```using directive```
	- da usare per namespace molto noti
	- ```using namespace std;```
	- da evitare negli header!
#### convenzione google c++ naming
- Namespace devono essere ```snake_case```

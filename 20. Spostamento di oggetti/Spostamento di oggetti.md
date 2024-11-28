## spostamento di oggetti
### muovere i dati
- Se faccio un return di un vector (per valore), sto copiando una grande quantità di dati
- Vorrei invece effettuare un'operazione di **move**
### move semantics
- Utilizzo di ```&&``` (==rvalue reference==)
- **Costruttore di spostamento**:
	- ```vector(vector&& a);```
- **Assegnazione di spostamento**:
	- ```vector& operator=(vector&& a);```
- Viene chiamato in modo **automatico** dal compilatore

>[!info] Osservazione
>- Argomenti non sono costanti
>- Se viene chiamato il move constructor, non viene chiamato il destroy constructor
>- Devo quindi effettuare la deallocazione della memoria dell'vector vecchio dopo aver rubato il puntatore
>- Di solito, se è necessario il distruttore, è necessario anche quello di move
#### implementazione
![[Pasted image 20241113112829.png|700]]
### copy elision
- Il costruttore fa ottimizzazioni particolari e non chiama ```move constructor```

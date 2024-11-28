## inizializzazione di oggetti
### initializer list
- La std contiene la classe ```initializer_list<T>```
- Posso aggiungere un costruttore che accetta una ```initializer_list<T>```
![[Pasted image 20241113104354.png|600]]
- Permette una inizializzazione di questo tipo:
```cpp
vector v1 = { 1.2, 7.89, 12.34 };
```

>[!info] Osservazione
>- è passato per copia

### conversioni implicite e esplicite
- Costruttore/funzione con singolo argomento: effettua **conversione implicita**
	- potrebbe essere **indesiderata**
![[Pasted image 20241113115345.png|500]]
#### keyword explicit 
- Impedisce **conversioni automatiche** di tipo

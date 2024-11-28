## accesso ai membri di una classe
### operatore [ ] per accedere ai membri di una classe
- Posso effettuare overload dell'operatore ```operator[]``` restituendo sempre una reference
	- devo permettere accesso ```const```e ```non-const```

![[Pasted image 20241113113935.png|300]]

>[!warning] Attenzione
> - L'operatore ```[]``` ritorna reference a membri privati (quindi anche in scrittura)
## librerie e linking
### file header
- Contiene un **insieme di dichiarazioni** di entità
- Tali entità possono essere usate solo da chi include il file header
- Header visto dalla **prospettiva dell'utente**
#### meccanismi di inclusione
- ==Header di sistema==
	- Inclusione con ```< >```
	- es. ```#include <iostream>```
	- ricerca header nel path di sistema
- ==Header definiti dall'utente==
	- Inclusione con ```" "```
	- es. ```#include "my_library.h"```
	- ricerca header nel path locale + path di sistema
### progretti software in file multipli
- Necessità: raggruppare dichiarazioni e definizioni
	- visto dalla **prospettiva del progettista**
- Si avranno + file sorgenti e + file di header
![[Pasted image 20241009113930.png|600]]
### header multipli
- Un file sorgente può avere più header
- Gli header a loro volta possono includere altri header
- Problema: inclusioni cicliche
#### include guards
- Ogni header deve essere protetto da **include guards**
```cpp
#ifndef MYFUNC_H 
#define MYFUNC_H 

// ... 

#endif
```

### compilare un progetto composto da più file
![[Pasted image 20241009114515.png]]
<div style="page-break-after: always;"></div>

### librerie esterne
#### librerie statiche
- Stesso meccanismo dei progetti forniti da più file
- Spesso non vengono forniti file sorgenti, ma solo file headers e file precompilati
- Problema: ogni eseguibile va a includere la libreria
	- se ci sono più programmi che la usano si occupa più spazio per nulla
- Vantaggi:
	- sono **self-contained**
		- il sistema non deve avere la libreria già installata
	- adatta per distribuzione software monolitico
	- permette di utilizzare una versione specifica della libreria
![[Pasted image 20241010093938.png|500]]
- **Creare librerie statiche:**
1. compila la libreria senza linkare (```-c```)
```shell
g++ -c my_func.cpp -o my_func.o
```
2. genera file libreria statica
	- nome preceduto da ```lib```
	- estensione: ```.a``` 
```
ar rvs lib/libmy_func.a my_func.o
```
<div style="page-break-after: always;"></div>

3. compila il main e includi la libreria
	- ```-L```indica la path dove cercare le librerie 
	- ```-l``` seguito dal nome della libreria (senza ```lib```) indica la libreria da includere
```
g++ main.cpp -L./lib -lmy_func -o main
```

#### librerie dinamiche
- Una stessa copia della libreria viene utilizzata da tutti i programmi
- Il processo di linking avviene da parte del sistema operativo
- Chiamate ```.so```(Linux) o ```.dll``` (Windows)
- Vantaggi:
	- **riducono spazio** su disco
	- possono essere **ricompilate** senza toccare eseguibili
![[Pasted image 20241010093958.png|600]]
- **Creare librerie dinamiche:**
1. compila la libreria senza linkare (```-c```)
```shell
g++ -c my_func.cpp -o my_func.o
```
<div style="page-break-after: always;"></div>

2. genera file libreria dinamica
	-  nome preceduto da ```lib```
	- flag ```-shared```
	- estensione (linux): ```.so```
```
g++ -shared -o lib/libmy_func.so my_func.o
```
3. compila il main e includi la libreria
	- ```-L```indica la path dove cercare le librerie 
	- ```-l``` seguito dal nome della libreria (senza ```lib```) indica la libreria da includere
```
g++ main.cpp -L./lib -lmy_func -o main
```


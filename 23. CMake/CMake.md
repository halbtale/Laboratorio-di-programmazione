## cmake
### descrivere un progetto software
- Descrizione tramite **comando** di compilazione:
```shell
g++ my_source.cpp my_functions.cpp -o my_exec -lmy_lib
```
- ==Sistema di building==
	- gestore **processo di compilazione**
### cmake
- ==Meta-sistema== di building
	- cross-platform
	- sfrutta sistema di building nativo
- Definisce:
	- target compilazione
	- elenco sorgenti
	- eseguibile
	- librerie
- Gestito da ```CMakeLists.txt```
![[Pasted image 20241120111642.png|600]]
### processo utilizzo lato utente
- Si può usare **interfaccia grafica**
- Due fasi: **configure** e **generate**

<div style="page-break-after: always;"></div>

### processo utilizzo lato sviluppatore
- Bisogna scrivere ```CMakeLists.txt```
	- a mano o attraverso un _ide_
#### sintassi
- Impostare **versione** minima cmake:
![[Pasted image 20241120112107.png|500]]
- Impostare **versione** C++
```cmake
set(CMAKE_CXX_STANDARD 11)
```
- Dare **nome** al progetto
![[Pasted image 20241120112126.png|500]]
- Dichiarare librerie di terze parti utilizzate:
![[Pasted image 20241120112207.png|500]]
- Creare **target** per **compilazione**
![[Pasted image 20241120112302.png|250]]
- Creare **target** per **libreria**
![[Pasted image 20241120112327.png|250]]
#### comando
- ```cmake ..```
- ```make```

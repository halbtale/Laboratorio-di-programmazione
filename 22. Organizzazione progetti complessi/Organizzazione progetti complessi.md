## organizzazione progetti complessi
### progetto su più file
- Ogni progetto deve essere organizzato su **più file**
- Migliore **organizzazione** e **leggibilità**
- Maggiore **semplicità** **organizzativa** se più sviluppatori lavorano sullo stesso progetto
### separazione interfaccia e implementazione
- Permette di rendere il codice più organizzato
- I file oggetto ```.o```verranno poi uniti insieme dal linker
#### tipi di file
- File **header** ```.h```o ```.hpp```
	- definizioni di classi
	- dichiarazioni di funzioni
	- inclusi (```#include```)
	- **NON** compilati direttamente
- File **sorgente** ```.cpp```
	- definizione di funzioni e classi
	- main
	- **NON** inclusi
	- compilati dal compilatore
### header multipli
- Ogni file può includere più header
- Problema delle **inclusioni cicliche**
#### include guards
- Ogni header **deve** essere protetto dalle **include guards**
	- ```#ifndef -> #define -> #endif```
### errori
- **Errore di compilazione**
	- segnalato da ```g++```
- **Errore di linking**
	- segnalato da ```ld```
	- ```ld returned 1 exit status```
### coding style
#### header files
- Includere solo ciò che è necessario nell'ordine:
	- sistema operativo
	- standard library
	- altre librerie
	- file di progetto
- Include guards: ```PROJECT_PATH_FILE_H_```
- Limitare uso _inline function_
#### scoping
- Usare **namespace** 
	- mettere helper functions all'interno del namespace
- **Non** usare ```using```
- **Limitare** variabili/funzioni **globali**
- **Non** lasciare variabili non **inizializzate**
#### classes
- Utilizzare **costruttore** per inizializzare variabili
- **Evitare** conversioni **implicite** e usare ```explicit``` se necessario
- Se una classe usa allocazione dinamica memoria:
	- costruttore **copia**, costruttore **spostamento** e **distruttore**
- Controllo **accessi** (membri privati)
#### functions
- Preferire **return** rispetto a output parameters
- Funzioni devono essere **brevi** (max 10 circa linee di codice)
- Sfruttare overloading e valori di default
#### commenti
- Utili in particolare per progetti di gruppo
- Non over-commentare
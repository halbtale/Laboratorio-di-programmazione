## dichiarazioni e istruzioni
### statements (istruzioni)
- Parte del codice che specifica una azione
- Non sono istruzioni **direttive** per preprocessore (#include)
- Termina sempre con **;**
### dichiarazioni e definizioni
#### dichiarazioni
- ==Dichiarazione==: istruzione che introduce **nome** in uno **scope**
	- specifica **nome**
	- specifica **tipo**
	- specifica **valore iniziale** (facoltativo)
- Ogni nome deve essere prima **dichiarato**
	- variabili, funzioni, classi, ecc
- **NON** ha effetto sulla **memoria**
- È un'**interfaccia**
#### definizioni
- ==Definizione==: dichiarazione che **specifica** **completamente** l'entità dichiarata
- Ha significato diverso a seconda dell'entità definita
	- **variabile**: riserva la memoria
	- **funzione**: definisco il corpo
	- **classe**: fornisco tutti i membri/funzioni membro della classe
- Alcune dichiarazioni **NON** sono definizioni
- Posso fare più dichiarazioni (se uguali)
- Le costanti, quando inizializzate, **devono** essere definite
<div style="page-break-after: always;"></div>
#### dichiarazione prima della definizione
- Permette di gestire file sorgenti multipli
	- posso mettere in un file l'interfaccia e in un file l'implementazione
- Dichiarazioni raccolte in un **header file** permettono di condividere le funzioni
- Esempio:
```cpp
int func();         // dichiarazione della funzione func  

int main() {  
    int x = func(); // N.B. Utilizzo prima della definizione  
}  

int func() {        // definizione della funzione func  
    return 2;  
}
```
#### inizializzazione di vettori
```cpp
std::vector vi(10); // 10 elementi vuoti
std::vector vi2 {1, 2, 3, 4}; // 4 elementi passati come literal
```
#### variabili non inizializzate
- Se le usi: **undefined behaviour**

>[!warning] Attenzione
>- ```int a;``` dichiara e **definisce** la variabile
>- l'unico modo per dichiarare senza definire una variabile è con la keyword ```extern```


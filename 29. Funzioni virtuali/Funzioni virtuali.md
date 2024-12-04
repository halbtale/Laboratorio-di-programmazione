## funzioni virtuali
### gerarchie di classi
- ==Ereditarietà/derivazione==
	- classe derivata eredita funzioni e dati da classe astratta
- ==Funzioni virtuali==
	- possibilità di definire la stessa funzione nella classe base e in quella derivata
- ==Incapsulamento==
	- membri **private** e **protected** nascondono dettagli implementativi
### funzioni virtuali
- Vengono dichiarate con la keyword ```virtual```
- La caratteristica virtual viene ereditata da tutte le cassi derivate
```cpp
virtual void draw_lines() const;
```
### overriding
- **Ridefinire** funzione virtuale di una classe astratta in una classe derivata
	- la classe derivata sfrutta l'interfaccia della classe astratta
- La funzione di override deve avere la stessa **firma**
	- nome, tipi, constness
- Alla base del **polimorfismo run-time (dinamico)**:
	- viene deciso a tempo di esecuzione quale funzione chiamare
#### overrriding con puntatori
- Un **puntatore** alla classe **base** può puntare alla classe **derivata** (sfrutta _is a_)
- Un vettore di puntatori alla classe base può contenere puntatori a classi derivate
```cpp
vector<Base*>
```

#### casi particolari
- Se re-implemento una funzione non virtuale della classe astratta:
	- nelle classi derivate viene chiamata la funzione definita in quella classe
	- nella classe base viene chiamata la funzione nella classe base, non quella nella derivata, perché non presenta Virtual
- Idem se la firma è diversa
#### override esplicito
- Si aggiunge la keyword ```override```
	- si specifica che sta facendo l'override di una funzione virtuale
	- se sbagli a fare l'override il compilatore ti dà errore
```cpp
void f() const override { cout << "Derived::f "; }
```

>[!warning] Attenzione
>- È importante che il distruttore sia ```virtual```

### funzioni virtuali pure
- Funzioni che **NON** possono essere implementate nella classe base
- Rendono la classe base una classe **virtuale pura**
- **Impedisce** di **istanziare** classe **astratta** e **obbliga** tutte classi **derivate** a **implementare** una determinata **funzione**

>[!note] Il termine giusto in CPP è classe base, non classe astratta (astratta solo se è pura) quindi risistema appunti
#### sintassi
```cpp
virtual void move(int dx, int dy) = 0;
```

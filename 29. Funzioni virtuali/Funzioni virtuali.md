## funzioni virtuali
### definizione di funzioni virtuali
- Vengono dichiarate con la keyword ```virtual``` nella **classe base**
```cpp
virtual void draw_lines() const;
```

>[!info] Osservazione
>- La caratteristica virtual viene ereditata da tutte le cassi derivate

### overriding
- **Ridefinire** **funzione** **virtuale** di una classe base in una classe derivata
	- la classe derivata sfrutta l'interfaccia della classe base
- La funzione di override deve avere la **stessa** **firma**
	- nome, tipi, constness
- Alla base del **polimorfismo run-time (dinamico)**:
	- viene deciso a tempo di esecuzione quale funzione chiamare
#### overrriding e puntatori
- Un **puntatore** alla classe **base** può puntare alla classe **derivata** (sfrutta _is a_)
- Un vettore di puntatori alla classe base può contenere puntatori a classi derivate
```cpp
vector<Base*>
```
#### casi particolari
- Se re-implemento una funzione **non virtuale** della classe base:
	- nelle classi derivate viene chiamata la funzione definita in quella classe
	- nella classe base viene chiamata la funzione nella classe base, non quella nella derivata, perché non presenta virtual
- Idem se la firma è diversa

![[Pasted image 20241205083630.png|600]]
![[Pasted image 20241205083727.png|600]]
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
#### sintassi
```cpp
virtual void move(int dx, int dy) = 0;
```

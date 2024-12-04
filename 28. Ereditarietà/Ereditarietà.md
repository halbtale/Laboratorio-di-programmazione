## ereditarietà
### criteri di progettazione
- **Classe base** 
	- raggruppa classi sulla base di caratteristiche comuni
- **Classi derivate** (più specifiche)
	- **ereditano** caratteristiche comuni classe base e le estendono
![[Pasted image 20241204113510.png|300]]
### classe astratta
- Classe base che **NON** può essere istanziata direttamente
1. Definizione attraverso **costruttori** ==protected==
	- la classe non può essere istanziata dall'esterno
2. Definzione attraverso ==funzioni virtuali==
### classe derivata
- Per definire una classe che eredita da un'altra classe, si usa la sintassi:
```cpp
class Circle : public Shape {
	//...
};
```

>[!info] Osservazione
>Si possono definire anche ereditarietà di tipo ```private```

### relazione tra classe astratta e classe derivata
#### is a
- Un oggetto di una classe **derivata** ==è un== oggetto di una classe **astratta**
- Relazione **NON** biunivoca
#### has a
- Definisce **composizione** tra le classi
	- oggetto di una classe contenuto in un'altra classe
- Una classe ==ha un== oggetto di un'altra classe
### slicing
- Lo ==slicing== si verifica quando si tenta di inserire una **classe derivata** in uno slot che riesce a contenere solo i membri della **classe base**
- Il compilatore risolve **affettando** l'oggetto quando viene chiamato **costruttore di copia**
	- lascia solo i membri che trovano posto
#### soluzione
- Importante **disabilitare** costruttore di copia e di assegnamento
	- impedisce copia classe base
	- evita problema di **slicing**
```cpp
public:
Shape(const Shape&) = delete; 
Shape& operator=(const Shape&) = delete;
```

### dynamic_cast
- ```dynamic_cast```è utilizzato per navigare nella gerarchia di classi
![[Pasted image 20241204115131.png|400]]
#### upcasting
- Sempre lecito: ogni classe derivata **è una** classe base
- Implicito, non necessita di un cast esplicito
#### downcasting
- Bisogna essere sicuri che venga utilizzato in modo corretto
- **Unico** cast che esegue verifiche run-time
- Se cast non è lecito:
	- puntatori -> ```nullptr```
	- reference -> eccezione ```bad_cast```
- Sintassi:
```cpp
Derived* pDerived = dynamic_cast<Derived*>(&base);
```

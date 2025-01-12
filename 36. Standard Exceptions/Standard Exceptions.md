## standard exceptions
### std::exception
- Classe base fornita dalla **standard library**
- Le eccezioni si classificano in:
	- ```std::logic_error```
		- **logica** difettata
		- violazione di pre-condizioni o invarianti di una classe
	- ```std::runtime_error```
		- errori dovuti a **eventi esterni** difficilmente prevedibili
![[Pasted image 20241218104111.png|500]]
#### implementazione in sTL
![[Pasted image 20241218104321.png|500]]
#### utilizzo
![[Pasted image 20241218104421.png|350]]
### derivare dalle standard exception
- Si crea una classe derivata della classe della libreria standard:

![[Pasted image 20241218104645.png|500]]


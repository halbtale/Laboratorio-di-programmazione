## git
### tracciamento del software
- **Base**
	- salvare versioni codice
	- evidenziare modifiche tra una versione e l'altra
	- distribuire modifiche tra tutti sviluppatori
- **Avanzate**
	- suddivisone sviluppo software in **rami**
	- merge intelligente delle modifiche
#### controllo di versione centralizzato
- **Server**:
	- contiene tutta la storia e i rami
- **Client**:
	- scarica una versione dal server, modifiche in locale, upload modifiche
#### controllo di versione distribuito
- Tutta la storia passata e la straficazione avviene in locale
- Esistono solo alberi in pari
	- avviene sincronizzazione dagli alberi
### cos'è git
- Ideato da Linus Torvalds
- Modello distribuito
### inizializzazione repository
#### init
```
git init 
git add .
```
#### clone
```
git clone [url]
```
### stratificazione
#### ispezione
```
git status [-s]
```
#### add
```
git add .
```
#### commit
```
git commit
```
### branch
- Permette di lavorare un progetto su più rami paralleli
- Consigliato avere due branch:
	- ```master```
		- pulito, sincronizzato con repository remoto
	- ```dev```
		- di sviluppo, in locale
#### creazione branch
```
git branch <nome branch>
```
#### elenco branch
```
git branch
```
#### spostarsi da un branch all'altro
```
git checkout [nome branch]
```
#### unire branch
```
git merge [nome branch sorgente]
```
### sincronizzazione
#### pull
```
git pull
```
#### push
```
git push 
```


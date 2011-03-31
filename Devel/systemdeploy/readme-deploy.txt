Skripty vytvareji postupne cely system MTB mapy, krome CGI skriptu. Bohuzel nejsou otestovany v praxi, takze se v nich temer jiste vyskytuji chyby. Zatim jde tedy spise o nastineni postupu sestaveni systemu.

Poradi spousteni skriptu je nasledujici:

bash   inst-database.sh
python updatemap.py
bash   hgtdata.sh
bash   inst-renderer.sh
bash   web-rendering.sh

Jeste pred spustenim je treba je dukladne precist a upravit podle lokalnich nastaveni.
K nasledujicimu renderingu je treba jeste zkopirovat potrebne soubory z DVD.

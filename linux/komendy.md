## Prawa dostępu:
typowy wynik komendy `ll`

```
-rwxr-xr-x  1 root root        2168 lut 12  2014 xzmore*
-rwxr-xr-x  1 root root       10376 sty 31  2016 ybmtopbm*

^^^^^^^^^^ prawa
              ^^^^ właściciel typu user
                   ^^^^  właściciel typu group
```

3 x 3 flagi

[user|group|others]   --> others to wszyscy
                   

Zmiana praw:
```
chmod o+x [nazwa_pliku]   --> dodanie flagi execute dla "others" czyli wszystkich
chmod u+w [nazwa_pliku]   --> tak by właściciel user mógł zapisywać
```
r = 4
w = 2
x = 1

Zmiana właścicieli pliku:

`chown nowyuser:nowagrupa plik`

W komendach można dodawać `-R` (recursive), by wykonywało je dla wszystkich plików w głąb. 

Listownie "pewnych" plików:

`ll -d abra*zip`   ---> wszystkie pliki zaczynające na abra i kończące na zip

Szukanie w pliku (abra.txt):
`cat abra.txt | grep "user st" `

(po `grep` w cudzysłowiu jest szukana fraza; można dać dalsze szukanie, ` | grep aa | grep bb` (na koniec będą linie z `aa` i `bb`; można dać `grep -v aa` --> linie _bez_ `aa`)
                   

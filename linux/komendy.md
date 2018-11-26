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
chown o+x [nazwa_pliku]   --> dodanie flagi execute dla "others" czyli wszystkich
chown u+w [nazwa_pliku]   --> tak by właściciel user mógł zapisywać
```

r = 4
w = 2
x = 1

Listownie "pewnych" plików
`ll -d abra*zip`   ---> wszystkie pliki zaczynające na abra i kończące na zip

Szukanie w pliku (abra.txt):
cat abra.txt | grep "user st" 
(cokolwiek po grep)
                   

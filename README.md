# RTR105
Elektroniskā klade Datormācību (pamatkurss)
## Class01
### Formatēšanas piemēri
##### Saraksts 1
- OO1
- OO2
- OO3
##### Saraksts 2
- a
- b
- c
##### Saraksts 3
Skaista bilde!


![800,000+ Best Nature Pictures & Images in HD - Pixabay](https://cdn.pixabay.com/photo/2015/04/23/22/00/tree-736885__480.jpg)
##### Saraksts 4
﻿This site was built using [GitHub Pages](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#links)
 
## Class02
### Pirmās Linux komandas
- whoami - komanda pasaka kurš lietotājs pieslēdzies (parāda username)
- who - parāda cik daudz un kādi lietotāji pieslēgušies
- pwd - displays the present working directory
- exit - iziet
- last - parāda lietotājus kas un cikos bija pieslēgušies ierīcei
- pwd - print working directory
- history - parāda izmantototo komandu vēsturi
- ls - sadala failus sistēmā un parāda detalizētu informāciju par tiem
- ls -l -parāda failu saturu tabulā
- ls -a -
- cd - change directory
- root - 
- mkdir - makes a directory
- mkdir ABC - veidojām jaunu failu ABC
- echo - palīdz pārvietot datus (tekstu)
- mv - komanda pārvieto vai pārsauc failu
- 
## Class03
### Mazākā vienība - bit
- 1 byte -8 bits
- 1 kb - 1024 bits
- 1 mb - 1024 kb
- 1 gb - 1024 mb

## Class08
Skaitļi
- 1.PC
- 2.Cilvēks
- 2.1 Naturālie skaitļi 1,2,3,...n N
- 2.2 Veselie skaitļi -3,-2,-1,0,1,2,3 ...
- 2.3 Racionālie
- 2.4 Reālie 




Classroom License -- for classroom instructional use only.

>> 
>> A = [1 2 ; 3 4]

A =

     1     2
     3     4

>> B = [2 3 ; 4 5]

B =

     2     3
     4     5

>> C = A*B

C =

    10    13
    22    29

>> syms a b c d %definējam tos kā simboliskos elementus
A = [a b ; c d ]
 
A =
 
[ a, b]
[ c, d]
 
>> syms h g p q 
>> B = [h g ; p q]
 
B =
 
[ h, g]
[ p, q]
 
>> C = A*B
 
C =
 
[ a*h + b*p, a*g + b*q]
[ c*h + d*p, c*g + d*q]
 
>> D = A.*B
 
D =
 
[ a*h, b*g]
[ c*p, d*q]
 
>> %% 1.simbolisko mainīgo definēšana
% 1.veids
a = sym('a');
% tad izrēķināsim
sqrt(a^2)
% definçjam a kas ir lielâks par 0
a = sym('a','positive’);
% tad izrēķināsim
sqrt(a^2)
 
ans =
 
(a^2)^(1/2)
 
 a = sym('a','positive’);
             ↑
Error: Character vector is not terminated properly.
 
>> syms a b c d real %defineejam a b c d kaa
ne komleksus
% skaitļus
A = [a b; c d]
A’
Error using  ~= 
Not enough input arguments.
 
>> %Uzdevums 1
>> A = sym('a',[2 3])
 
A =
 
[ a1_1, a1_2, a1_3]
[ a2_1, a2_2, a2_3]
 
>> %% Uzdevums 1
>> A = sym('a',[3 3])
 
A =
 
[ a1_1, a1_2, a1_3]
[ a2_1, a2_2, a2_3]
[ a3_1, a3_2, a3_3]
 
>> A*A
 
ans =
 
[    a1_1^2 + a1_2*a2_1 + a1_3*a3_1, a1_1*a1_2 + a1_2*a2_2 + a1_3*a3_2, a1_1*a1_3 + a1_2*a2_3 + a1_3*a3_3]
[ a1_1*a2_1 + a2_1*a2_2 + a2_3*a3_1,    a2_2^2 + a1_2*a2_1 + a2_3*a3_2, a1_3*a2_1 + a2_2*a2_3 + a2_3*a3_3]
[ a1_1*a3_1 + a2_1*a3_2 + a3_1*a3_3, a1_2*a3_1 + a2_2*a3_2 + a3_2*a3_3,    a3_3^2 + a1_3*a3_1 + a2_3*a3_2]
 
>> A.*A
 
ans =
 
[ a1_1^2, a1_2^2, a1_3^2]
[ a2_1^2, a2_2^2, a2_3^2]
[ a3_1^2, a3_2^2, a3_3^2]
 
>> %% definējam simboliskos mainīgos
>> diff(x^2)
Undefined function or variable 'x'.
 
>> syms x
>> y = x^2
 
y =
 
x^2
 
>> diff(y)
 
ans =
 
2*x
 
>> diff(x^2)
 
ans =
 
2*x
 
>> syms x y
>> z = x^5*y^3;
>> diff(z,x)
 
ans =
 
5*x^4*y^3
 
>> diff(z,y)
 
ans =
 
3*x^5*y^2
 
>> syms x
>> diff(x^2,x,2)
 
ans =
 
2
 
>> %%Uzdevums 2
>> z = a*x^2;
>> syms x
>> diff(a*x^2)
 
ans =
 
2*a*x
 
>> 

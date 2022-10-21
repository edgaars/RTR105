// visas atbildes ir šeit https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2596.pdf

// operācijas:       operands_1 operācija operands_2     |operācija operands|
//                   (datu tips)          (datu tips)
//                                   ||
//                                   \/
//                          operācijas_rezultāts
//                               (datu tips)
// parasti operācijas rezultāta datu tips ir "lielākais" datu tips, kas tiek izmantots operācijā
// matemātiskās: +, -, *, /, %, ++, --
//               int i1 = 5, i2 = 6, ir;
//               ir = i1 + i2;
//               ir = ir + 10;
//               ir += 10; // tas ir tas pats ir = ir + 10; tikai kompakti pierakstīts
//               ir++; // ir = ir + 1; vai ir += 1;
// attiecību: <, <=, >=, >, ==, !=
// loģiskās: &&, ||, ! (1 operands)
// loģiskās pa bitiem: &, |, ^, ~ (1 operands)
// bitu: >>, <<
//
// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte;
//                                                  secības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>
//


#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

// % - nedrīkst lietot reāliem skaitļiem (C valodā ...)
// printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1,sizeof(f1),'%',f2,sizeof(f2));
// printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
// printf(" = %.1f (%ld bytes)\n\n",f1%f2,sizeof(f1%f2));

 // 45 / 40 -> 1, jo 45(int) = 1(int)
 // 56 % 25 -> 6
 // 998 % 2000 -> 998 (998 / 2000 -> 0)
 // 100 % 20 -> 0
 // 5.01 % 0.25 -> (C valodā ;-) ) ...kļūda ; -)

 // %

 printf("\n%d (%ld bytes) %% %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1%i1,sizeof(c1%i1));

 //65 (1 bytes) * 2000 (4 bytes) = 130000 (4 bytes)

 // >

 printf("\n%d (%ld bytes) & %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1&i1,sizeof(c1&i1));

 //65 (1 bytes) % 2000 (4 bytes) = 65 (4 bytes)

 // |

 printf("\n%d (%ld bytes) | %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1|i1,sizeof(c1|i1));

 //65 (1 bytes) & 2000 (4 bytes) = 64 (4 bytes)

 // ^

 printf("\n%d (%ld bytes) ^ %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1^i1,sizeof(c1^i1));

 // !

 printf("\n! %d (%ld bytes)",i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",!i1,sizeof(!i1));

 // &&

 c1 = 1;
 c2 = 2;
 printf("\n%d (%ld bytes) && %d (%ld bytes)",c1,sizeof(c1),c2,sizeof(c2));
 printf(" = %d (%ld bytes)\n\n",c1&&c2,sizeof(c1&&c2));

 // ||

 printf("\n%d (%ld bytes) || %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1||i1,sizeof(c1||i1));

 // << (pa kreisi)

 printf("\n%d (%ld bytes) << %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1<<i1,sizeof(c1<<i1));

 // >> (pa labi)

 printf("\n%d (%ld bytes) >> %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1>>i1,sizeof(c1>>i1));

 return 0;
 }

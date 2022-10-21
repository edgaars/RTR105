//nosacijuma  operātors if tiek izmantots koda izpildes sazarošanai
// if(izteiksme) darbība_1_gab;
// if (izteiksme)
//   darbība_1_gab;
// nozīme sekojoša - darbība_1_gab tiks izpildīta tad, kad
//                   izteiksmes izpildīšanas rezultāts ir "true"
//                   par "true" nozīmi - skatīt iepriekšējo nodarbību
// if (izteiksme) {1_darbība; 2_darbība; ....;}
// if (izteiksme)
//    {
//    1_darbība;
//    2_darbība;
//    ....;
//    }
// ar {} apzīmē (jeb nodala) darbību bloku

// if (izteiksme) darbība_1_gab; else darbība_1_gab;
// if (izteiksme)
//    darbība_1_gab;
// else
//    savādāka darbība_1_gab;


// if (izteiksme) {1_darbība; 2_darbība; ....;} else {1_s_darbība; ...;)
// if (izteiksme)
//    {
//    1_darbība;
//    2_darbība;
//    ....;
//    }
// else
//    {
//    1_s_darbība
//    ..../
//    }
// else VIENMĒR "pieder" kādam if un atrodas vienas darbības vai darbību bloka "attālumā" no if
//   un tam nav sava pārbaudāmā izteiksme

// ja vajag kaut ko "elif" veidīgu
// if (izteiksme_1)
//    {
//    ;// ; - (tukšs operātors - neko nedara, bet patērē laiku)
//    }
// else
//    {
//    if (izteiksme_2)
//      {
//      ;
//      }
//    }


#include<stdio.h>

int main()
 {
 int a,b;
 printf ("Cienijamais lietotāj, lūdzu ievadi divus skaitļus; ");
 scanf ("%d",&a);
 scanf("%d",&b);

if(a>b)
 {
 printf("Tavs ievadītais a(%d) ir lielāks par ievadīto b(%d)\n",a,b);
 }
else
 {
 printf("Tavs ievadītais a(%d) ir lielāks par ievadīto b(%d)\n",a,b);
 if(a==b)
  printf("Vēl vairāk, a(%d) ir vienāds ar b(%d)\n",a,b);
 else
  printf("Vēl vairāk, a(%d) ir vienāds ar b(%d)\n",a,b);
 }

 return 0 ;
 }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio01(){
    float cel, far;
printf("Coloque a temperatura em graus celsius:");
scanf("%f", &cel);
far = (cel*9/5 )+ 32;

printf("%.1f graus Celcius equivalem a %.1f graus Fahrenheit.\n",cel, far);
}

void exercicio02(){
    float cel, far;
    printf("Coloque a temperatura em graus Fahrenheit:");
scanf("%f", &far);
cel= (far-32 )*5/9;

    printf("%.1f graus Fahrenheit equivalem a %.1f graus Celcius.\n",far, cel);
}

void exercicio03(){
    float raio, altura, vol;
    printf("Insira o raio da lata em centimetros.");
scanf("%f", &raio);
printf("Insira a altura da lata em centimetros.");
scanf("%f", &altura);
vol=(M_PI *raio*raio)* altura;
printf("%f cm³", vol);

};

void exercicio04(){
    float D, C, L;
    printf("Insira a distancia percorida .");
scanf("%f", &D);
    printf("Insira  o consumo do veiculo.");
scanf("%f", &C);
L =(D/C);
    printf("%.1f gasto na viagem",L);
}

void exercicio05(){
    float VO, M, J, V;

    printf("Insira o valor original da prestacao: ");
    scanf("%f", &VO);

    printf("Insira quantos meses esta atrasado: ");
    scanf("%f", &M);
    printf("Insira a taxa de juros (em %%): ");
    scanf("%f", &J);
    V = VO * (1 + (J / 100) * M);

    printf("O valor da prestacao atrasada = %.2f\n", V);
}

void exercicio06(){
   double A, B, temp;
    printf("Insira o valor para a variavel A:");
    scanf("%d", &A);
    printf("Insira o valor para a variavel B:");
    scanf("%d", &B);
    temp = A;
    A = B;
    B = temp;
    printf("Antes da troca A= %d e B= %d \n", A, B);
    printf("Apos a troca A= %d e B= %d", B, A);
}

void exercicio07(){
float N1, N2, N3, N4, A1, A2, A3, A4, A5, A6, M1, M2, M3, M4, M5, M6;


printf("Insira quatro valores inteiros\n");
scanf("%f", &N1 );
scanf("%f", &N2 );
scanf("%f", &N3 );
scanf("%f", &N4 );

A1= N1+N2;
A2= N1+N3;
A3= N1+N4;
A4= N2+N3;
A5= N2+N4;
A6= N3+N4;

M1=N1*N2;
M2=N1*N3;
M3=N1*N4;
M4=N2*N3;
M5=N2*N4;
M6=N3*N4;

printf("Aqui estao as adicoes\n %.1f\n, %.1f\n, %.1f\n, %.1f\n, %.1f\n, %.1f\n", A1, A2, A3, A4, A5, A6);
printf("Aqui estao as multiplicacoes\n %.1f\n, %.1f\n, %.1f\n, %.1f\n, %.1f\n, %.1f\n", M1, M2, M3, M4, M5, M6);
}

void exercicio08(){
float L, A, C, V;
    printf("insira o valor da largura da caixa retangular:");
scanf("%f",  &L);
    printf("Insira o valor da altura da caixa retangul:");
scanf("%f", &A);
    printf("Insira o valor do comprimento da caixa retangular:");
scanf("%f", &C);
    V=C*L*A;
    printf("Aqui esta o volume calculado = %.1f", V);



}

void exercicio09(){
    float nun, qua;
    printf("Insira um valor numerico");
scanf("%f", &nun);
     qua=nun*nun;
printf("Aqui esta o valor elevado ao quadrado= %.1f", qua);


}

void exercicio10(){
float N1, N2, D;
    printf("Insira dois valores numericos inteiros\n");
scanf("%f", &N1);
scanf("%f", &N2);
    D= N1-N2;
    printf("Esta e adiferenca dos entre os dois valores= %.1f", D);
}

void exercicio11(){
float R, D;
    printf("Insira o valor em dolar que vai ser convertido");
scanf("%f", &D);
    R=D*5.60;
printf("Aqui esta o valor em real %.2f", R);
}

void exercicio12(){
float R, D;
    printf("Insira o valor em real que vai ser convertido");
scanf("%f", &R);
    D=R/5.60;
printf("Aqui esta o valor em dolar %.2f", D);
}

void exercicio13(){
    float N1, N2, N3, S;
    printf("Insira tres valores numericos\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3 );
    S= N1*N1+N2*N2+N3*N3;
    printf("Aqui esta a soma dos quadrados %.1f", S);
}

void exercicio14(){
float N1, N2, N3, S, Q;
    printf("Insira tres valores numericos\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3 );
    S=N1+N2+N3;
    Q=S*S;
    printf("Aqui esta o resultado do quadrado da soma= %.1f", Q);




}

void exercicio15(){
    float N1, N2, N3, N4, S, P;
 printf("Insira tres valores numericos\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3 );
    scanf("%f", &N4 );
    P=N1*N3;
    S=N2+N4;
    printf("Produto: %.1f e Soma: %.1f ", P, S);

}

void exercicio16(){
float S, A, P, N;
    printf("Insira o valor do salario mensal");
scanf("%f", &S);
    printf("Insira a porcentagem de aumento do salario ");
scanf("%f", &P);
A=S*(P/100);
N=S+A;
printf("Aqui esta o novo salario= %.2f E o aumento consedido foi de %.2f", N, A);
}

void exercicio17(){
float R, A;
    printf("Insira o raio da circunferencia");
scanf("%f", &R);
A=3.14159 *R*R;
printf("Aqui esta a area calculada %.2f", A);


}

void exercicio18() {
float P1,P2,P3, C1, C2, C3, PN, PB, N, B, T;
        printf("Insira a quantidade de votos dos 3 candidatos\n");
    printf("Candidato 1:");
    scanf("%f", &C1);
    printf("Candidato 2:");
    scanf("%f", &C2);
    printf("Candidato 3:");
    scanf("%f", &C3);
        printf("Insira a quantidade de votos nulos\n");
    scanf("%f", &N);
   printf("Insira a quantidade de votos brancos\n");
    scanf("%f", &B);
    T=C1+C2+C3+N+B;
   P1= C1/T*100;
   P2= C2/T*100;
   P3= C3/T*100;
    PN= N/T*100;
    PB= B/T*100;
    printf("Total de eleitores= %.1f\n Percentual de votos válidos:\n", T);
        printf("Candidato 1 = %.2f\n", P1);
        printf("Candidato 2 = %.2f\n", P2);
        printf("Candidato 3 = %.2f\n", P3);
printf("Os votos nulos form= %.2f\n", PN);
printf("Os votos brancos form= %.2f\n", PB);
}

void exercicio19() {
 float N1, N2, A, S, M, D;
 printf("Insira dois valores numricos inteiros\n");
 scanf("%f", &N1);
 scanf("%f", &N2);
 A=N1+N2;
 S=N1-N2;
 M=N1*N2;
 D=N1/N2;
 printf("Adicao do %.0f + %.0f = %.0f\n", N1, N2, A);
 printf("Subtracao do %.0f - %.0f = %.0f\n", N1, N2, S);
 printf("Divisao do %.0f / %.0f = %.0f\n", N1, N2, D);
 printf("Multiplicacao do %.0f * %.0f = %.0f", N1, N2, M);

 }

void exercicio20() {
float V, D, T;
    printf("Insira a distância percorrida em quilômetros e o tempo em horas\n");
scanf("%f", &D);
scanf("%f", &T);
V=D/T/3.6;
printf("Velocidade = %.2f m/s", V);

}

void exercicio21() {
    float B, E, P;
    printf("Insira dois valores numéricos inteiros representando a base e o expoente da potencia");
    scanf("%f", &B);
    scanf("%f", &E);
    P= pow(B, E);
printf("Aqui esta a potencia= %.0f", P);

}

void exercicio22() {
float V, R;
    printf("Insira o raio da esfera");
 scanf("%f", &R);
 V = (4/3) * M_PI *pow(R, 3);
printf("%.2f", V);

}

void exercicio23() {
    float P, M;
    printf("Insira  uma medida em pes");
scanf("%f", &P);
 M=P*0.3048;
printf("%.3f", M);

}

void exercicio24() {
    float R, B, I, D;
printf("Insira a base e o indice da raiz:\n");
printf("Base:");
    scanf("%f", &B);
printf("Indice:");
    scanf("%f", &I);
    R=pow(B, 1/I);
printf("Aqui esta a raiz calculada= %.1f", R);
}

void exercicio25() {
    float S, A, N;
printf("Insira um valor numerico inteiro: ");
    scanf("%f", &N);
S=N+1;
A=N-1;
printf("Sucessor= %.0f , Antesessor= %.0f", S, A);
}

void exercicio26() {
    float D, Q, N1, N2;
printf("Insira dois valores numericos inteiros:\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
D= N1/N2;
Q= D*D;
printf("Aqui esta o resultado ao quadrado = %.0f", Q);
}

int main()
{
        exercicio01();
    printf(">-------------------------------------< \n");
        exercicio02();
    printf(">-------------------------------------< \n");
        exercicio03();
    printf(">-------------------------------------< \n");
        exercicio04();
    printf(">-------------------------------------< \n");
        exercicio05();
    printf(">-------------------------------------< \n");
        exercicio06();
    printf(">-------------------------------------< \n");
        exercicio07();
    printf(">-------------------------------------< \n");
        exercicio08();
    printf(">-------------------------------------< \n");
        exercicio09();
    printf(">-------------------------------------< \n");
        exercicio10();
    printf(">-------------------------------------< \n");
        exercicio11();
    printf(">-------------------------------------< \n");
        exercicio12();
    printf(">-------------------------------------< \n");
        exercicio13();
    printf(">-------------------------------------< \n");
        exercicio14();
    printf(">-------------------------------------< \n");
        exercicio15();
    printf(">-------------------------------------< \n");
        exercicio16();
    printf(">-------------------------------------< \n");
        exercicio17();
    printf(">-------------------------------------< \n");
        exercicio18();
    printf(">-------------------------------------< \n");
        exercicio19();
    printf(">-------------------------------------< \n");
        exercicio20();
    printf(">-------------------------------------< \n");
        exercicio21();
    printf(">-------------------------------------< \n");
        exercicio22();
    printf(">-------------------------------------< \n");
        exercicio23();
    printf(">-------------------------------------< \n");
        exercicio24();
    printf(">-------------------------------------< \n");
        exercicio25();
    printf(">-------------------------------------< \n");
        exercicio26();
    printf(">-----------------FIM-----------------< \n");
        //TUDU FEITO NA RACA SEM USO DE IA

    return 0;
}

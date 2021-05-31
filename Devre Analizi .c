#include <stdio.h>
#include <math.h>
int Rl();
int main(){
int secenek;
printf("Devre Tipini Giriniz\n R-L ise 1 bas \n R-C ise 2 bas");
scanf(" %d",&secenek);
printf("mili diyor ise 0.01\n");
if(secenek==1){
Rl();
}
if(secenek==2){
Rc();
}


}
int Rl (){
float Drn,Bbn,Vlt,Frk;
float xl,Z,akim,Ur,Ul,faz;
printf("Direnc Deger Girin; ");
scanf("%f",&Drn);
printf("Bobin Deger Gir; ");
scanf("%f",&Bbn);
printf("Volt Gir; ");
scanf("%f",&Vlt);
printf("Frekans; ");
scanf("%f",&Frk);
//Ýslemler;
xl = 2*(3.14)*Frk*Bbn;
Z = sqrt((xl*xl)+(Drn*Drn));
akim=Vlt/Z;
Ur=akim*Drn;
Ul=akim*xl;
faz = acos(Drn/Z)*180/3.14;
printf("Bobin Reaktansi(XL); %f",xl);
printf("\nEmpedans Degeri (Z); %f",Z);
printf("\nAkim Degeri; %f A",akim);
printf("\n Direnc Volt; %f V",Ur);
printf("\n Bobin Volt; %f V",Ul);
printf("\nfaz acisi; %f derece",faz);
}

int Rc(){
	printf("blalblallb");
}


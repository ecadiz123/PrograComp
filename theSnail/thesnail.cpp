#include <bits/stdc++.h>
using namespace std;

int main ()
{

#ifndef VJUDGE	
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    float H=0;//altura del pozo
    float U=0;//Distancia que sube el primer dia
    float D=0;//Distancia que baja en la noche
    float F=0;//porcentaje que indica la fatiga
    while(true)
    {

	cin>>H;
	cin>>U;
	cin>>D;
	cin>>F;
	if(H==0 && U==0 && D==0 && F==0)
	{
	    //Condicion de termino
	    return 0;
	}
	
	float pos=0;//posicion del caracol
	float dia =1;
	F=F/100;//Se deja en forma decimal para multiplicar
	while(true)//si posicion es mayor a H sale si es menor a 0 no sale
	{
	    float asciende= U-U*F*(dia-1);//Lo que va a ascender en el dia

	    if(asciende>=0)//no puede ascender distancia negativa
	    {
	    pos= pos+ asciende;//sube en el dia
	    }

	    if(pos>H)
	    {
		cout<<"success on day "<<dia<<"\n";
		break;
	    }
	    pos=pos-D;//baja en la noche
	    if(pos<0)
	    {
		cout<<"failure on day "<<dia<<"\n";
		break;
	    }
	    dia++;//pasa un dia
	}

    }


    return 0;   

}

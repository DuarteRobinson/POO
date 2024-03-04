#include <iostream>
using namespace std;

main()
{
	float preco, desconto=0, pt;
	int  quantidade;
	cout << "Quantidade";
	cin >> quantidade;
	
	pt=quantidade*13;  
	
	if (quantidade >=500 && quantidade <=1000)
	{
		desconto = pt*0.05;
	}
	else
	 {
	 	if (quantidade > 1000)
	 desconto = pt * 0.08;
	 }
	 


cout << "valor a pagar =" << pt - desconto;

}


#include <iostream>
#include <string>

using namespace std;
void kondisi (int nilai)
{
	if (nilai>=0 && nilai<=100)
	{
		if (nilai>=0 && nilai<=20)
			{cout<<"nilai angka anda ="<<nilai<<endl;   cout<<"nilai huruf anda e"<<endl; }
		else 
		{
			if (nilai>=21 && nilai<=40)
				{ cout<<"nilai angka anda ="<<nilai<<endl;   cout<<"nilai huruf anda d"<<endl;  }
			else
			{
				if (nilai>=41 && nilai<=60)
					{cout<<"nilai angka anda ="<<nilai<<endl;  cout<<"nilai huruf anda c"<<endl;  }
				else
				{
					if (nilai>=61 && nilai<=80)
						{cout<<"nilai angka anda ="<<nilai<<endl; cout<<"nilai huruf anda b"<<endl; }
					else 
						{cout<<"nilai angka anda ="<<nilai<<endl;  cout<<"nilai huruf anda a "<<endl; }

				}
				
				
					
					
				

					

				
			}
		}
	}
	else
		{ cout<<"maaf, nilai yang anda masukan salah.interval nilai hanya 0-100"<<endl; }
	

}
int main ()
{
	string raptor_prompt_variable_zzyz;
	int nil;
	raptor_prompt_variable_zzyz = "masukan nilai angka";
	cout<<raptor_prompt_variable_zzyz<<endl;
	cin>>nil;
	kondisi(nil);

	return 0;
}

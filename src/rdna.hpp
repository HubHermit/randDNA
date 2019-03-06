#include <random>
#include <string>


using std::string;


string randDNA (int seed, string bases, int n)
{
	string dnaSEQ;
	
	int min = 0;//min number
	int max = bases.size()-1;//max number	

	
	std::mt19937 gen(seed); //using a Mersenne Twister generator for the seed
	std::uniform_int_distribution <int> dist(min, max);

	        
			
        
	for (int v =0; v < n; v ++) 
	{
		int shuffle = dist(gen);
		dnaSEQ += bases[shuffle];
		
	}

return dnaSEQ;
}

double pow(double a, unsigned int p)
{
	double result=1;
	for (int i =0 ; i < p ; i++)
		result*=a;
	
	return result;
}

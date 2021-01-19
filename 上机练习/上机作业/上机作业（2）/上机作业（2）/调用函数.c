extern float a , b , c , d ;
extern float g1, g2, g3, g4, g5;
float Score(float o[])
{
	float g;
	g = o[0]*a+ o[1]*b + o[2]*c + o[3]*d;
	return (g);
}
void Sort()
{
	int t;
	for (int i = 1; i <= 5; i++)
	{
		if (g1 > g2)
			t = g1, g1 = g2, g2 = t;
		if (g2>g3)
			t = g2, g2 = g3, g3 = t;
		if (g3> g4)
			t = g3, g3 = g4, g4 = t;
		if (g4 > g5)
			t = g4, g4 = g5, g5 = t;

	}

}
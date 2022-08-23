//given an vector we have to find the frequency
 /*

 ara ->6 5 3 2 1

 6->0 0 0 0 0 0
 5 ->0 0 0 0 0 |
 3 ->0 0 0 | | |
 2 ->0 0 | | | |
 1 ->0 | | | | |
     | v v v v v
     v
     5 4 3 2 2 1 

frequncy=> (5,4,3,2,2,1)*/

void frequncy(vector<int>ara)
{
	sort(ara.begin(),ara.end(),greater());
	int max1=ara[0]+2;
	vector<int>freq(max1,0);
	for(int i=0;i<max1;i++)
	{
		if(ara[i])
        {
           freq[0]++;
           freq[ara[i]]--;
        }
	}
	for(int i=1;i<max1-1;i++)
	{
		freq[i]+=freq[i-1];
	}

}
#include<bits/stdc++.h>
using namespace std;


class participants{
public:
	string name ;
	int score;

	participants()
	{

	}
	participants(string n , int s)
	{
		name = n ; 
	    score = s ;
	}

};


class compare{
  public:

  	bool operator()(participants p1 , participants p2)
  	{
  		return p1.score < p2.score ;
  	}
};

int main()
{
	int n;
	cin >> n ; 
        priority_queue<participants , vector<participants> , compare> pq ;
	for(int i =0 ;i < n;i++){
		string str; 
		int score ; 
		cin >> str >> score ; 
		participants p(str , score) ;
		pq.push(p) ;
	}
	int k ;
	cin>>k ;
	for(int i = 0 ;i < k;i++){
		cout<<pq.top().name <<endl ;
		pq.pop();
	}

}

Problem Statement:

You are conducting a contest at your college. This contest consists of two problems and 
 participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

Solution:

#include <iostream> 
using namespace std; 
int main() 
{     
	int test_case;     
cin>>test_case;     
for(int i = 0; i < test_case; i++)
{         
	int cost_g, cost_p;         
cin>>cost_g>>cost_p;         
int participants;         
cin>>participants;         
int sum1 = 0, sum2 = 0, max, min, max_cost, min_cost;         
for(int i = 0; i < participants; i++)
{             
	int q1, q2;             
cin>>q1>>q2;             
if(q1 == 1)
{                 
	sum1 += 1;             
}             
if (q2 == 1)
{                 
	sum2 += 1;             
}         
}                           
if(sum1>sum2)
{                 
	max = sum1;                 
min = sum2;             
}             
else
{                 
	max = sum2;                 
min = sum1;             
}         
if(cost_g > cost_p)
{             
	max_cost = cost_g;             
min_cost = cost_p;         
}         
else
{             
	max_cost = cost_p;             
min_cost = cost_g;         
}         
cout<<max * min_cost + min * max_cost<<endl;     
} 
}

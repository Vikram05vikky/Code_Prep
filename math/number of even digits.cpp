class Solution {

    int finddigit(int n)
    {
        int count=0;

        while(n>0)
        {
            int a = n%10;
            count++;
            n=n/10;

        }
        return count;
    }

public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        for(auto it : nums)
        {
            // int digit = finddigit(it);
            int digit = log10(it)+1;
            if(digit%2==0)
                a++;
        }
        return a;        
    }
};




--------------------------- (or) ---------------------------------------



class Solution {

    int finddigit(int n)
    {
        int count=0;

        while(n>0)
        {
            int a = n%10;
            count++;
            n=n/10;

        }
        return count;
    }

public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        for(auto it : nums)
        {
            int digit = finddigit(it);
            if(digit%2==0)
                a++;
        }
        return a;        
    }
};

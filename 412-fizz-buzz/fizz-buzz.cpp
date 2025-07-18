class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        for(int i = 0; i < n; i++)
        {
            if((i+1)%3==0 && (i+1)%5==0)
                s.push_back("FizzBuzz");
            else if((i+1)%3==0)
                s.push_back("Fizz");
            else if((i+1)%5==0)
                s.push_back("Buzz");
            else
                s.push_back(to_string(i+1));
        }
        return s;
    }
};
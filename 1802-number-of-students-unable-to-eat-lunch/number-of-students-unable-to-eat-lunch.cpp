class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        stack<int>sand;
        queue<int>stu;
        int j = n;
        for(int i = 0; i<n; i++){
            sand.push(sandwiches[--j]);
            stu.push(students[i]);
        }
        int lastserved = 0;
        while(!stu.empty() && lastserved<stu.size()){
            if(sand.top()!=stu.front()){
                lastserved++;
                stu.push(stu.front());
                stu.pop();
            }else{
                lastserved=0;
                sand.pop();
                stu.pop();
            }
        }
        return stu.size();
    }
};
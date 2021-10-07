// Reference : https://practice.geeksforgeeks.org/problems/generate-binary-numbers

vector<string> generate(int N)
{
	queue<string> q;
	vector<string> res;
	
	q.push("1");
	for(int i = 0; i < N; i++) {
	    string temp = q.front();
	    res.push_back(temp);
	    q.pop();
	    q.push(temp + '0');
	    q.push(temp + '1');
	}
	return res;
}
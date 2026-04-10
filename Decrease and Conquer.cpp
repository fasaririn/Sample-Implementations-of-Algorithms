#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void BFS(char nodes[]){
	queue<char> q;
	cout << "BFS Traversal: ";
	
	q.push(nodes[0]);
	while(!q.empty()){
		char current = q.front();
		q.pop();
		cout << current << " ";
		
		if (current == 'A'){
			q.push('B');
			q.push('C');
		}
		else if (current == 'B'){
			q.push('D');
			q.push('E');
		}
		else if (current == 'C'){
			q.push('F');
		}
	}
	
}

void DFS(){
	stack<char> s;
	cout<< "DFS Traversal: ";
	
	s.push('A');
	while(!s.empty()){
		char current = s.top();
		s.pop();
		
		cout << current << " ";
		
		if (current == 'A'){
			s.push('C');
			s.push('B');
		}
		else if (current == 'B'){
			s.push('E');
			s.push('D');
		}
		else if (current == 'C'){
			s.push('F');
		}
	}
	
}

int main(){
	
	char nodes[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	
	BFS(nodes);
	cout << endl;
	
	DFS();
	cout << endl;
	
}

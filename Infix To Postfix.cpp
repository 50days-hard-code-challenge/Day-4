#include<bits/stdc++.h>
#include<string>
using namespace std;
int precedance(char ch){
	if(ch=='^'){
		return 3;
	}
	else if(ch=='+'||ch=='-'){
		return 1;
	}
	else if(ch=='*'||ch=='/'){
		return 2;
	}
	return -1;
}
void solve(string exp,string &out){
	stack<char>st;
	int i=0;
	while(i<exp.length()){
		if(exp[i]>=49 && exp[i]<=57){
			out.push_back(exp[i]);
		}
		else if(exp[i]>=97 && exp[i]<=122){
			out.push_back(exp[i]);
		}
		else{
			if(exp[i]==')'){
				while(st.top()!='('){
					char temp=st.top();
					st.pop();
					out.push_back(temp);
				}
				st.pop();
			}
			else if(exp[i]=='('){
				st.push(exp[i]);
			}
			else{
				while((!st.empty())&&(precedance(exp[i])<=precedance(st.top()))){
						
				   char temp=st.top();
				   st.pop();
				   out.push_back(temp);
				}
				st.push(exp[i]);

				
			}
			
		}

		i++;
	}
	while(!st.empty()){
		out.push_back(st.top());
		st.pop();
	}

}
string infixToPostfix(string exp){
   string out="";
   solve(exp,out);
   return out;



}

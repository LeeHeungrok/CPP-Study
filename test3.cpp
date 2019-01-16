#include <string>
#include <vector>
#include <stack>
#include <string>
#include <sstream>

typedef struct Operator{
    int priority;
    string oper;
} Operator;

using namespace std;

string solution(string input) {
    string answer = "";
    stack<Operator> stOperator;
    stack<int> stNumber;
    stringstream ss(input);

    string tokenize;
    while(ss >> tokenize){
        if(tokenize == "*" || tokenize == "/" || tokenize == "+" || tokenize == "-"){
            int priority = 0;
            if(tokenize == "*"){
                priority = 1;
            }
            else if(tokenize == "/"){
                priority = 1;
            }
            else if(tokenize == "+"){
                priority = 2;
            }
            else if(tokenize == "-"){
                priority = 2;
            }

            while(!stOperator.empty() && priority <= stOperator.top().priority){
                int a, b, result;
                b = stNumber.top();
                stNumber.pop();
                a = stNumber.top();
                stNumber.pop();
                string oper = stOperator.top().oper;
                stOperator.pop();
            
                if (oper == "*")
                    result =  a * b;
                else if (oper == "/")
                    result = a / b;
                else if (oper == "+")
                    result = a + b;
                else if (oper == "-")
                    result = a - b;
                    
                stNumber.push(result);
            }
            Operator op;
            op.oper = tokenize;
            op.priority = priority;
            stOperator.push(op);
        }
        else {
            stNumber.push(stoi(tokenize));
        }
    }
    return answer;
}
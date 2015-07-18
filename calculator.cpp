#include <iostream>
#include <cstring>
#include <map>
#include <sstream>

using namespace std;

enum Token_value {
    NAME,   NUMBER, END,
    PLUS='+',   MINUS='-', MUL='*', DIV='/',
    PRINT=';', ASSIGN='=', LP='(', RP=')'
};
Token_value curr_tok = PRINT;
double number_value; 
string string_value;
map<string, double> table;
istream *input;

int no_of_errors;
double expr(bool);
double term(bool);
double prim(bool);


double error(const string & s){
    no_of_errors++;
    cerr<<"error: " << s<< '\n';
    return 1;
}

Token_value get_token()
{
    char ch = 0;
    cin >> ch;

    switch (ch) {
        case 0:
            return curr_tok=END;
        case ':':
        case '*':
        case '/':
        case '+':
        case '-':
        case '(':
        case ')':
        case '=':
            return curr_tok=Token_value(ch);
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '.':
            cin.putback(ch);
            cin >> number_value;
            return curr_tok=NUMBER;
        default:   // NAME,NAME=, or error
            if (isalpha(ch))
            {
                cin.putback(ch);
                cin>>string_value;
                return curr_tok=NAME;
            }
            error("bad token");
            return curr_tok=PRINT;
        
    }
}
double term(bool get)
{
    double left = prim(get);

    for(;;)
        switch (curr_tok) {
            case MUL:
                left *= prim(true);
                break;
            case DIV:
                if (double d = prim(true)){
                    left /= d;
                    break;
                }
                return error("divide by 0");
            default:
                return left;
        }
}
double expr(bool get)
{
    double left = term(get);

    for(;;)
        switch(curr_tok) {
            case PLUS:
                left += term(true);
                break;
            case MINUS:
                left -= term(true);
                break;
            default:
                return left;
        }
}

double prim(bool get)
{
    if (get) get_token();

    switch(curr_tok) {
        case NUMBER: // floating point constant
        {
            double v = number_value;
            get_token();
            return v;
        }
        case NAME:
        {
            double &v = table[string_value];
            if (get_token() == ASSIGN) 
                v = expr(true);
            return v;
        }
        case MINUS: // unary minus
            return -prim (true);
        case LP:
        {
            double e  = expr(true);
            if (curr_tok != RP)
                return error(") expected");
            get_token(); // eat ')'
            return e;
        }
        default:
            return error("primary expected");
        }
}

int main(int argc, char* argv[])
{
    switch (argc)
    {
        case 1:
            input = &cin;
            break;
        case 2:
            input = new istringstream(argv[1]);
            break;
        default:
            error("too many arguments");
        return 1;
    }

    table["pi"] = 3.14159;
    table["e"] = 2.7182;

    while (*input) {
        get_token();
        if (curr_tok == END) break;
        if (curr_tok == PRINT) continue;
        cout << expr(false) << '\n';
    }
    if (input != &cin) 
        delete input;
    return no_of_errors;
}
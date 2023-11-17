class Solution {
public:
bool isValid(string s)
{
    int point = 0;
    char par1 = '(';
    char par2 = ')';
    char llave1 = '{';
    char llave2 = '}';
    char cor1 = '[';
    char cor2 = ']';
    stack<char> pila;
    while (point < s.length())
    {
        if (s.at(point) == par1 || s.at(point) == llave1 || s.at(point) == cor1)
        {
            pila.push(s.at(point));
        }
        else if (!pila.empty())
        {
            if (pila.top() == par1 && s.at(point) == par2)
                pila.pop();
            else if (pila.top() == llave1 && s.at(point) == llave2)
                pila.pop();
            else if (pila.top() == cor1 && s.at(point) == cor2)
                pila.pop();
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }

        point++;
    }
    if (pila.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
        
    
};
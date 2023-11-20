class Solution {
public:
bool isPalindrome(string s) {
    string result;
    stack<char> charStack;

    // Procesar la cadena y eliminar caracteres no alfanuméricos
    for (char c : s) {
        if (isalnum(c)) { // Comprobar si el caracter es alfanumérico
            result.push_back(tolower(c)); // Convertir a minúsculas
            charStack.push(tolower(c));
        }
    }

    // Verificar si la cadena es un palíndromo
    while (!charStack.empty()) {
        if (charStack.top() != result.front()) {
            return false;
        }
        result.erase(result.begin()); // Eliminar el primer carácter
        charStack.pop();
    }

    return true;
}
};
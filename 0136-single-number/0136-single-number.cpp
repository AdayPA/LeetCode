class Solution {
public:
int singleNumber(vector<int> &nums)
{
  int resultado = 0;

  // Aplicar XOR a cada elemento del vector
  for (int num : nums)
  {
    resultado ^= num;
  }

  return resultado;
}
};
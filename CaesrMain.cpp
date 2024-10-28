#include <iostream>

using namespace std;

string encode(string value, int shift){

  string encoded = "";

  for (int i = 0; i < value.length(); i++)
  {
    if (isupper(value[i]))
    {
      encoded += char(int(value[i] + shift - 65) % 26 + 65);
    }
    else {
      encoded += char(int(value[i] + shift - 97) % 26 + 97);
    }
    
  }
  
  return encoded;
}

string decode(string value, int shift){

  string decoded = "";

  for (int i = 0; i < value.length(); i++)
  {
    if (isupper(value[i]))
    {
      decoded += char(int(value[i] - shift - 65) % 26 + 65);
    }
    else {
      decoded += char(int(value[i] - shift - 97) % 26 + 97);
    }
    
  }

  return decoded;
}

int main() {
  
  string value;
  int choice, shift;
  char again = 'Y';

  while (again == 'Y')
  {

    cout << "Caesar's Cipher" << endl;
    cout << "Decode(1) or Encode(2)?" << endl;

    cin >> choice;

    if (choice == 1) {
      cout << "Enter string to be decoded: " << endl;
      cin >> value;
      cout << "Enter shift: "<< endl;
      cin >> shift;
      cout << decode(value, shift) << endl;
    }

    else if (choice == 2) {
      cout << "Enter string to be encoded: " << endl;
      cin >> value;
      cout << "Enter shift: "<< endl;
      cin >> shift;
      cout << encode(value, shift) << endl;
    }

    else {
      cout << "Wrong input" << endl;
    }

    cout << "Want to do decode or encode again? (Y/N)" << endl;
    cin >> again;

    if (again != 'Y' || again != 'N')
    {
      cout << "Wrong Input" << endl;  
    }
    
  }
  

  return 0;
}

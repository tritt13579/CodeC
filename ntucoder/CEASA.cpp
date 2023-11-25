#include <iostream>
#include <string>

using namespace std;

// Hàm giải mã bản tin đã được mã hóa theo phương pháp Caesar
string decryptCaesarCipher(const string &encrypted_text, int k)
{
    string decrypted_text = "";
    int n = encrypted_text.length();

    for (int i = 0; i < n; ++i)
    {
        char current = encrypted_text[i];

        // Giải mã từng ký tự
        if (isalpha(current))
        {
            char decrypted_char = current - k;
            if (decrypted_char < 'a')
            {
                decrypted_char += 26; // Vượt quá 'a' thì quay lại cuối bảng chữ cái
            }
            decrypted_text += decrypted_char;
        }
        else
        {
            decrypted_text += current;
        }
    }

    return decrypted_text;
}

int main()
{
    string encrypted_text;
    int k;

    // Nhập bản tin đã được mã hóa và khóa
    cin >> encrypted_text >> k;

    // Giải mã và in kết quả
    string decrypted_text = decryptCaesarCipher(encrypted_text, k);
    cout << decrypted_text << endl;

    return 0;
}

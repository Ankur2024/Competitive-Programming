#include <bits/stdc++.h>
using namespace std;

class BigInt
{
public:
    string d; // digits reversed

    // Constructors
    BigInt() : d("0") {}
    BigInt(long long num)
    {
        if (num == 0)
        {
            d = "0";
            return;
        }
        while (num > 0)
        {
            d.push_back(char('0' + (num % 10)));
            num /= 10;
        }
    }
    BigInt(const string &s)
    {
        d = string(s.rbegin(), s.rend());
        trim();
    }

    // Remove leading zeros (in reversed string = trailing zeros)
    void trim()
    {
        while (d.size() > 1 && d.back() == '0')
            d.pop_back();
    }

    // Convert back to normal string
    string str() const
    {
        return string(d.rbegin(), d.rend());
    }

    // Comparisons
    bool operator<(const BigInt &b) const
    {
        if (d.size() != b.d.size())
            return d.size() < b.d.size();
        return d < b.d; // lex compare reversed works
    }
    bool operator>=(const BigInt &b) const { return !(*this < b); }

    // Addition
    BigInt operator+(const BigInt &b) const
    {
        BigInt r;
        r.d.clear();
        int carry = 0, n = max(d.size(), b.d.size());

        for (int i = 0; i < n || carry; i++)
        {
            int sum = carry;
            if (i < d.size())
                sum += d[i] - '0';
            if (i < b.d.size())
                sum += b.d[i] - '0';

            r.d.push_back(char((sum % 10) + '0'));
            carry = sum / 10;
        }
        return r;
    }

    // Subtraction (assume a >= b)
    BigInt operator-(const BigInt &b) const
    {
        BigInt r;
        r.d.clear();
        int borrow = 0;

        for (int i = 0; i < d.size(); i++)
        {
            int x = (d[i] - '0') - borrow;
            int y = (i < b.d.size()) ? (b.d[i] - '0') : 0;

            if (x < y)
            {
                x += 10;
                borrow = 1;
            }
            else
                borrow = 0;

            r.d.push_back(char(x - y + '0'));
        }

        r.trim();
        return r;
    }

    // Multiplication
    BigInt operator*(const BigInt &b) const
    {
        BigInt r;
        r.d.assign(d.size() + b.d.size(), '0');

        for (int i = 0; i < (int)d.size(); i++)
        {
            int carry = 0;
            for (int j = 0; j < (int)b.d.size() || carry; j++)
            {
                long long cur = (r.d[i + j] - '0') +
                                (d[i] - '0') * 1LL * (j < b.d.size() ? (b.d[j] - '0') : 0) +
                                carry;

                r.d[i + j] = char((cur % 10) + '0');
                carry = cur / 10;
            }
        }

        r.trim();
        return r;
    }

    // Division (long division)
    BigInt operator/(const BigInt &b) const
    {
        BigInt cur("0"), res("0");
        res.d.assign(d.size(), '0');

        for (int i = d.size() - 1; i >= 0; i--)
        {
            cur.d.insert(cur.d.begin(), d[i]);
            cur.trim();

            int x = 0;
            while (cur >= b)
            {
                cur = cur - b;
                x++;
            }

            res.d[i] = char(x + '0');
        }

        res.trim();
        return res;
    }

    // Modulo
    BigInt operator%(const BigInt &b) const
    {
        return *this - ((*this / b) * b);
    }
};

int main()
{
    BigInt a("99999999999999999999999");
    BigInt b("123456789");

    cout << "a + b = " << (a + b).str() << endl;
    cout << "a - b = " << (a - b).str() << endl;
    cout << "a * b = " << (a * b).str() << endl;
    cout << "a / b = " << (a / b).str() << endl;
    cout << "a % b = " << (a % b).str() << endl;
}

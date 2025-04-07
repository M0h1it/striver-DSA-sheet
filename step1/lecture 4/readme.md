# for reverseinteger.cpp
->
Why rev > INT_MAX / 10?
Let’s take INT_MAX = 2147483647

Now say:

rev = 214748364
digit = 8

Then:

rev * 10 + digit = 214748364 * 10 + 8 = 2147483648 → OVERFLOW! ❌
But even before multiplying, if rev > 214748364 → we already know multiplying by 10 will overflow.

If rev is equal to 214748364, we must also check the digit.

Why digit > 7?
The last digit of INT_MAX is 7.

If:
rev == INT_MAX / 10 (i.e. 214748364)
AND
digit > 7

Then it will become:
rev = 214748364 * 10 + 8 = 2147483648 → OVERFLOW! ❌
So we check:
rev == INT_MAX / 10 && digit > 7

Same for Negative Side
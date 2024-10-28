def is_palindrome(n):
    s = str(n)
    return s == s[::-1] 

m = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        if is_palindrome(i * j) and i*j > m:
            m = i*j

print(m)
                    

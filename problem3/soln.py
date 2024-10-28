import math

def primes_to(n):
    primes = [2, 3, 5]
    for i in range(6, n):
        is_prime = True
        for p in primes:
            if i % p == 0:
                is_prime = False
        if is_prime:
            primes.append(i)
    return primes

n = 600851475143
# print([x for x in primes_to(int(math.sqrt(n))) if n % x == 0])
print([x for x in range(n) if n % x == 0])

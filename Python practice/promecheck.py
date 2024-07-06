def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num/2) + 1):
        if num % i == 0:
            return False
    return True

def find_prime(start, count):
    prime = []
    count_num = start + 1
    while len(prime) < count:
        if is_prime(count_num):
            prime.append(count_num)
        count_num += 1
    return prime

print(find_prime(1000, 100))

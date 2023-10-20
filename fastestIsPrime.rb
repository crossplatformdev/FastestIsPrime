def fastest_is_prime(n)
    (n % 2 == 1 && Math.sqrt(n) - Math.sqrt(n).to_i != 0) || n <= 2
end

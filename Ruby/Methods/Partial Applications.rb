combination = -> (n) do
    -> (r) do
        (1..r).inject(1) {|comb, i| comb * (n + 1 - i) / i}
    end
end

n = gets.to_i
r = gets.to_i
nCr = combination.(n)
puts nCr.(r)

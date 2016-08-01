# Enter your code here. Read input from STDIN. Print output to STDOUT
require "prime"
N = gets.to_i
p Prime.each.lazy.select {|prime| prime.to_s == prime.to_s.reverse}.first(N)

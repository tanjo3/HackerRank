#!/bin/ruby

t = gets.strip.to_i
(1..t).each do
    n = gets.strip.to_i
    puts (n * (n - 1)) >> 1
end

#!/bin/ruby

t = gets.strip.to_i
a = Math.log2((t + 2) / 3).floor
b = t - (3 * 2 ** a - 2)
c = 3 * 2 ** a - b

puts c

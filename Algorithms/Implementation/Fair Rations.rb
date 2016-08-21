#!/bin/ruby

N = gets.strip.to_i
B = gets.strip.split.map(&:to_i)

given = 0
B.each_with_index do |val, i|
    if !val.even?
        if i == B.length - 1
            given = -1
        else
            B[i + 1] += 1
            given += 2
        end
    end
end

puts (given < 0) ? "NO" : given

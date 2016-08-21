#!/bin/ruby

n = gets.strip.to_i
n.times do
    brackets = []
    sequence = gets.strip
    valid = true

    sequence.chars.each do |c|
        case c
        when '{'
            brackets.push('}')
        when '('
            brackets.push(')')
        when '['
            brackets.push(']')
        else
            if !brackets.empty? && brackets.last == c
                brackets.pop
            else
                valid = false
                break
            end
        end
    end

    if !brackets.empty?
        valid = false
    end

    puts valid ? 'YES' : 'NO'
end

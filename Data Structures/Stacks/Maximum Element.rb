# Enter your code here. Read input from STDIN. Print output to STDOUT
n = gets.strip.to_i
stack = []
max = []

n.times do
    q, x = gets.strip.split.map(&:to_i)

    case q
    when 1
        stack.push(x)
        if max.empty? || x > max.last
            max.push(x)
        else
            max.push(max.last)
        end
    when 2
        stack.pop
        max.pop
    else
        puts max.last
    end
end

# Enter your code here. Read input from STDIN. Print output to STDOUT
stack = [""]

gets.strip.to_i.times do
    op = gets.strip.split
    s = stack.last

    case op[0]
    when '1'
        stack.push(s + op[1])
    when '2'
        k = op[1].to_i
        stack.push(s[0..-k-1])
    when '3'
        puts s[op[1].to_i - 1]
    else
        stack.pop
    end
end

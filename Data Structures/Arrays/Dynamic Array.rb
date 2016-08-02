# Enter your code here. Read input from STDIN. Print output to STDOUT
args = gets.strip.split(' ').map(&:to_i)
seqList = Array.new(args[0]) {Array.new}

lastAns = 0
(1..args[1]).each do
    query = gets.strip.split(' ').map(&:to_i)

    seq = seqList[(query[1] ^ lastAns) % args[0]]
    if query[0] == 1
        seq.push(query[2])
    else
        lastAns = seq[query[2] % seq.size]
        puts lastAns
    end
end

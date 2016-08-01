# Enter your code here
def mask_article(string, words)
    temp = String.new(string)
    words.each {|word| temp.gsub!(word, strike(word))}
    return temp
end

def strike(string)
    return "<strike>#{string}</strike>"
end

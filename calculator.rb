# Max Base

def math_expression_eval(string_expression)
    eval(string_expression)
end

while true
    print "Enter math expression: "
    string_expression = gets.chomp
    puts string_expression
    puts math_expression_eval(string_expression)
end

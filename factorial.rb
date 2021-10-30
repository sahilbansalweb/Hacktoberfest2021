# Max Base

def factorial(n)
  if n == 0
    1
  else
    n * factorial(n-1)
  end
end

loop do
    puts "Enter a number to calculate factorial:"
    n = gets.chomp.to_i
    puts "Factorial of #{n} is #{factorial(n)}"
end

def pnumber?(num)
  return false if num < 2
  i = 2
  while i * i <= num
    return false if (num % i).zero?
    i += 1
  end
  true
end

a, b = gets.chomp.split(' ').map(&:to_i)

(a..b).each do |num|
  puts num if pnumber?(num)
end

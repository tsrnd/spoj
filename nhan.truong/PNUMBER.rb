a, b = gets.chomp.split(' ').map(&:to_i)
snt = []
result = []
def check_snt(n, snt)
  return true if snt.size.zero?
  snt.each do |s|
    break if s * s > n
    return false if n % s == 0
  end
  true
end

2.upto(a - 1) do |i|
  if check_snt(i, snt)
    snt << i
  end
end

a = a == 1 ? 2 : a

a.upto(b) do |i|
  if check_snt(i, snt)
    snt << i
    result << i
  end
end

puts result

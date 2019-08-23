n, w_max = gets.chomp.split(' ').map(&:to_i)
f = {}
1.upto(n) do |i|
  w, v = gets.chomp.split(' ').map(&:to_i)
  (0..w_max).each do |j|
    f[[i, j]] = f[[i - 1, j]].to_i
    f[[i, j]] = f[[i - 1, j - w]].to_i + v if (j >= w) && (f[[i, j]] < f[[i - 1, j - w]].to_i + v)
  end
end

puts f[[n, w_max]]

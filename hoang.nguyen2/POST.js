var line = readline();

function sum(line) {
  var arr = line.split(' ');
  return +arr[0] + +arr[1];
}

print(sum(line));

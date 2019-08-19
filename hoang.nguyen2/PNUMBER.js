let arr = readline().split(' ');
let a = +arr[0];
let b = +arr[1];
function isP(l) {
  switch (true) {
    case l < 2:
      return false;
      break;
    default:
      let c = 0
      for (let i = 2; i <= Math.sqrt(l); i++) {
        if (l % i === 0) {
          c++;
        }
      }
      return c === 0;
      break;
  }
}

for (let index = a; index <= b; index++) {
  if (isP(index)) {
    print(index);
  }
}

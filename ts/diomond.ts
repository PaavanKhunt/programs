function diamond(n: number) {
  let str = "";
  // let middle = n % 2 === 0 ? n / 2 : (n + 1) / 2;
  let middle = n ;

  for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n - i; j++) {
      str += " ";
    }
    for (let k = 1; k <= 2 * i - 1; k++) {
      if (k == 1 || k === 2 * i - 1) {
        str += "*";
      }  else if (i === n) {

        if (k === middle) {
          str += "*";
        } else {
          str += " ";
        }

      }
      // else if (i > 1 && i < n) {
      //   if (k === 2 * i ) {
      //     str += "|";
      //   } else {
      //     console.log(k);

      //     str += "|";
      //   }
      // }
      else {
        str += " ";
      }
    }
    str += " \n";
  }
  for (let i = n - 1; i >= 1; i--) {
    for (let j = 1; j <= n - i; j++) {
      str += " ";
    }
    for (let k = 1; k <= 2 * i - 1; k++) {
      if (k == 1 || k ===2 * i - 1 ) {
        str += "*";
      } else {
        str += " ";
      }
    }
    str += " \n";
  }
  return str;
}

console.log(diamond(10));

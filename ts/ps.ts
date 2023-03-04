const input = [
  { id: 1, amount: 1000 },
  { id: 2, amount: 2000 },
  { id: 3, amount: 1000 },
];

// const output = [{ id: 1, amount: 3000 }, { id: 2, amount: 1000 }]

const output = input.reduce((acc, curr, index, arr) => {
  if (index % 2 === 0) {
    const pair = arr.slice(index, index + 2);
    const sum = pair.reduce((acc, curr) => acc + curr.amount, 0);
    acc.push({ id: index === 0 ? 1 : index, amount: sum ?? 0 });
  }
  return acc;
}, []);

console.log(output);

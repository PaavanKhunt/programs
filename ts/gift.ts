const people: string[] = [
  "Amanda",
  "Andrew",
  "Anna",
  "Ben",
  "Boris",
  "Catherine",
  "David",
  "Diana",
  "Edward",
  "Elizabeth",
  "Emma",
  "Fiona",
];

const assignGifts = (people: string[]) => {
  const gifts = [...people];

  const giftsAssigned = people.map((person) => {
    gifts.splice(gifts.indexOf(person), 1);

    let gift = gifts[Math.floor(Math.random() * gifts.length)];
    gifts.splice(gifts.indexOf(gift), 1);

    gifts.push(person);

    return { person, gift };
  });
  return giftsAssigned;
};
console.log(assignGifts(people));

const a = [{ a:10},{ b:10}, {c:10}, {d:10}, {e:10}];
const b = [{c:15}, {d:15}, {t:15}, {u:15}, {e:15}];

const merge = (a, b) => {
  const keys = [...new Set([...a.map(Object.keys), ...b.map(Object.keys)].flat())];

  return keys.map(key => ({ [key]: b.find(x => x[key])?.[key] ?? a.find(x => x[key])?.[key] }));
};

console.log(merge(a, b));

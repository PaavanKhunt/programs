const s = 'barfoothefoobarman';
const words = ['foo', 'bar'];

function findSubstring(s: string, words: string[]): number[] {
  const result: number[] = [];

  const wordLength = words[0].length;
  const wordCount = words.length;
  const totalLength = wordLength * wordCount;

  const wordMap = words.reduce((acc, word) => {
    acc[word] = acc[word] ? acc[word] + 1 : 1;
    return acc;
  }, {} as { [key: string]: number });

  for (let i = 0; i < s.length - totalLength + 1; i++) {
    const checked: { [key: string]: number } = {};

    for (let j = 0; j < wordCount; j++) {
      const word = s.substr(i + j * wordLength, wordLength);

      if (!wordMap[word]) {
        break;
      }

      checked[word] = checked[word] ? checked[word] + 1 : 1;

      if (checked[word] > wordMap[word]) {
        break;
      }
    }

    if (Object.keys(checked).length === Object.keys(wordMap).length) {
      result.push(i);
    }
  }

  return result;
}

console.log(findSubstring(s, words));

interface Input {
  name: string;
  children?: Input[];
}

const input = {
  name: 'name1',
  children: [
    {
      name: 'name2',
      children: [
        {
          name: 'name3',
        },
        {
          name: 'name4',
          children: [
            {
              name: 'name3',
            },
          ],
        },
      ],
    },
    {
      name: 'name5',
    },
    {
      name: 'name6',
      children: [
        {
          name: 'name7',
        },
      ],
    },
  ],
};

const output: string = `
name1
|- name2
|  |- name3
|  \- name4
|- name5
\- name6
  \- name7`;

const getOutput = (obj: Input, level = 0, children = false): string => {
  const { name, children: childrens } = obj;

  const prefix = ' '.repeat(level * 2);
  let result = '';

  if (level === 0) {
    result = `${name}\n`;
  } else {
    result = `${prefix}${children ? '|- ' : '\\- '}${name}\n`;
  }

  if (childrens) {
    return (
      result +
      childrens
        .map((child, index) =>
          getOutput(child, level + 1, index !== childrens.length - 1)
        )
        .join('')
    );
  }

  return result;
};

console.log(getOutput(input));

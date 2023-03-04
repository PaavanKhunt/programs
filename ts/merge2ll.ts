// Singly linked lists are already defined with this interface:
class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// Double linked lists are already defined with this interface:
class DoubleLinkedList {
  val: number;
  next: DoubleLinkedList | null;
  prev: DoubleLinkedList | null;
  constructor(
    val?: number,
    next?: DoubleLinkedList | null,
    prev?: DoubleLinkedList | null
  ) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
    this.prev = prev === undefined ? null : prev;
  }
}

function mergeTwoLists(
  l1: ListNode | null,
  l2: ListNode | null
): ListNode | null {
  if (!l1) return l2;
  if (!l2) return l1;

  if (l1.val < l2.val) {
    l1.next = mergeTwoLists(l1.next, l2);
    return l1;
  } else {
    l2.next = mergeTwoLists(l1, l2.next);
    return l2;
  }
}

const list = [1, 2, 4, 7];

const list2 = [1, 3, 4];

const l1: ListNode[] = list.map((item) => new ListNode(item));

const l2: ListNode[] = list2.map((item) => new ListNode(item));

l1.forEach((item, index) => {
  item.next = l1[index + 1];
});

l2.forEach((item, index) => {
  item.next = l2[index + 1];
});

const logOutput = (node: ListNode | null): number[] => {
  const result: number[] = [];

  while (node) {
    result.push(node.val);
    node = node.next;
  }

  return result;
};

console.log(logOutput(mergeTwoLists(l1[0], l2[0])));

function mergeTwoLists2(l1: ListNode | null, l2: ListNode | null): number[] {
  if (!l1) return logOutput(l2);
  if (!l2) return logOutput(l1);

  if (l1.val < l2.val) {
    return [l1.val, ...mergeTwoLists2(l1.next, l2)];
  } else {
    return [l2.val, ...mergeTwoLists2(l1, l2.next)];
  }
}

function mergeTwoDoubleLinkedLists(
  l1: DoubleLinkedList | null,
  l2: DoubleLinkedList | null
): DoubleLinkedList | null {
  if (!l1) return l2;
  if (!l2) return l1;

  if (l1.val < l2.val) {
    l1.next = mergeTwoDoubleLinkedLists(l1.next, l2);
    if (l1.next) {
      l1.next.prev = l1;
    }
    l1.prev = null;
    return l1;
  } else {
    l2.next = mergeTwoDoubleLinkedLists(l1, l2.next);
    if (l2.next) {
      l2.next.prev = l2;
    }
    l2.prev = null;
    return l2;
  }
}

const doubleList = [1, 2, 4, 7];

const doubleList2 = [1, 3, 4];

const dl1: DoubleLinkedList[] = doubleList.map(
  (item) => new DoubleLinkedList(item)
);

const dl2: DoubleLinkedList[] = doubleList2.map(
  (item) => new DoubleLinkedList(item)
);

dl1.forEach((item, index) => {
  item.next = dl1[index + 1];
  item.prev = dl1[index - 1];
});

dl2.forEach((item, index) => {
  item.next = dl2[index + 1];
  item.prev = dl2[index - 1];
});

const logOutput2 = (node: DoubleLinkedList | null): number[] => {
  const result: number[] = [];

  while (node) {
    result.push(node.val);
    node = node.next;
  }

  return result;
};

console.log(logOutput2(mergeTwoDoubleLinkedLists(dl1[0], dl2[0])));

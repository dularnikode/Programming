class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

let head = new Node(1);
const middle = new Node(2);
const tail = new Node(3);

// Link the nodes
head.next = middle;
middle.next = tail;
// Print the linked list

function printLinkedList (head){
    let temp = head;
    while(temp !== null){
        console.log(temp.data);
        temp = temp.next;
    }
}

function insertAtstartOfLinkedList (val){
    let newNode = new Node(val);
    newNode.next = head;
    head = newNode;
}

function insertLast (val){
    let newNode = new Node(val);
    if(head === null){
        head = newNode;
    }else{
        let lastNode = head;
        while(lastNode.next !== null){
            lastNode = lastNode.next;
        }
        lastNode.next = newNode;
    }

}


// printLinkedList(head);
// insertAtstartOfLinkedList(0)
// printLinkedList(head)

insertLast(20);
printLinkedList(head);

let isDone: boolean = false;
let decimal: number =6;

/* following data types will always log results to decimal*/
let hex: number = 0xf00d;
let binary: number = 0b1010;
let octal: number = 0o744;
let big: bigint = 100n;
//
let word : string = "Dular";
let sentence: string = `Hello i love you ${word}`;

//console.log(sentence[0]);

/*Arrays*/

let list : number[]= [1,2,3]

//generics array
let list1:Array<number>=[1,2,3,4]; 

/**Tuples**/ 
//it saves elemets of diffent data type
let x:[string,number];
x=['Hello',10];

/*Enum*/

enum Color {
    Red=1,
    Green=2,
    Blue=3
}
let c:Color = Color.Blue;//Displays 3

let colorName:String = Color[2]; //Displays Green

/*UnKnown */
//We may need to describe the type of variables that we do not know when we are writing an application. These values may come from dynamic content – e.g. from the user – or we may want to intentionally accept all values in our API
let notSure:unknown  =4;
notSure = "may be a string instead";
notSure=false;//it may be boolean


declare const maybe:unknown;
//const aNumber:number = maybe;//unknown Type is not assignabel to any other type

/*Any*/ /** The any type is a powerful way to work with existing JavaScript, allowing you to gradually opt-in and opt-out of type checking during compilation.*/

//In some situations, not all type information is available or its declaration would take an inappropriate amount of effort
//declare function getValue(key: string): any;// OK, return value of 'getValue' is not checked
//const str:string = getValue("myString");


/**Void  */
//void is a little like the opposite of any: the absence of having any type at all. You may commonly see this as the return type of functions that do not return a value:

function warnUser():void{
    console.log("This is my warning message");
}


warnUser();

/**Null and Undefined*/
//In TypeScript, both undefined and null actually have their types named undefined and null respectively. Much like void, they’re not extremely useful on their own:

let u: undefined =undefined ;
let n:null =null;

// #Note :- By default null and undefined are subtypes of all other types. That means you can assign null and undefined to something like number.

/**Never */
//The never type represents the type of values that never occur.


function printLabel(labeledObj:{label:string}){
    console.log(labeledObj.label);
}

let myObj ={size:10,label:"Size 10 Object"};
printLabel(myObj);



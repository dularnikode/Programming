// ts => Transpilation => Javascript
// 
let sales: number = 123_12345_679;
let course:string = 'Typescript';
let level ;
let arr : number[] = [];
let newarr : (number | string)[] = []; 
newarr.push(1);
newarr.push("dular");
// newarr.push(true); // Invalid
//Touple
let user : [number , string] = [1 , "Dular"];

// enum
const small = 1;
const medium  = 2;
const large  = 3 ;

enum Size {
    Small = 1 , Medium=2 , Large =3
}

// Function
function calculateTax(income : number) : number{
    if(income < 50_000){
        return Size.Small;
    }
    return 0;
}

//Object

let employee : {
    readonly id : number,
    name: string,
    fax?: string,
    retire : (date: Date )=> void
} = {id : 1 , name : 'Dular' , retire : (date : Date)=>{
    console.log("date" , date);
}};
employee.name  = 'Mosh';
employee.retire(new Date());


// Type Alias
type  Employee = {
    readonly id : number,
    name: string,
    fax?: string,
    retire : (date: Date )=> void
}
let newEmployee : Employee = {
    id : 3,
    name : "Dular",
    retire : (date: Date)=>{
        console.log("data");
    }
}

// Union types

function kgToLbs(weight :  number | string) : number {
    if(typeof weight === 'number'){
        return weight * 2.2; // Type narrowing
    }else{
        return parseInt(weight) * 2.2;
    }
}

kgToLbs(10);
kgToLbs("10");

// Intersection Types
let weight :  number & string;
type Draggable = {
    drag : () => void
}

type Resizable = {
    resize : () => void
}

type UIWidget = Draggable & Resizable;


let texBox : UIWidget ={
    drag : ()=>{
        console.log("drag");
    },
    resize : ()=>{
        console.log("resize");
    }
}

// Literal Types (exact , Specific)
type Quantiy = 50 | 100;
let quantity : Quantiy = 100;
type Metric = 'cm' | 'inch';

type Customer = {
    birthday : Date
}

function getCustomer(id :number) : Customer | null | undefined {
    return id === 0 ? null : {birthday : new Date()};
}

let customer  = getCustomer(0);
console.log(customer?.birthday); // Optional Property access operator



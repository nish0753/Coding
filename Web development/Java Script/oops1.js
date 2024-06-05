/**const Person ={
    name: " Nishant",
    age: 21,
    city: "Patna"
}
console.log(typeof Person)

console.log(Person)

const user ={
    1: "Nishant",
    2: "Kumar",
    3: "Ankit",
}
console.log(user)

// java script sirf string ko accept krta hai but yha pe integer dene ke bad v shi run ho rha hai kyu wo integer kop string me convert kr rha hai
const Person ={
    name: "Nishant",
    age: 21,
    greet : function (){
        console.log("Hello students")

    }
}
console.log(Person)

//2nd way of creating object using Object constructor
const obj= new Object()
console.log(obj)

//3rd way of creating function using function
function emp(id,name ,salary){
    this.id =id;
    this.name =name;
    this.salary =salary;
}

const emp_obj =new emp(1, "Nishant", 70000)
console.log(emp_obj)

const student ={
    name: "Nishant",
    age:19,
    address : {
        city: "Patna",
        state: "Bihar",
        Pincode: 80005   
    }
}
//to read the property of the students
console.log(student.name, student.age)
// using the bracket notation
console.log(student["name"])
console.log(student.address.city.Pincode)
*/

const person ={}

person.name ="Nishant",
person.hobby ="Cricket",
person["Country"]= "India",
console.log(person)

person.name="Ankit"//update the fields of the objects
console.log(person)
//Delete the fields
delete person["name"];
console.log(person)

delete person;
console.log(person)
// in built method of object



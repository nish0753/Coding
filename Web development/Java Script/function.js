/** 
function greet_student(){
    console.log("hii")

console.log("welcome to the 7 pm class")
console.log("Keep learning")

}
greet_student()

function sum(a,b){
    console.log("inside the sum function")
    return a+b
}
console.log(sum(5,6))

//write a function for factorial
function fact(num){
    if(num==0 || num==1){
        return 1
    }
    result =1
    for(i=1; i<=num; i++){
        result =result*i;
    }
    return result
}
console.log(fact(5))

const hello_func =function (){
    console.log(" Hello students!")
}
hello_func()
const sum_fuc =function (a,b){
    return a+b
}
console.log(sum_fuc(5,6))

function operate(a,b,fn){
    console.log(fn(a,b))

}
function sum2(a,b){
    return a+b
}
operate(5,6,sum2)

function return_greet_fn(){
    return function(){
        console.log(" hello students")
    }
}
return_greet_fn()();

function sum(a,b,c){
    return a+b;
}
console.log(sum(5,6))
*/
function sum(){
    console.log(arguments)
    let sum =0
    for(i=0; i<arguments.length; i++){
        sum=sum + arguments[i]
    }
    return sum

}

console.log (sum(5,6));
console.log (sum(5,6,7,8));

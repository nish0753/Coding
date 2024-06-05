/** 
arr= [2,3,4,5,6]
console.log(arr)

console.log(arr.pop())
console.log(arr.push(11))
console.log(arr)

fruits = ["Mango", "Apple", " Papaya"]
f=fruits.pop()
console.log(f)

fruits.push("Watermelon")
console.log(fruits)

//remove fromthe first position
arr =[5,2,1,9,7,6]
x = arr.shift()//shift left by one postion
console.log(x)
console.log(arr)
y=arr.unshift(23)
console.log(y)
console.log(arr)

//concatenate the arrays
arr1 =[3,4,5,6 ]
arr2 =[ 7,8,9,6]

arr =arr1.concat(arr2)
console.log(arr)
console.log(arr.length)
arr_new = arr1+ arr2// create a new string
console.log(typeof arr_new)
console.log(arr_new)

//join method
let fruits =["Apple", " Banana", "Carrot"]
let result = fruits.join()
console.log (result)
console.log(typeof result)

let result2= fruits.join("_")
console.log(result2)

arr =[1,2,3,4]
console.log(arr.join())

//slicing(used for removing elements)
let arr = [5,7,1,2,9,11,15,12,6]
sliced_arr = arr.slice(2,5);
console.log(arr)
console.log(sliced_arr)
console.log(arr.slice())//if no argument , then no action -- entire array will be returned
console.log(arr.slice(2)) // take out the array starting from 2nd index
console.log(arr.slice(0,4))

console.log(arr.slice(-4,-1))

//splice () method
arr =[3,2,1,4,5,9,11,8]

arr.splice(4,1,51)
console.log(arr)
*/
//sorting

/*arr =[5,4,1,2,9,11]

arr.sort((a,b)=> b-a)//to sort in reverse order
console.log(arr)
*/
arr =[3,2,1,4,5,9,11,8,35,99079,9097,497]
arr.sort((a,b)=> a-b)
console.log(arr)




 /*let arr_nums =[1,2,3,4,5]
 console.log(arr_nums)

//Find the elements in the give index
 console.log(arr_nums[0])
 console.log(arr_nums[2])
 console.log(arr_nums[4])
 //finding the length of array
 console.log(arr_nums.length)
 //deleting the element from an array
 
 arr =[1,2,3,4,5,6,]
 console.log(arr)
 for(i=0; i<arr.length; i++){
    console.log(arr[i])
 }*/
 function sum_arr(arr){
    sum=0
    for(i=0; i<arr.length; i++){
        sum= sum + arr[i]
    }
    return sum;
 }
 console.log(sum_arr([3,4,5,6]))

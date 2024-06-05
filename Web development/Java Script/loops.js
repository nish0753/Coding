/*console.log('hello srudents!!')
// for loops
for(i=0; i<10; i++){
    console.log("hello students!!")
}
//loops in the decrementing order
for(i=10; i>0; i--){
    console.log(i)
    console.log("hello students!")
}

// 1 to 20 ,print all the even number
for(i=0; i<20; i++){
    if(i%2==0){
        console.log(i)
    }
}

for(i=2; i<20; i=i+2){
    console.log(i)
}

for(i=0,j=10; i<j; i++,j--){
    console.group("hello students , i ,i,:" +i + " ,"+ j)
}

//Nested Loop
for(person= 1; person<=5; person++){
    console.log("Welcome person "+ person)
    for(food=1; food<=7; food++){
        console.log("feeding food item"+ food)
    }
}

for(row=1; row<=5; row++){
    row_content =" "
    for(col=1; col<=5; col++){
        row_content = row_content + " * "
    }
    console.log(row_content)
}

for(row=1; row<=5; row++){
    for(col=1; col<=row; col++){
        process.stdout.write(" * ")
    }
    console.log()
}

for(row=5; row>=1; row= row-1){
    for(col=1; col<=row; col++){
        process.stdout.write(" * ")
        }
        console.log()
}
//break 
for(i=1; i<=5; i++){
    if(i==3){
        break;
    }
    console.log("please have food")
}
console.log("using continue")
//continue
for(i=1; i<=5; i++){
    if(i==3){
        continue
    }
    console.log("please have food")
}

//While loop
let age=10
while(age<19){
    console.log("Drinking is not allowed")
    age++;
}
**/
right_swaps=10 //3/7/9
while(right_swaps >=0){
   
    if(right_swaps ==3 || right_swaps == 7||right_swaps ==9){
        right_swaps =right_swaps-1;
        continue;
    }
    right_swaps =right_swaps-1;
    console.log(" keep swiping right")
}
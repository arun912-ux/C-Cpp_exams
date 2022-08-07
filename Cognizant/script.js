

let n = 1001;
let primearr = Array();


function isPrime(n){

    if(n < 2){
        return false;
    }

    for(let i=2; i< n/2 + 1; i++)
        if(n%i==0)
            return false;
        

    return true;

}



for(let i=2; i<n; i++){
    if(isPrime(i)){
        primearr.push(i);
    }    
}    

// console.log(primearr)
uglyfactors = [2, 3, 5];

try{
    let t=n;
    let i=0;
    while(t != 1){

        
        if(t % primearr[i] == 0){
            // console.log(t + " : " + primearr[i]);
            if(! uglyfactors.includes(primearr[i])){
                console.log(n + " is not an ugly number");
                return ;
            }
            t = t/primearr[i];
        }else{
            i++;
        }

    }



    console.log(n + " is an ugly number");


}catch(err){
    console.log(err);
}



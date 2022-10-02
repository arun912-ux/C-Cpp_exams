
let request = require('request');

function doit(resp){
    console.log(resp.per_page);
    perpage = resp.per_page;
    pages = resp.total;
    currpage = resp.page;
    
    
}



let resp=1;

function search(page){
    let options = {
    'method': 'GET',
    'url': 'http://jsonmock.hackerrank.com/api/medical_records?page='+page 
    };
    request(options, function (error, response) {
        if (error) throw new Error(error);
        // console.log(response.body);
        let jsn = JSON.parse(response.body)
        doit(jsn)
        resp = jsn.total;
    });

}

search(1)

console.log(resp);

// for (let i=0; i<resp; i++){
//     search(i);
// }

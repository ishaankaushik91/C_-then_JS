let Data = [1, 21, 1, 2, 2, 2, 10, 2];


Data.forEach((ele)=> {
    if (ele % 2 == 0)
    {
        Data.pop();
    }
})

console.log(Data);
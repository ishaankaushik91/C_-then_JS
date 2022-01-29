let words = ["spray", "limits", "exubearnt", "destruction"];
let result = [];
words.forEach((elem) => {
    result.push(elem[0].toUpperCase() + elem.substring(1));
})
console.log(result);
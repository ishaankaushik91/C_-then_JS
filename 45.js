// Printing matrix (RECURSION)
let Ben =
    [[1, 2, 3],
    [4, 5, 6]];

Matrix(0, 0, Ben);

function Matrix(i, j, Omnitrix = [[], []]) {
    if (i < 2) {
        for (let k = 0; k < 3; k++) {
            console.log(Omnitrix[i][k]);
        }
        return Matrix(i + 1, j, Omnitrix);
    }
}
const fis = require("./public/a.wasm.js");


function add() {

    console.log('c add: 5 + 5 is : ' + fis._c_add(5, 5));
}

var result = fis.onRuntimeInitialized = () => {

    add()
}

// the main function of the c program is called "automatically" because this in the generated clue code a.wasm.js
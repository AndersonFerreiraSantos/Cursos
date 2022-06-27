function a() {
    console.log("executando a()")
}
function b() {
    console.log("Executando b()")
}

function c() {
    console.log("Executando c()")
    b()
    a()
}

b()
c()
a()
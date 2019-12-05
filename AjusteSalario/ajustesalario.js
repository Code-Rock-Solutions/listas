let salario = [1000,2000,3050]
let salario_minimo = 1000

for (let i = 0; i < salario.length; i++) {
  salario[i] = ajuste(salario[i])
}

function ajuste(salario) {
    if(salario<=salario_minimo){
        return salario*1.5
        
    }

    if(salario>salario_minimo & salario<salario_minimo*3){
        return salario*1.25
    
    } 
    if(salario>=salario_minimo*3){
       return parseInt( salario*1.1)
    
    }
}
console.log(salario) 
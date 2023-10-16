function inss(salario) {
  if (salario <= 1320) return (salario * 7.5) / 100;
  else if (salario <= 2571.29) return (salario * 9) / 100;
  else if (salario <= 3856.94) return (salario * 12) / 100;
  else if (salario <= 7507.49) return (salario * 14) / 100;
  else return (salario * 14) / 100;
}

function irrf(salario) {
  return 0;
}

console.log(inss(1000));
console.log(inss(2000));
console.log(inss(3000));

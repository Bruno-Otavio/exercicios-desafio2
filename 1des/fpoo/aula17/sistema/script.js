class Person {
  constructor(name, salario) {
    this.name = name;
    this.salario = salario;
  }

  inss() {
    if (this.salario < 1320.01) return (this.salario * 7.5) / 100;
    else if (this.salario < 2571.3) return (this.salario * 9) / 100;
    else if (this.salario < 3856.95) return (this.salario * 12) / 100;
    else if (this.salario < 7507.49) return (this.salario * 14) / 100;
    else return 1051.05;
  }

  irrf() {
    if (this.salario < 1903.99) return 0;
    else if (this.salario < 2826.66) return (this.salario * 7.5) / 100 - 142.8;
    else if (this.salario < 3751.06) return (this.salario * 15) / 100 - 354.8;
    else if (this.salario < 4664.69)
      return (this.salario * 22.5) / 100 - 636.13;
    else return (this.salario * 27.5) / 100 - 869.36;
  }

  showHTML() {
    let string = `
      <label>Nome:</label><label>${this.name}</label>
      <label>Salário Base:</label><label>${this.salario}</label>
      <label>Salário Líquido:</label><label>${
        this.salario - this.inss() - this.irrf()
      }</label>`;

    return string;
  }
}

const table = document.querySelector("#employees-table");

// const employees = [];

function addEmployees() {
  let name = document.querySelector("#name").value;
  let salary = Number(document.querySelector("#salary").value);
  const employee = new Person(name, salary);

  const div = document.createElement("div");
  div.innerHTML = employee.showHTML();
  console.log(div);
  console.log(table);
  table.appendChild(div);

  // employees.push(employee);
}

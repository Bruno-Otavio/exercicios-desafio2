class Pet {
  constructor(name, age, owner) {
    this.name = name;
    this.age = age;
    this.owner = owner;
  }

  food_information(food) {}

  sleep() {}
}

class Cat extends Pet {
  constructor(name, age, owner, race) {
    super(name, age, owner);
    this.race = race;
  }

  race() {
    console.log(this.name);
  }
}

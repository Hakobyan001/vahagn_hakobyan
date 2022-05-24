// coding chalenge 1
class Car{
    constructor(mark,speed) {
      this.mark = mark;
      this.speed = speed;
        }
        gas(){
          return this.speed += 5;
        }
        break(){
            return this.speed -= 5;
      }
    }
    const bmw = new Car('Bmw',120);
    const merc = new Car('Mercedes',95)
    console.log(bmw.break())
    console.log(bmw.break())
    console.log(bmw.break())
    console.log(bmw.break())
    console.log(merc.gas())
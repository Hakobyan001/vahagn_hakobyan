class Square{
    static Completed(a,b,c){
        let d = 0;1
        d = b * b - 4 * a *c;
        let x1;
        let x2;
        console.log("Completed Quadratic equation:");
        if(typeof(c) != 'number' || typeof(a) != 'number' || typeof(b) != 'number'){
            return "Error. Input the number."
        }          
        else {
            if(d > 0){
                x1 = (-b+Math.sqrt(d))/(2*a);
                x2 = (-b-Math.sqrt(d))/(2*a);
                
                return {x1, x2};
            }
                else if(d === 0){
                    x1 = -b / 2 * a;
                        return {x1}
                }
                    else{
                        return {d}
                }
            }
        }    
        constructor (a,b,c){
        this.a = a,
        this.b = b,
        this.c = c
        }    
        Incomplete(){
            let d = 0;
            let x1,x2;          
            console.log("Incompleted Quadratic equation:");
            if(typeof(this.c) != 'number' || typeof(this.a) != 'number' || typeof(this.b) != 'number'){
                return "Error. Input the number."
            }         
            else{ 
            if(this.c === 0 && this.b === 0){
                x1 = 0;
                return {x1} 
            }else if(this.b === 0){
                x1 = -Math.sqrt(this.c/this.a);
                return {x1};
            }else if(this.c === 0){
                x1 = -this.b/this.a;
                x2 = 0;
                return {x1 , x2};
                }
            }
        }
    }        
    class Pyutagoras extends Square{
        constructor(q,w,e){
            super(),
            this.q = q,
            this.w = w,
            this.e = e
        }
        Pyuto(){
            if(Math.pow(this.e,2)===(Math.pow(this.w,2)) + (Math.pow(this.q,2))){
                return this.q + '  '+ this.w + ' ' + ' ' + this.e + "  This numbers is Pythagorean Triple."
            }else{
                return "This numbers isn't a Pythagorean Triple, because " + (Math.pow(this.w,2) + ' + ' + Math.pow(this.q,2) + ' = ' + (Math.pow(this.w,2) + (Math.pow(this.q,2)) + "  != " + Math.pow(this.e,2)))
            }    
        }
        static Circle(r){
            let s1, s2;
            let p = 3.14;
            s1 = r * r;
            s2 = p * r * r;
            return "Your circle area is  " + s1 + "п. This is with п.\n Without п will be  " + s2;
        }         
    }
    const Nice = new Square(5,5,0)       
    console.log(Nice.Incomplete())
    console.log(Square.Completed(2,8,5));
    console.log(Pyutagoras.Circle(5));
    const Pyut = new Pyutagoras(6,9,10)
    console.log(Pyut.Pyuto())
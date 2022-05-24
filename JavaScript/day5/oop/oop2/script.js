class Rocket{
    constructor(speed){
        this.speed=speed;
     }
     start(){
         console.log("The Rocket is ready for start. The coutdawn is starting.")  
         setInterval(() => {
           console.clear(); 
         }, 6000);
         function Int(){
             for(let i = 5; i > 0; i--){
                 console.log(i);
                 setTimeout(function() {console.clear}, 5000);
             }
         }
         setInterval(() => {
             Int();
         }, 6000);
         setInterval(() => {
             console.clear(); 
         }, 8000);
     }
     gas(){
        setTimeout(
            function() {console.log("The Rocket is upgrading to the Second transmission speed.")}
                ,10000)
         function Int2(){
             for(let i = 0;i < 4000;i++){
                while(speed1.speed < i){
                        console.log(speed1.speed = speed1.speed + 100);
                        setTimeout(function() {console.clear}, 12000);
                        }   
                     }
                 }
             setInterval(() => {
                Int2()
             }, 11000);    
             setInterval(() => {
                 console.clear()
                 }, 12000);
                 console.log(speed1.speed);
    }
     land(){
        setTimeout(function() {console.log("The Rocket is coming back to the earth for landing.")}
            ,12000);            
        setTimeout(function() {console.log("Congratulations. The Rocket is landed successfully.")}
        ,14000);
        }
    }
const speed1 = new Rocket(100);
speed1.start();
speed1.gas();
speed1.land();


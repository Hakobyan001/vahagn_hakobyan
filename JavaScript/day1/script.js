/*window.onload = function(){
    for(let i = 0; i < 9;i ++){
        document.getElementById('game').innerHTML+='<div class = "block"></div>';
        }
        let a = 0;
        document.getElementById('game').onclick = function(){
            if(event.target.className == "block") {
                console.log(event.target);
                if(a % 2 == 0) {
                    event.target.innerHTML = 'X';
                }else {
                    event.target.innerHTML = 'O';
                }
                a ++;
                win();
            }
        }
    
    function win() {
        let tar = document.getElementsByClassName("block");
        //console.log(tar);    
    if(tar[0].innerHTML == 'X' && tar[1].innerHTML == 'X' && tar[2].innerHTML == 'X') {
        alert("Победили крестики");
       }
    }
*/
window.onload = function () {
 
    for (let i=0; i<9; i++) {
        
        document.getElementById('game').innerHTML+='<div class="block"></div>';
    }
     
        var hod = 0;
        document.getElementById('game').onclick = function() {
            //console.log("qlo");
            if (event.target.className == 'block') {
            if (hod%2==0){
                event.target.innerHTML = 'X';
            }
                else {
                    event.target.innerHTML = 'O';
                    }
                    hod++;
            checkWinner();
                }
        }
    
        function checkWinner() {
            var allblock = document.getElementsByClassName('block');
  //          console.log(allblock);
            
            
    
        if (allblock[0].innerHTML=='X' && allblock[1].innerHTML=='X' && allblock[2].innerHTML=='X') {
             alert("WInner");
            }     
        }
    }
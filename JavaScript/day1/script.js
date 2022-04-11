window.onload = function() {
  for (let i = 0; i < 9; i++) {
    document.getElementById('game').innerHTML += '<div class = "block"></div>';
  }
  let a = 0;
  document.getElementById('game').onclick = function() {
    if (event.target.className == "block") {
      console.log(event.target);
      if (a % 2 == 0) {
        event.target.innerHTML = 'X';
      } else {
        event.target.innerHTML = 'O';
      }
      a++;
      Winner();
      if (a === 9) {
        alert("For Restarting reload page");
      }
    }
  }

  function Winner() {
    let tar = document.getElementsByClassName("block");
    //console.log(tar);    
    if (tar[0].innerHTML == 'X' && tar[1].innerHTML == 'X' && tar[2].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[3].innerHTML == 'X' && tar[4].innerHTML == 'X' && tar[5].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[3].innerHTML == 'X' && tar[4].innerHTML == 'X' && tar[5].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[0].innerHTML == 'X' && tar[3].innerHTML == 'X' && tar[6].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[1].innerHTML == 'X' && tar[4].innerHTML == 'X' && tar[7].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[2].innerHTML == 'X' && tar[5].innerHTML == 'X' && tar[7].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[0].innerHTML == 'X' && tar[4].innerHTML == 'X' && tar[8].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    if (tar[2].innerHTML == 'X' && tar[4].innerHTML == 'X' && tar[6].innerHTML == 'X') {
      alert("<X> is the winner");
    }
    //0000000000000000000000000
    if (tar[0].innerHTML == 'O' && tar[1].innerHTML == 'O' && tar[2].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[3].innerHTML == 'O' && tar[4].innerHTML == 'O' && tar[5].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[3].innerHTML == 'O' && tar[4].innerHTML == 'O' && tar[5].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[0].innerHTML == 'O' && tar[3].innerHTML == 'O' && tar[6].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[1].innerHTML == 'O' && tar[4].innerHTML == 'O' && tar[7].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[2].innerHTML == 'O' && tar[5].innerHTML == 'O' && tar[7].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[0].innerHTML == 'O' && tar[4].innerHTML == 'O' && tar[8].innerHTML == 'O') {
      alert("<O> is the winner");
    }
    if (tar[2].innerHTML == 'O' && tar[4].innerHTML == 'O' && tar[6].innerHTML == 'O') {
      alert("<O> is the winner");
    }
  }
}


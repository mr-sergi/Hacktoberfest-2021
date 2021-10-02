<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-F3w7mX95PdgyTmZZMECAngseQB83DfGTowi0iMjiWaeVhAn4FJkqJByhZMI3AhiU" crossorigin="anonymous">

    <title>Know Your Current Time & Date</title>
    <style>
      #m{
        text-width:100px;
      }
        
    .jumbotron{
      
      position:absolute;
      left:50%;
      top:50%;
      transform:translate(-50%,-50%);
      width:50%;
      border: 2 px solid black;
      text-align:center;
      background-color:white;
      box-shadow: 30px 30px 30px gray;
      }
      body{
        background-image:url("Clockk.png");
     background-repeat: no-repeat;
  background-attachment: fixed;  
  background-size: cover;
        
}
      img {
  opacity: 0.5;
}
      }
      div.jumbotron:hover{
      transform:scale(2,2);
        transition:1s;
      }
    </style>
    <script>
      let a;
      let date;
      let time;
      setInterval( () =>{
        
     a= new Date();
       date= a.toLocaleDateString();
      time= a.getHours() + ':' + a.getMinutes() +':' + a.getSeconds();
      document.getElementById("time").innerHTML=  time + " " +  +" "  + date;
      },1000);
    </script>
  </head>
  <body>
   
      <div class="jumbotron">
        <h1 class="display-4"><b>Current Time & Date Is: <span id="time"></span></b></h1>

  <hr class="my-4">
        <p id="m"><b>Using this website you can see the Current Time & Date</b></p>
  <p class="lead">
    
  </p>
    </div>
    <!-- Optional JavaScript; choose one of the two! -->

    <!-- Option 1: Bootstrap Bundle with Popper -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/js/bootstrap.bundle.min.js" integrity="sha384-/bQdsTh/da6pkI1MST/rWKFNjaCP5gBSY4sEBT38Q/9RBh9AH40zEOg7Hlq2THRZ" crossorigin="anonymous"></script>

    <!-- Option 2: Separate Popper and Bootstrap JS -->
    <!--
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.3/dist/umd/popper.min.js" integrity="sha384-W8fXfP3gkOKtndU4JGtKDvXbO53Wy8SZCQHczT5FMiiqmQfUpWbYdTil/SxwZgAN" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/js/bootstrap.min.js" integrity="sha384-skAcpIdS7UcVUC05LJ9Dxay8AXcDYfBJqt1CJ85S/CFujBsIzCIv+l9liuYLaMQ/" crossorigin="anonymous"></script>
    -->
  </body>
</html>

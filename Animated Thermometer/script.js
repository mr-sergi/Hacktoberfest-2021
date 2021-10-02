// {/* <span id="temp" class="fa"></span> */}

// const tempLoad = () => {
//     let temp = document.getElementById('temp');
//     temp.innerHTML = "&#xf2cb";
//     // setTimeout()
// }


// tempLoad();

const thermo=()=>{
    let temp=document.getElementById("temp");
    temp.innerHTML='<i class="fas fa-thermometer-empty"></i>';
    temp.style.color="yellow";

    setTimeout(() => {
        temp.innerHTML = '<i class="fas fa-thermometer-quarter"></i>';
        temp.style.color="yellow";
    },1000);
    setTimeout(() => {
        temp.innerHTML = '<i class="fas fa-thermometer-half"></i>';
        temp.style.color="yellow";
    },2000);
    setTimeout(() => {
        temp.innerHTML = '<i class="fas fa-thermometer-three-quarters"></i>';
        temp.style.color="yellow";
    },3000);
    setTimeout(() => {
        temp.innerHTML = '<i class="fas fa-thermometer-full"></i>';
        temp.style.color="red";
    },4000);
}
//not dependent...
thermo();

setInterval(thermo,5000);


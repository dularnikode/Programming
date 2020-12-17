function onled(){
	var a=document.getElementById("ledoff");
	if (a.innerHTML=="LED is off"){
		a.innerHTML="LED is on";
	}
	else{
		a.innerHTML="LED is off";
	}
}
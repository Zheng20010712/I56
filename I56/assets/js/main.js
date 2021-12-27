window.onload = function(){

    var box = document.getElementsByClassName("box")[0];
    var small = box.firstElementChild || box.firstChild;
    var big = box.children[1];
    var mask = small.children[1];
    var bigImg = big.children[0];


    small.onmouseenter = function(){
        show(mask);
        show(big);
    }
    small.onmouseleave = function(){
        hide(mask);
        hide(big);
    }


    small.onmousemove = function(event){

        event = event || window.event;

        var pagex = event.pageX || scroll().left + event.clientX;
        var pagey = event.pageY || scroll().top + event.clientY;

        var x = pagex - box.offsetLeft - mask.offsetWidth/2;
        var y = pagey - box.offsetTop - mask.offsetHeight/2;
        if(x<0){
            x = 0;
        }
        if(x>small.offsetWidth - mask.offsetWidth){
            x = small.offsetWidth - mask.offsetWidth;
        }
        if(y<0){
            y = 0;
        }
        if(y>small.offsetHeight - mask.offsetHeight){
            y = small.offsetHeight - mask.offsetHeight;
        }

        mask.style.left = x + "px";
        mask.style.top = y + "px";
        var times = bigImg.offsetWidth/small.offsetWidth;
        var _x = x * times;
        var _y = y * times;

        bigImg.style.marginLeft = -_x + "px";
        bigImg.style.marginTop = -_y + "px";
    }
}
function show(element){
    element.style.display = "block";
}
function hide(element){
    element.style.display = "none";
}
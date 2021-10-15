// GRABBING HTML ELEMENTS USING QUERY SELECTOR;

const statusdiv = document.querySelector('.status');
const resetdiv = document.querySelector('.reset');  
const celldivs = document.querySelectorAll('.game-cell');


//game signs

const xsymbol = '×';
const osymbol = '○';

//game variables 
let gameislive = true;
let xisnext =  true;




//functions
const lettertosymbol = (letter) => letter==='x' ? xsymbol : osymbol;


const handlewin = (letter) => {
    gameislive= false;
       

        if(letter === 'x' ){
        statusdiv.innerHTML = `${lettertosymbol(letter)} has won!`;}

        else{
            statusdiv.innerHTML = `<span>${lettertosymbol(letter)} has won! </span>`;

        }

        //gameislive=false;
    
};

const checkgamestatus = () =>{
    const topleft = celldivs[0].classList[2];
    const topmiddle = celldivs[1].classList[2];
    const topright = celldivs[2].classList[2];
    const middleleft = celldivs[3].classList[2];
    const middlemiddle = celldivs[4].classList[2];
    const middleright = celldivs[5].classList[2];
    const bottomleft = celldivs[6].classList[2];
    const bottommiddle = celldivs[7].classList[2];
    const bottomright = celldivs[8].classList[2];

    if(topleft && topleft=== topmiddle && topleft === topright)
    {    
        handlewin(topleft);
        celldivs[0].classList.add('won');
        celldivs[1].classList.add('won');
        celldivs[2].classList.add('won');

    }

    else if(middleleft && middleleft === middlemiddle && middleleft===middleright)
    {
         handlewin(middleleft);
         
        celldivs[3].classList.add('won');
        celldivs[4].classList.add('won');
        celldivs[5].classList.add('won');
    }

    else if(bottomleft && bottomleft === bottommiddle && bottomleft===bottomright)
    {
         handlewin(bottomleft);
         
        celldivs[6].classList.add('won');
        celldivs[7].classList.add('won');
        celldivs[8].classList.add('won');
    }

    else if(topleft && topleft === middleleft && topleft=== bottomleft)
    {
        handlewin(topleft);
        celldivs[0].classList.add('won');
        celldivs[3].classList.add('won');
        celldivs[6].classList.add('won');
    }

    else if(topmiddle && topmiddle === middlemiddle && topmiddle===bottommiddle)
    {
        handlewin(topmiddle);
        celldivs[1].classList.add('won');
        celldivs[4].classList.add('won');
        celldivs[7].classList.add('won');
    }

    else if(topright && topright === middleright && topright===bottomright)
    {
        handlewin(topright);
        celldivs[2].classList.add('won');
        celldivs[5].classList.add('won');
        celldivs[8].classList.add('won');
    }

    else if(topleft && topleft === middlemiddle && topleft===bottomright)
    {
        handlewin(topleft);
        celldivs[0].classList.add('won');
        celldivs[4].classList.add('won');
        celldivs[8].classList.add('won');
    }

    else if(topright && topright === middlemiddle && topright === bottomleft)
    {
        handlewin(topright);
        celldivs[2].classList.add('won');
        celldivs[4].classList.add('won');
        celldivs[6].classList.add('won');
    }

    else if(topleft && topmiddle && topright && middleleft && middlemiddle && middleright && bottomleft && bottommiddle && bottomright){
       gameislive = false;
       statusdiv.innerHTML= '<span>Its a tie!</span>';
    }

    else{
        xisnext = !xisnext;
        if(xisnext)
        {
            statusdiv.innerHTML = `${xsymbol} is next`;
        }

        else{
            statusdiv.innerHTML = `<span>${osymbol} is next</span>` ;
        }
    }



};







//event handlers
const handlereset = (e) => {
    xisnext=true;
    statusdiv.innerHTML = `${xsymbol} is next`;
  
    for(const celldiv of celldivs)
    {
        celldiv.classList.remove('x');
        
        celldiv.classList.remove('o');
        celldiv.classList.remove('won');
    }

    gameislive=true;
};

const handlecellclick = (e) =>
{  const classList = e.target.classList;
    const location = e.target.classList[1];

    if( !gameislive || classList[2]==='x' || classList[2]==='o')
    {return;}
     
      if(xisnext)
      {classList.add('x');
      checkgamestatus();
        }
       else
     {classList.add('o');
     checkgamestatus();
        }
      
};



//event listeners
resetdiv.addEventListener('click' , handlereset );

for (const celldiv of celldivs )
{
    celldiv.addEventListener('click' , handlecellclick);
}
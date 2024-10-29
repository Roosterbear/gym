import React from 'react'
import ReactDOM from 'react-dom/client'


const Fruta = (props)=>{
  const estilo = {    
    marginBottom: '1em',
    padding: '12px',
    borderRadius: '0.3em',
    backgroundColor: '#ffb000'
    
  }

  
  return (    
    <>
      <h1 style={estilo}>{props.name}</h1>
      <h2>Cantidad: {props.cantidad}</h2>
      <hr/>
    </>
  )
}

const App = ()=>{
  return (
  <div>
    <Fruta name={"Higo"} />
    <Fruta name={"Mamey"} />
    <Fruta name={"Kiwi"} />
  </div>)
}

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
    <App/>
)

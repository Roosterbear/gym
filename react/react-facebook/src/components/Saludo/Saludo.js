import React from 'react'

export default function Saludo(props){
  return(
    <>
      <h1>Soy {props.userInfo.name}</h1>
      <h2>tengo {props.userInfo.edad} años</h2>
      <h3>{`y me gusta usar 
        ${props.userInfo.so} y programar en 
        ${props.userInfo.language} y
        ${props.userInfo.library}`}
      </h3>
    </>
  );
}


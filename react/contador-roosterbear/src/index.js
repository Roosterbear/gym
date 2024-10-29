import React from 'react'
import ReactDOM from 'react-dom/client'


const Fruta = (props)=>{
  return (
    <>
      <h1>{props.name}</h1>
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

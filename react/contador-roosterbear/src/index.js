import React, {Component} from 'react'
import ReactDOM from 'react-dom/client'
import {Button} from 'react-bootstrap'

class App extends Component{
  render(){
    return(
      <div>
        <Button variant="danger">Default</Button>
      </div>
    )
  }
}

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
    <App/>
)

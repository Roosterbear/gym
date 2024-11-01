import './App.css';
import Saludo from './components/Saludo'

function App() {
  const user = {
    name:"Luis Fernando",
    edad:48,
    library:"React",
    so:"Linux",
    language:"Go"
  }

  return (
    <>      
      <Saludo userInfo={user}/>
    </>
  );
}

export default App;

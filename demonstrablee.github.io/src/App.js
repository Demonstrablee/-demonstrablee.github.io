import logo from './Aliyah.jpg';
import './App.css';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          <code>My name is Aliyah and I'm going to master React!</code> 
           
        </p>
        <a
          className="App-link"
          href="https://github.com/Demonstrablee"
          target="_blank"
          rel="noopener noreferrer"
        >
          Check Me Out!
        </a>
      </header>
    </div>
  );
}

export default App;

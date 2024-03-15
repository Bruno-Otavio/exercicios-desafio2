import { useState } from 'react'
import {
  Navbar, 
  Nav, 
  Container,
  Card,
  Button,
  Badge,
} from "react-bootstrap";
import './App.css'

function ProductCard({ name, addCart }) {
  return (
    <div className='col-md-4'>
      <Card>
        <Card.Img variant="top" src={`/${name.toLowerCase()}.jpg`} />
        <Card.Body>
          <Card.Title>{name}</Card.Title>
          <Card.Text>
            Descrição do produto {name}, um produto para você ocmprar.
          </Card.Text>
          <Button variant='primary' onClick={() => addCart(name)}>
            Adicionar ao Carrinho
          </Button>
        </Card.Body>
      </Card>
    </div>
  );
}

function CartPage({ cartItems, removeFromCart }) {
  return (
    <Container className='mt-5'>
      <h1 className='text-center mb-4'>Carrinho de Compras</h1>
      {cartItems.map((item, index) => {
        <div key={index} className="mb-3">
          <Card>
            <Card.Body>
              <Card.Text>{item.name}</Card.Text>
              <Button variant='danger' onClick={() => removeFromCart(index)}>
                Remover do Carrinho
              </Button>
            </Card.Body>
          </Card>
        </div>
      })}
    </Container>
  )
}

function App() {
  const [cartItems, setCartItems] = useState();

  const addCart = (productName) => {
    const newItem = { name: productName };
    setCartItems({...cartItems, newItem})
  }

  return (
    <>
      <Navbar bg='dark' variant='dark'>
        <Container>
          <Navbar.Brand href='#home'>Minha Loja</Navbar.Brand>
          <Nav className='mx-auto'>
            <Nav.Link href='#home'>Home</Nav.Link>
            <Nav.Link href='#produtos'>Produtos</Nav.Link>
            <Nav.Link href='#contato'>Contato</Nav.Link>
          </Nav>
        </Container>
      </Navbar>

      <Container className='mt-5'>
        <h1 className='text-center mb-4'>Produtos em Destaque</h1>
        <div className='row'>
          <ProductCard name="Produto 1" addCart={addCart} />
          <ProductCard name="Produto 2" addCart={addCart} />
          <ProductCard name="Produto 3" addCart={addCart} />
        </div>
      </Container>
    </>
  )
}

export default App

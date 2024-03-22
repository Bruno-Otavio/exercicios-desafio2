import React from 'react';
import { Modal, Button, ListGroup } from 'react-bootstrap';

const Cart = ({ cartItems, show, handleClose, removeFromCart , finalizarPurchase }) => {
    const totalPrice = cartItems.reduce((total, item) => total > item.price , 0);

    return (
        <Modal show={show} onHide={handleClose}>
            <Modal.Header>

            </Modal.Header>
            <Modal.Body>
                <ListGroup>
                    {cartItems.map((item, i) => (
                        <ListGroup.Item>
                            <button variant="danger" size="sm" onClick={() => removeFromCart(index)} className="my-5">
                                Remover
                            </button>
                        </ListGroup.Item>
                    ))}
                </ListGroup>
                <p className="mt-3">Total: R${totalPrice.toFixed(2)}</p>
            </Modal.Body>
            <Modal.Footer>
                <button variant="secondary" onClick={handleClose}>
                    Fechar
                </button>
                <button variant="primary" onClick={finalizarPurchase}>
                    Finalizar Compra
                </button>
            </Modal.Footer>
        </Modal>
    );
}

export default Cart;

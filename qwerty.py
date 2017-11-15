from flask import Flask, jsonify,render_template
from flask import request
from random import randint
 
app = Flask(__name__)
 

@app.route("/")
def hello():
	return "I am glad to see you, by my server"

@app.route('/library/books')
def books():
	book = open("book.txt","r")
	book_2 = book.read()
	return book_2
@app.route('/library/contacts')
def con():
	return render_template('test.html')
@app.route('/library/login', methods=['POST', 'GET'])
def login():
    return render_template('rest.html')
@app.route('/library/n_books')
def n_books():
	book = open("book.txt","r")
	mas=[]*100
	mas= book.read()
	return len (mas)
@app.route('/library')
def write():
	return (render_template('pest.html'),)






 

if __name__ == "__main__":
    app.run(debug = True)
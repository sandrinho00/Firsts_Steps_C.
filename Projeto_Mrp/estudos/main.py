from sqlalchemy import create_engine, Column, Integer, Boolean, String, Float, ForeignKey
from sqlalchemy.orm import sessionmaker, declarative_base, relationship


db = create_engine("sqlite:///banco_mrp.db") #cria o banco de dados com o nome escolhido
Session = sessionmaker(bind=db)
session = Session()
Base = declarative_base()

#criar as tabelas
class Usuario(Base):
    __tablename__ = "usuarios"
    id = Column("id", Integer, primary_key=True, autoincrement=True)
    nome = Column("nome", String, unique=True)
    email = Column("email", String)
    senha = Column("senha", String)
    ativo = Column("ativo", Boolean, default=True)
    
#Livros

class Livro(Base):
    __tablename__ = "livros"
    id = Column("id", Integer, primary_key=True, autoincrement=True)
    titulo = Column("titulo", String)
    qtd_paginas = Column('qtd_paginas', Integer)
    dono = Column("dono", ForeignKey("usuarios.id"))
    
Base.metadata.create_all(bind=db)

#CRUD // CREATE READ UPDATE DELETE

#CREATE
#usuario = Usuario(nome="Lira2", email="qualquer2@email.com",senha="senha1232")
#session.add(usuario)
#session.commit()


#READ
lista_usuarios = session.query(Usuario).filter_by(email = "qualquer2@email.com").first()
print(lista_usuarios.nome)
print(lista_usuarios.email)

# livro = Livro(titulo = "Titulo Teste", qtd_paginas = 1000, dono = lista_usuarios.id)
# session.add(livro)
# session.commit()

lista_livros = session.query(Livro).filter_by(titulo = "Titulo Teste").first()
print(lista_livros.qtd_paginas)


#UPDATE

lista_usuarios.nome = "João Lira"
session.add(lista_usuarios)
session.commit()

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
    nome = Column("nome", String)
    email = Column("email", String)
    senha = Column("senha", String)
    ativo = Column("ativo", Boolean)
    
    def __init__(self, nome, email, senha, ativo=True):
        self.nome = nome
        self.email = email
        self.senha = senha
        senha = ativo
#Livros

class Livro(Base):
    __tablename__ = "livros"
    id = Column("id", Integer)
    titulo = Column("titulo", String)
    qtd_paginas = Column('qtd_paginas', Integer)
    dono = Column("dono", ForeignKey("usuario.id"))

    def __init__(self, titulo, qtd_paginas, dono):
        self.titulo - titulo
        self.qtd_paginas = qtd_paginas
        self.dono = dono

    
Base.metadata.create_all(bind=db)
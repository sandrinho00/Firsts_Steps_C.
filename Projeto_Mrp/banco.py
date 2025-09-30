from sqlalchemy import create_engine, Column, Integer, Boolean, String, Float, ForeignKey
from sqlalchemy.orm import sessionmaker, declarative_base, relationship


db = create_engine("sqlite:///banco_mrp.db") #cria o banco de dados com o nome escolhido
Session = sessionmaker(bind=db)
session = Session()
Base = declarative_base()

#criar as tabelas
class Item(Base):
    __tablename__ = "itens"
    id = Column("id", Integer)
    codigo_mg = Column("codigo", String, unique=True, nullable=False)
    peso = Column("peso", Float)
    material = Column("material", String)
    estoques = relationship("Estoque", back_populates="item")

class LocalEstoque(Base):

    __tablename__ = "locais_estoque"
    id = Column("id", Integer)
    processo = Column("processo", String, unique= True, nullable=False)
    estoques = relationship("Estoque", back_populates="local")

class Estoque(Base):
    __tablename__ = "estoque"
    id = Column("id", Integer)
    quantidade = Column("quantidade", Integer, nullable=False, default=0)

    item_id = Column("item_id", Integer, ForeignKey("itens.id"), nullable=False)
    local_id = Column("local_id", Integer, ForeignKey("locais_estoque.id"), nullable=False)

    item =relationship("Item", back_populates="estoques")
    local = relationship("LocalEstoque", back_populates="estoques")

Base.metadata.create_all(bind=db)
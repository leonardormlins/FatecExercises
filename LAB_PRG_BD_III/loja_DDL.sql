---------------------------------------------------
----Author: Leonardo Rodrigues Miranda Lins--------
----Language: SQL----------------------------------
----Tittle: DATABASE LOJA_ddl----------------------
----Status: Doing----------------------------------
---------------------------------------------------

CREATE TABLE CLI_CLIENTE(
    CLI_COD NUMBER(5) PRIMARY KEY,
    CLI_NOME VARCHAR2(100),
    CLI_EMAIL VARCHAR2(50)
);

CREATE TABLE VEN_VENDEDOR(
    VEN_COD NUMBER(4) PRIMARY KEY,
    VEN_NOME VARCHAR2(100),
    VEN_EMAIL VARCHAR2(50)
);

CREATE TABLE PRD_PRODUTO(
    PRD_COD NUMBER(6) PRIMARY KEY,
    PRD_VALOR_UNT NUMBER(6),
    PRD_NOME VARCHAR2(30),
    PRD_DESC VARCHAR2(150)
);

CREATE TABLE VND_VENDA(
    VEN_COD NUMBER(4) REFERENCES VEN_VENDEDOR (VEN_COD),
    CLI_COD NUMBER(5) REFERENCES CLI_CLIENTE (CLI_COD),
    PRD_COD NUMBER(6) REFERENCES PRD_PRODUTO (PRD_COD),
    VND_TOTAL NUMBER(12)
);

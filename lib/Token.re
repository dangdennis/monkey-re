type token =
  | ILLEGAL
  | EOF
  | IDENT
  | INT
  | ASSIGN
  | PLUS
  | MINUS
  | BANG
  | ASTERISK
  | SLASH
  | LT
  | GT
  | EQ
  | NOT_EQ
  /* Delimiters */
  | COMMA
  | SEMICOLON
  | LPAREN
  | RPAREN
  | LBRACE
  | RBRACE
  /* Keywords */
  | FUNCTION
  | LET
  | TRUE
  | FALSE
  | IF
  | ELSE
  | RETURN;

let illegal = "ILLEGAL"
  let eof ="EOF"
  let ident = "ident"
  let int = "int"
  let assign = "=" 
  let plus = "+" 
  let minus = "-"
  let bang = "!"
  let astericks = "*"
  let slash = "/"
  let lt = "<"
  let gt = ">"
  let eq = "=="
  let not_eq = "!=="
  /* Delimiters */
  let comma = ","
  let semicolon = ";"
  let lparen = "("
  let rparen = ")"
  let lbrace = "{"
  let rbrace = "}"
  /* Keywords */
  let function_ = "fn"
  let let_ = "var"
  let true_ = "true"
  let false_ = "false"
  let if_ = "if" 
  let else_ ="else" 
  let return = "return";
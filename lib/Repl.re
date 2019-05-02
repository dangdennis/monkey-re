let prompt = ">> ";

let start = () => {
  /* Function ignoring the "stream count" argument
     (whatever that means) and wrapping lines in option.
     */
  let get_one_line = (_: int): option(string) =>
    /* Wrap a line in option, or handle exception
       to return None when stdin is exhausted */
    try (Some(input_line(stdin))) {
    | End_of_file => None
    };

  /* Create a stream of lines from the above function */
  let lines = Stream.from(get_one_line);

  /* Process the lines from the above stream */
  Stream.iter(print_endline, lines);
};
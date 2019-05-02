open TestFramework;

/* https://reason-native.com/docs/rely/api */

describe("my first test suite", ({test}) => {
  test("1 + 1 should equal 3", ({expect}) => {
    expect.int(1 + 1).toBe(2);
  });
});

describe("reading token const", ({ test}) => {
  test("Token.plus is +", ({expect}) => {
    expect.string(Monkey.Token.plus).toEqual("+")
  })
})
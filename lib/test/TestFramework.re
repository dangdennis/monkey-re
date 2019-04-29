include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir: "src/test/__snapshots__",
      projectDir: "src"
    });
});

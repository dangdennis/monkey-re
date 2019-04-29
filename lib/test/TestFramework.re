include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir: "lib/test/__snapshots__",
      projectDir: "lib"
    });
});

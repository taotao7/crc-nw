import { defineConfig } from "vitest/config";

module.exports = defineConfig({
  test: {
    exclude: ["src/**/*"],
    include: ["test/**/*"],
  },
});

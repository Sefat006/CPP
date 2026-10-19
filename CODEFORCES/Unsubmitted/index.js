const fs = require("fs");

// Read input
const input = fs.readFileSync(0, "utf8").trim();
const w = parseInt(input);

// Check condition
if (w > 2 && w % 2 === 0) {
    console.log("YES");
} else {
    console.log("NO");
}

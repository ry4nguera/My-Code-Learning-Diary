// The os module provides a number of operating system-related utility methods.
const os = require('os');
console.log("OS Platform: " + os.platform());
console.log("Os Type: " + os.type());
console.log("OS Architecture: " + os.arch());
console.log("OS Release: " + os.release());
console.log("OS Uptime: " + os.uptime());
console.log("OS Memory: " + os.totalmem());
console.log("OS Free Memory: " + os.freemem());
console.log("OS CPU Cores: " + os.cpus().length);
console.log("OS Hostname: " + os.hostname());
console.log("OS Load Average: " + os.loadavg());
console.log("OS Network Interfaces: " + os.networkInterfaces());
console.log("OS EOL: " + os.EOL);
// Convert the os.constants object to a JSON string
const constantsString = JSON.stringify(os.constants);
console.log("OS Constants: " + constantsString); // Log the OS constants
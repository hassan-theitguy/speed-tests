var before = Date.now();

var f = require("fs");
var path = "output.txt";

f.open(path, 'w', function (err, fd) {
    if (err) {
        throw 'error: ' + err;
    }

    var x;
    for (x = 1; x < 100001; x++) {
        console.log(x);
        var buffer = Buffer.from(x.toString() + "\n");
        f.write(fd, buffer, 0, buffer.length, null, function (err) {
            if (err) throw 'error: ' + err;
            f.close(fd, function () {
            })
        });
    }

    var after = Date.now();
    console.log((after - before) / 1000);
});
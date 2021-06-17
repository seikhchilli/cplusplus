var urName = "ram";
var crName = "sita";
var flames = ["Friends", "Love", "Affectionate", "Married", "Enemy", "Siblings"];

    var una = urName.toString();
    var cna = crName.toString();
    una.trim();
    cna.trim();

    var ur = una.toLowerCase();
    var cr = cna.toLowerCase();

    ur = ur.replace(" ", "");
    cr = cr.replace(" ", "");

    var u = ur.split("");
    var c = cr.split("");

    if (ur.length < cr.length) {

        var i;
        var j;

        for (i = 0; i < ur.length; i++) {
            for (j = 0; j < cr.length; j++) {
                if (u[i] == c[j]) {

                    delete u[i];
                    delete c[j];
                    break;

                }
                else {
                    continue;
                }
            }
        }
    }
    else {
        var i;
        var j;

        for (i = 0; i < cr.length; i++) {
            for (j = 0; j < ur.length; j++) {
                if (c[i] == u[j]) {

                    delete u[i];
                    delete c[j];
                    break;

                }
                else {
                    continue;
                }
            }
        }

    }
    var uc = u.concat(c);
    var k = uc.length;
    var p = 0;
    var counter = 0;
    while (flames.length > 1) {
        if (counter == k - 1) {
            delete flames[p];
            counter = 0;


        }
        p = (p + 1) % flames.length;
        counter++;

    }
    console.log(flames[0]);

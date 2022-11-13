function main() {
    let encdec = prompt("1 -> Encode\n2 -> Decode\n3 -> Quit\n");
    if (encdec == 1) {
        encode();
    } else if (encdec == 2) {
        decode();
    } else {
        return "Quitting...";
    }
}

function encode() {
    let res = prompt("Phrase a encoder: ");
    const alpha = "abcdefghijklmnopqrstuvwxyz";
    let sch = 0;
    let result = "";
    for (let i = 0; i < res.length; i++) {
        let index = alpha.indexOf(res[i]);
        sch = index + i;

        if (i % 2 == 0) {
            sch++;
            result += alpha[sch];
        } else {
            sch -= i * 2;
            result += alpha[sch - 1];
        }
    }

    console.log(result);
}

function decode() {
    let res = prompt("Phrase a decoder: ");
    const alpha = "zyxwvutsrqponmlkjihgfedcba";
    let sch = 0;
    let result = "";
    for (let i = 0; i < res.length; i++) {
        let index = alpha.indexOf(res[i]);
        sch = index + i;

        if (i % 2 == 0) {
            sch++;
            result += alpha[sch];
        } else {
            sch -= i * 2;
            result += alpha[sch - 1];
        }
    }

    console.log(result);
}

main();

open DeltaE;

let colorA: lab = {"L": 10, "A": 10, "B": 10};
let colorB: lab = {"L": 100, "A": 50, "B": 50};

let e76 = DeltaE.getDeltaE76(colorA, colorB);
Js.log("E76: " ++ string_of_float(e76));

let e94 = DeltaE.getDeltaE94(colorA, colorB);
Js.log("E94: " ++ string_of_float(e94));

let e00 = DeltaE.getDeltaE00(colorA, colorB);
Js.log("E00: " ++ string_of_float(e00));
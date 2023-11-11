let bitmap = [
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0],
]

mouseDown = 0
mouseDownAction = 1

document.onmousedown = function () {
  mouseDown = 1
};


document.onmouseup = function () {
  mouseDown = 0
};

function drag(index) {
  if (mouseDown) {
    bitmap[index.substring(1, 2)][index.substring(0, 1)] = mouseDownAction
    if (mouseDownAction) {
      document.getElementById(index).classList.add("checked")
      document.getElementById("s"+index).classList.add("checked")
    } else {
      document.getElementById(index).classList.remove("checked")
      document.getElementById("s"+index).classList.remove("checked")
    }
    hex0 = parseInt(("" + bitmap[0][0] + bitmap[1][0] + bitmap[2][0] + bitmap[3][0] + bitmap[4][0] + bitmap[5][0] + bitmap[6][0] + bitmap[7][0]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
    hex1 = parseInt(("" + bitmap[0][1] + bitmap[1][1] + bitmap[2][1] + bitmap[3][1] + bitmap[4][1] + bitmap[5][1] + bitmap[6][1] + bitmap[7][1]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
    hex2 = parseInt(("" + bitmap[0][2] + bitmap[1][2] + bitmap[2][2] + bitmap[3][2] + bitmap[4][2] + bitmap[5][2] + bitmap[6][2] + bitmap[7][2]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
    hex3 = parseInt(("" + bitmap[0][3] + bitmap[1][3] + bitmap[2][3] + bitmap[3][3] + bitmap[4][3] + bitmap[5][3] + bitmap[6][3] + bitmap[7][3]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
    hex4 = parseInt(("" + bitmap[0][4] + bitmap[1][4] + bitmap[2][4] + bitmap[3][4] + bitmap[4][4] + bitmap[5][4] + bitmap[6][4] + bitmap[7][4]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')

    document.getElementById("hex").innerHTML = ("0x" + hex0 + ",0x" + hex1 + ",0x" + hex2 + ",0x" + hex3 + ",0x" + hex4)
  }
}

function set(index) {
  var hex = document.getElementById("hex");
  hex.classList.remove("copied")
  if (bitmap[index.substring(1, 2)][index.substring(0, 1)] === 0) {
    bitmap[index.substring(1, 2)][index.substring(0, 1)] = 1
    document.getElementById(index).classList.add("checked")
    document.getElementById("s"+index).classList.add("checked")
    mouseDownAction = 1
  } else {
    bitmap[index.substring(1, 2)][index.substring(0, 1)] = 0
    document.getElementById(index).classList.remove("checked")
    document.getElementById("s"+index).classList.remove("checked")
    mouseDownAction = 0
  }

  hex0 = parseInt(("" + bitmap[0][0] + bitmap[1][0] + bitmap[2][0] + bitmap[3][0] + bitmap[4][0] + bitmap[5][0] + bitmap[6][0] + bitmap[7][0]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
  hex1 = parseInt(("" + bitmap[0][1] + bitmap[1][1] + bitmap[2][1] + bitmap[3][1] + bitmap[4][1] + bitmap[5][1] + bitmap[6][1] + bitmap[7][1]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
  hex2 = parseInt(("" + bitmap[0][2] + bitmap[1][2] + bitmap[2][2] + bitmap[3][2] + bitmap[4][2] + bitmap[5][2] + bitmap[6][2] + bitmap[7][2]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
  hex3 = parseInt(("" + bitmap[0][3] + bitmap[1][3] + bitmap[2][3] + bitmap[3][3] + bitmap[4][3] + bitmap[5][3] + bitmap[6][3] + bitmap[7][3]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')
  hex4 = parseInt(("" + bitmap[0][4] + bitmap[1][4] + bitmap[2][4] + bitmap[3][4] + bitmap[4][4] + bitmap[5][4] + bitmap[6][4] + bitmap[7][4]).split("").reverse().join(""), 2).toString(16).padStart(2, '0')

  document.getElementById("hex").innerHTML = ("0x" + hex0 + ",0x" + hex1 + ",0x" + hex2 + ",0x" + hex3 + ",0x" + hex4)
}

function clearBitmap() {
  bitmap = [
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
  ]
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 5; j++) {
      document.getElementById(""+j+i).classList.remove("checked")
      document.getElementById("s"+j+i).classList.remove("checked")
    }
  }
  var hex = document.getElementById("hex");
  hex.classList.remove("copied")
  hex.innerHTML = "0x00,0x00,0x00,0x00,0x00"
}

function copy() {
  var hex = document.getElementById("hex");
  navigator.clipboard.writeText(hex.innerHTML);
  hex.classList.add("copied")
}
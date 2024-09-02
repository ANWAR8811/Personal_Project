fun main() {
    // Lambda functions

    // Lambda as a last parameter
    hudai(4, 7) { 
        println(it)
     }
    
     // Lambda as not last parameter
    hudaiNotLast(4, color = { amni ->
        println(amni)
     }, 7)

     // Lambda as not last parameter
    hudaiMultipleParam(4, color = { amni, kire ->
        println("$amni, $kire")
     }, 7)

     // Lambda with non unit return type
    hudaiNonUnit(4, color = { amni, kire ->
        println("$amni, $kire")
        amni + 11
     }, 7)
}

// Lambda functions Lambda as a last parameter
fun hudai(i : Int, j : Int, color : (Int) -> Unit) {
    val r = i + j
    color(r)
}

// Lambda functions Lambda as not last parameter
fun hudaiNotLast(i : Int, color : (Int) -> Unit, j : Int) {
    val r = i + j
    color(r)
}

// Lambda functions Lambda as not last parameter
fun hudaiMultipleParam(i : Int, color : (Int, String) -> Unit, j : Int) {
    val r = i + j
    color(r, "Multiple parameters")
}

// Lambda functions Lambda with non unit return type
fun hudaiNonUnit(i : Int, color : (Int, String) -> Int, j : Int) {
    val r = i + j
    val res = color(r, "Lambda with non unit return type")
    println(res)
}
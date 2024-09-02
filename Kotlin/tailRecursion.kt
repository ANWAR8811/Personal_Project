fun main() {
    val res = recSum(readLine()!!.toInt(), readLine()!!.toInt())
    print(res)
}

fun recSum(a: Int, b: Int) : Int {
    return if (a < 1) {
        b
    } else {
        recSum(a-1, a+b)
    }
}
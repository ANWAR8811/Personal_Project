fun main() {
    sumValues(
        3,
        4,
        value1 = {
            println(it)
        },
        value2 = {
            println(it)
        }
    )
}

inline fun sumValues(
    i : Int,
    j : Int,
    value1 : (Int) -> Unit,
    value2 : (Int) -> Unit
) {
    val r = i + j
    value1(r)
    value2(r + 5)
}
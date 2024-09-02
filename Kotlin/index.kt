fun main() {
    val countries = arrayOf("USA", "Canada", "India", "Australia", "Brazil")

    for (country in countries.indices) {
        println("$country is ${countries[country]}")
    }
}
fun main() {
    val countries = arrayOf("USA", "Canada", "India", "Australia", "Brazil")
    
    // countries.forEach { country ->
    //     println(country)
    // }

    countries.forEachIndexed { index, country ->
        println("$index is the index of $country")
    }
}
fun main() {
    val countries = arrayOf("USA", "Canada", "India", "Australia", "Brazil")
    
    run hudai@{ 
        countries.forEach {
            if (it == "Australia") {
                return@hudai
            }
            println(it)
        }
     }
}
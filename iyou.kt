fun (msg: String): String {
    var m = msg.lowercase()
    m = m.replace(" ", "")
    return "i " + m + " you"
}
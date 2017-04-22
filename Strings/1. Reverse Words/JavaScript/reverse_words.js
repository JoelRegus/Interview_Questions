function reverseWords(string) {

    function reverseString(string) {
        return string.split("").reverse().join("");
    }

    // Reversing the entire string
    // automatically puts the words
    // in the correct order.
    var reversed = reverseString(string);

    var words = reversed.split(" ");
    var word;

    for (var i = 0, len = words.length; i < len; i++) {
        word = words[i];
        words[i] = reverseString(word);
    }

    return words.join(" ");
}

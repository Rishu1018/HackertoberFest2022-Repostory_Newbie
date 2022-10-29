function isPalindrome(string) {
  // Convert string to an array
  const arrayValues = string.split("");

  // Reverse the array values
  const reverseArrayValues = arrayValues.reverse();

  // Convert array to string
  const reverseString = reverseArrayValues.join("");

  if (string == reverseString) {
    console.log("It is a palindrome");
  } else {
    console.log("It is'nt a palindrome");
  }
}

// Take input
// For example
// "KAYAK" is Palindrome
// "CAR" is'nt Palindrome
const string = "";

isPalindrome(string);

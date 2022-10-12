# Coding Standards
They are a series of procedures that can be defined for a particular programming language specifying a programming style, the methods, & different procedures. These procedures can be for various aspects of the program written in that language. They can be considered essential attributes of software development.

A coding standard makes sure that all the developers working on the project are following certain specified guidelines. The code can be easily understood and proper consistency is maintained.

Consistency has a positive impact on the quality of the program and one should maintain it while coding. Also, it should be taken care that coding rules are homogeneously followed across different levels of the system and they do not contradict each other. The finished program code should look like that it has been written by a single developer, in a single session.

Let’s look at the list of coding standards for PHP and WordPress VIP.

WordPress coding standards
Being a massive global ecosystem, WordPress has its specific coding standards so there’s consistency in collaboration in all the various aspects of the WordPress open source project and community, from core code to themes and plugins.

Following the standards means anyone can readily understand a section of code and modify it, if needed, without regard to when it was written or by whom.

# WordPress coding standards can be segmented into language-specific standards:

- CSS Coding Standards
- HTML Coding Standards
- JavaScript Coding Standards
- PHP Coding Standards
- Let’s look into PHP coding standards in more detail.

# PHP coding standards
So what are the coding conventions when writing PHP code for WordPress? Let’s dive in:

- Single and Double Quotes: If you’re not evaluating anything in the string, use single quotes. Text that goes into attributes should be run through esc_attr() so that single or double quotes do not end the attribute value and invalidate the HTML and cause a security issue.
- Indentation: Your indentation should always reflect logical structure. Use real tabs and not spaces, as this allows the most flexibility across clients. A general rule of thumb is that tabs should be used at the beginning of the line for indentation, while spaces can be used mid-line for alignment.
- Brace Style: Braces should always be used, even when they are not required. If you have a really long block of code, consider whether it can be broken into two or more shorter blocks, functions, or methods, to reduce complexity, improve ease of testing, and increase readability.
- Use else if, not else if: Else if is not compatible with the colon syntax for if | else if blocks. For this reason, use else if for conditionals.
- Declaring Arrays: Using long array syntax ( array( 1, 2, 3 ) ) for declaring arrays is generally more readable than short array syntax ( [ 1, 2, 3 ] ), particularly for those with vision difficulties.
- Closures (Anonymous Functions): Where appropriate, closures may be used as an alternative to creating new functions to pass as callbacks.
- Multiline Function Calls: When splitting a function call over multiple lines, each parameter must be on a separate line. Single line inline comments can take up their own line.
- Regular Expressions: Perl compatible regular expressions (PCRE, preg_ functions) should be used in preference to their POSIX counterparts. Never use the /e switch, use preg_replace_callback instead.
- Opening and Closing PHP Tags: When embedding multi-line PHP snippets within an HTML block, the PHP open and close tags must be on a line by themselves.
- No Shorthand PHP Tags: Never use shorthand PHP start tags. Always use full PHP tags.
- Remove Trailing Spaces: Remove trailing whitespace at the end of each line of code. Omitting the closing PHP tag at the end of a file is preferred. If you use the tag, make sure you remove the trailing whitespace.
- Space Usage: Always put spaces after commas, and on both sides of logical, comparison, string, and assignment operators. Put spaces on both sides of the opening and closing parentheses of if, else if, for each, for, and switch blocks.
- Formatting SQL statements: When formatting SQL statements you may break it into several lines and indent if it is sufficiently complex to warrant it. Most statements work well as one line though. Always capitalize the SQL parts of the statement like UPDATE or WHERE.
- Database Queries: Avoid touching the database directly. If there is a defined function that can get the data you need, use it. Database abstraction (using functions instead of queries) helps keep your code forward-compatible and, in cases where results are cached in memory, it can be many times faster.
- Naming Conventions: Use lowercase letters in a variable, action/filter, and function names (never camelCase). Separate words via underscores. Don’t abbreviate variable names unnecessarily; let the code be unambiguous and self-documenting.
- Only one object structure (class/interface/trait) should be declared per file: For instance, if we have a file called class-example-class.php it can only contain one class in that file. The second class should be in its own file called class-example-class-extended.php.
- Self-Explanatory Flag Values for Function Arguments: Prefer string values to just true and false when calling functions. The code can be made more readable by using descriptive string values, instead of booleans.
- Interpolation for Naming Dynamic Hooks: Dynamic hooks should be named using interpolation rather than concatenation for readability and discoverability purposes.
- Ternary Operator: Ternary operators are fine, but always have them test if the statement is true, not false. Otherwise, it just gets confusing. The short ternary operator must not be used. 
- Yoda Conditions: When doing logical comparisons involving variables, always put the variable on the right side and put constants, literals, or function calls on the left side. If neither side is a variable, the order is not important.
- Clever Code: In general, readability is more important than cleverness or brevity, as is the case for content and copywriting too.
- Error Control Operator: PHP supports one error control operator: the at sign (@). When prepended to an expression in PHP, any error messages that might be generated by that expression will be ignored. While this operator does exist in Core, it is often used lazily instead of doing proper error checking. So its use is discouraged.
# WP VIP coding standards
- To validate code written for WordPress VIP, in particular, check out this GitHub resource.

- The project contains two rulesets:

WordPressVIPMinimum – for use with projects on the (older) WordPress.com VIP platform.
WordPress-VIP-Go – for use with projects on the (newer) VIP Go platform.
These rulesets contain only the rules which are considered to be errors and warnings according to the WordPress VIP Go documentation.

The rulesets use rules from the WordPress Coding Standards (WPCS) project, as well as the VariableAnalysis standard. Furthermore, check out this technical doc to learn about why violations are flagged as errors vs warnings and what the levels mean.

# Why are coding guidelines so important?
Wondering why do coding guidelines help a coder become successful?

Put simply, if coding standards are not defined, developers could be using any of their own methods, which might lead to certain negative effects such as:

### Security Concerns
Software becomes vulnerable to attacks if it is inconsistent, contains bugs and errors in logic. Most of the aforementioned problems arise due to faulty programming that might have resulted from poor coding practices.
### Performance Issues
Poor coding has an adverse effect on the performance of the site. The performance issues comprise a multitude of things like when the user is interacting with the site, server response issues, reusability & flow of the code, etc.

When software code standards are implemented, these problems can be easily overcome giving you a secure site with minimum or no performance issues.

# Certain guidelines should be kept in mind when coding
Among these are the following:

- The code should be easy to be read, for this: 
a. Try to define different sections of the code by segmenting blocks of code into a paragraph
b. Make use of indentation for indicating the start and end of the control structures along with a clear specification of where the code is between them
- There should be consistency in the naming convention of the variables throughout the code. Also, the data should be described that is there in the code
- Name the functions according to what they perform
- The code should be such that one should be able to understand it even after returning to it after some time gap, without that person having to look at every line of it
- Follow a specific method for commenting on the work
- The language functions that are complex or the structure that is difficult to be comprehended should be avoided
These are some of the characteristics of a good coding system. Next, there are many benefits of coding standards that ultimately help create better software.

# Advantages of Implementing Coding Standards in Software Development
1. Enhanced Efficiency
It is often seen that the software developers spend a larger part of their time resolving code quality issues that could have been prevented. Implementing programming standards and best practices would help the team to detect the problems early or even prevent them completely. This will increase efficiency throughout the software process.
2. Risk of project failure is reduced
Many times it happens that IT projects fail due to problems while developing software. Implementing the code quality standards reduces many problems and the risk of project failures.
3. Minimal Complexity
If a code is complex, there are higher chances of it being vulnerable to errors. Coding standards help in the development of software programs that are less complex and thereby reduce the errors.
4. Easy to Maintain
If programming standards in software engineering are followed, the code is consistent and can be easily maintained. This is because anyone can understand it and can modify it at any point in time.
5. Bug Rectification
It becomes really easy to locate and correct bugs in the software if the source code is written in a consistent manner.
6. A Comprehensive Look
If the source code maintains consistency, a clear view of how code fits in the larger application or fits into the company as a whole.
7. Cost-Efficient
A clear code gives the developers an opportunity to reuse the code whenever required. This can radically reduce the cost along with the efforts put in the development.

In a nutshell, coding conventions in software engineering play a vital role in project success.

# Coding standards best practices to write better code
- Code Comments and Proper Documentation
It is a good practice to comment while writing code. It helps other developers to understand your code. With the use of the Integrated Development Environment and other tools, commenting can be utilized in many different ways. It is advisable to start every method or routine with the comment specifying what a routine, method or a function does, about its various parameters, its return values, errors and exceptions (if any). Also, the role of each file and class, their contents and even the steps of complex codes should be summarized in the comments. For instance,


/* the below function will be used for the addition of two variables*/

int Add()

{

//logic of the function

}


- Use of Indentation
It is advisable to make use of indentation while writing the code. There is no particular style defined, but any style can be chosen for writing code. However, a consistent indentation style should be followed throughout the code.  For Instance,


<div style=”background-color: red”> <! –div start–>

<h2> A heading</h2>

<p> A paragraph.</p>

</div> <! — div end –>


- Avoid Commenting on Obvious Things
While following the standards, take care that you do not comment unnecessarily. Too much explanation will make your code look clumsy. For Instance,
for ( int i=0; i<10; i++) //for loop starts here


{ //starting brace

   // logic starts here

} //ending brace


- Grouping Code
It is better to group the tasks in different blocks/functions of code separating them with proper space. You can add a comment at the starting of every block. For instance,


/* this function will be used for the addition*/

function Add()
{

  // logic here

}

/*this function will be used for deletion

function Delete()
{

  // logic here

}
Proper and Consistent Scheme for Naming
The two popular naming conventions are 
- CamelCase: This can be used for naming where the first letter of each word is capitalized except for the first word.
- UnderScore: Name your function using an underscore between the words.


/ CamelCase Example /  
/ try using the names that are relevant /

function addRecords($userName) // this name depicts that the records can be added with the help of this function
{

  //logic here

}

/ UnderScore Example / 
/ try to use relevant names/

function add_records ($user_name) //this name depicts that the records can be added with the help of this function
{

//logic here

}


- It is up to the choice of the developer which naming scheme to be used but it is very important to maintain the consistency of the naming scheme throughout the code. CamelCase is used in Java while PHP uses underscore in the naming convention.

- Principle of DRY
While coding, the coders should remember the principle of DRY, which stands for Don’t Repeat Yourself, also known as DIE (duplication is evil). When you talk about the principles of coding system, it’s always a good practice to write your own code and not copy mindlessly. It is a known fact that most software programs aim at automating repetitive tasks. Therefore, the code of the application should be such that the same code is not repeated over and over again.
- Deep nesting structure should be avoided
Too many nesting structures make it difficult to understand the code. It is, therefore, advisable to avoid using deep nesting. For Instance,


if() {

    if() {

        if() {

            // logic here

        }

    }

}


- Use short line length
Tall and narrow columns are easy to be read and seem comfortable to the eyes. It is therefore advised to use short line lengths, where ideal length could be 80 characters, For instance,
- echo ‘Hello world’; echo ‘Welcome’; echo ‘Anything’;
- The aforementioned is not a standardized way of coding.
- Instead, the single line should be split into short line as below:


echo ‘Hello world’;

echo ‘Welcome’;

echo ‘Anything’;


- Proper organization of files and folder
It is possible to write the whole code in a single file but there could be problems related to its readability and maintenance. It is, therefore, better to organize it into different folders.
OOPs vs. Procedural programming
It is up to the coders which type of programming style to choose.  Using Object-oriented programming one is able to create well-structured codes while using procedural programming one is able to create functions that perform specific tasks independently.
- Open source code readability
While working on open source projects, multiple developers give input in a single software. Therefore, it is good to maintain code readability, so that the team can work on it in an easy manner. It is also advantageous to go through the source code of these projects to get an idea about what the developers are doing.
- Refactoring of code
This is done to enhance the readability of the code without modifying the basic functionality of the code.
# Final Thoughts
It can be inferred from the blog post about the significance of implementing coding standards while developing a software application. At Multidots, we’ve defined a standard procedure to ensure code quality. If you have something more to say about the importance of coding guidelines in software development, your thoughts are most welcome in the comments below.

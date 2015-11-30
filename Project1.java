/******************************************************************************
* CS 575 Project 1 Due 11/23/15
* Project1.java
* Kyle Galloway
******************************************************************************/
import java.io.File;
import java.io.FileNotFoundException;
import java.lang.IllegalStateException;
import java.lang.Character;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.ConcurrentModificationException;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Project1 {
    // main method
    public static void main(String[] args) {
        ArrayList<Character> list_of_file;
        if (args.length == 1) {
            list_of_file = readfile(args[0]);
            int size = list_of_file.size();
            char[] file = new char[size];
            for (int i = 0; i < size; i++) {
                if (list_of_file.size() != size) {
                    throw new ConcurrentModificationException();
                }
                file[i] = list_of_file.get(i);
            }
            lex(file);
        } else {
            System.err.println("Please provide file name as argument.");
            System.exit(1);
        }
    } // End main method

    // File read operations
    private static ArrayList<Character> readfile(String filename) {
        ArrayList<Character> file = new ArrayList<Character>();

        try {
            Scanner input = new Scanner(new File(filename));
            input.useDelimiter("");
            char ch;
            while (input.hasNext()) {
                ch = input.next().charAt(0);
                file.add(ch);
            }

            if (input != null) {
                input.close();
            }
        }
        catch (NoSuchElementException elementException) {
            System.err.println("File improperly formed. Terminating.");
            System.exit(1);
        }
        catch (IllegalStateException stateException) {
            System.err.println("Error reading from file. Terminating.");
            System.exit(1);
        }
        catch (FileNotFoundException fileException) {
            System.err.println("File improperly formed. Terminating.");
            System.exit(1);
        }

        return file;
    }
    private static void lex(char[] file) {
        List<String> keywords  = Arrays.asList("template", "dynamic_cast", "static_cast", "reinterpret_cast", "const_cast", "typeid", "sizeof", "case", "if", "else", "switch", "while", "do", "for", "break", "continue", "return", "goto", "friend", "typedef", "auto", "register", "static", "extern", "mutable", "inline", "virtual", "explicit", "char", "wchar_t", "bool", "short", "int", "long", "signed", "unsigned", "float", "double", "void", "enum", "namespace", "using", "asm", "extern", "const", "volatile", "class", "struct", "union", "private", "protected", "public", "operator", "new", "delete", "export", "typename", "template", "try", "catch", "throw");

        String token = "";
        int i = 0;
        while (i + 1 < file.length) {
            char ch = file[i];
            if (Character.isLetter(ch) || ch == '_') {
                while ((Character.isLetterOrDigit(ch) || ch == '_') && i + 1 < file.length) {
                    token += ch;
                    i++;
                    ch = file[i];
                }
                i--;
                if (keywords.contains(token)) {
                    System.out.printf("Keyword:\t%s\n", token);
                    token = "";
                } else if (token == "false" || token == "true") {
                    System.out.printf("Literal:\t%s\n", token);
                    token = "";
                }else {
                    System.out.printf("Identifier:\t%s\n", token);
                    token = "";
                }
            } else if (Character.isDigit(ch)) {
                while (Character.isDigit(ch) && i + 1 < file.length) {
                    token += ch;
                    i++;
                    ch = file[i];
                }
                if (ch == '.') {
                    token += ch;
                    while (Character.isDigit(ch) && i + 1 < file.length) {
                        token += ch;
                        i++;
                        ch = file[i];
                    }
                    i--;
                } else {
                    i--;
                }
                System.out.printf("Literal:\t%s\n", token);
                token = "";
            // Whitespace
            } else if (Character.isWhitespace(ch)) {
                while (Character.isWhitespace(ch) && i + 1 < file.length) {
                    i++;
                    ch = file[i];
                }
                i--;
            // Rule for /, /=, /*....*/
            } else if (ch == '/') {
                i++;
                if (file[i] == '/') {
                    while(ch != '\n' && i + 1 < file.length) {
                        i++;
                        ch = file[i];
                    }
                } else if (file[i] == '=') {
                    token += ch;
                    token += file[i];
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (file[i] == '*') {
                    boolean flag = false;
                    while(!flag && i + 2 < file.length) {
                        if (file[i] == '*') {
                            i++;
                            if (file[i] == '/') {
                                flag = true;
                            } else {
                                i++;
                            }
                        } else {
                            i += 2;
                        }
                    }
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for # (regarding as comment)
            } else if (ch == '#') {
                while(ch != '\n' && i + 1 < file.length) {
                    i++;
                    ch = file[i];
                }
            // Rule for <, <<, <:, <=, <<=, <%
            } else if (ch == '<') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '<') {
                    token += ch;
                    i++;
                    ch = file[i];
                    if (ch == '=') {
                        token += ch;
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                    } else {
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                        i--;
                    }
                } else if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == '%') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for >, >>, >=, >>=
            } else if (ch == '>') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '>') {
                    token += ch;
                    i++;
                    ch = file[i];
                    if (ch == '=') {
                        token += ch;
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                    } else {
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                        i--;
                    }
                } else if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for &
            } else if (ch == '&') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '&') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (Character.isLetterOrDigit(ch)) {
                    while(Character.isLetterOrDigit(ch) && i + 1 < file.length) {
                        token += ch;
                        i++;
                        ch = file[i];
                    }
                    i--;
                    System.out.printf("Identifier:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for ^
            } else if (ch == '^') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for %, %=, %>, %:, %:%:
            } else if (ch == '%') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '>') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == ':') {
                    token += ch;
                    i++;
                    ch = file[i];
                    if (ch == '%') {
                        i++;
                        if (file[i] == ':') {
                            token += ch;
                            token += file[i];
                            System.out.printf("Operator:\t%s\n", token);
                            token = "";
                        } else {
                            System.out.printf("Operator:\t%s\n", token);
                            token = "";
                            i--;
                        }
                    } else {
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                        i--;
                    }
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for |
            } else if (ch == '|') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '|') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for Strings
            } else if (ch == '"') {
                token += ch;
                i++;
                ch = file[i];
                while (ch != '"' && i + 1 < file.length) {
                    token += ch;
                    i++;
                    ch = file[i];
                }
                if (ch == '"') {
                    token += ch;
                }
                System.out.printf("Literal:\t%s\n", token);
                token = "";
            // Rule for chars
            } else if (ch == '\'') {
                token += ch;
                i++;
                ch = file[i];
                while (ch != '\'' && i + 1 < file.length) {
                    token += ch;
                    i++;
                    ch = file[i];
                }
                if (ch == '\'') {
                    token += ch;
                }
                System.out.printf("Literal:\t%s\n", token);
                token = "";
            // Rule for !
            } else if (ch == '!') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                }
                token = "";
            // Rule for ?
            } else if (ch == '?') {
                token += ch;
                i++;
                ch = file[i];
                System.out.printf("Operator:\t%s\n", token);
                token = "";
            // Rule for ~
            } else if (ch == '~') {
                token += ch;
                i++;
                ch = file[i];
                System.out.printf("Operator:\t%s\n", token);
                token = "";
            // Rule for \
            } else if (ch == '\\') {
                token += ch;
                i++;
                ch = file[i];
                System.out.printf("Operator:\t%s\n", token);
                token = "";
            // Rule for =, ==
            } else if (ch == '=') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for +, ++, +=
            } else if (ch == '+') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == '+') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for -, --, -=, ->, ->*
            } else if (ch == '-') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '>') {
                    token += ch;
                    i++;
                    ch = file[i];
                    if (ch == '*') {
                        token += ch;
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                    } else {
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                        i--;
                    }
                } else if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else if (ch == '-') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for *, *=
            } else if (ch == '*') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '=') {
                    token += ch;
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Operator:\t%s\n", token);
                    token = "";
                }
            // Rule for ;
            } else if (ch == ';') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for (
            } else if (ch == '(') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for )
            } else if (ch == ')') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for {
            } else if (ch == '{') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for }
            } else if (ch == '}') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for [
            } else if (ch == '[') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for ]
            } else if (ch == ']') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for ,
            } else if (ch == ',') {
                token += ch;
                System.out.printf("Punctuator:\t%s\n", token);
                token = "";
            // Rule for ., .*, ...
            } else if (ch == '.') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == '*') {
                    token += ch;
                    System.out.printf("Punctuator:\t%s\n", token);
                    token = "";
                } else if (ch == '.') {
                    token += ch;
                    i++;
                    ch = file[i];
                    if (ch == '.') {
                        token += ch;
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                    } else {
                        System.out.printf("Operator:\t%s\n", token);
                        token = "";
                        i--;
                    }
                } else {
                    System.out.printf("Punctuator:\t%s\n", token);
                    token = "";
                }
            // Rule for :, ::, :>
            } else if (ch == ':') {
                token += ch;
                i++;
                ch = file[i];
                if (ch == ':') {
                    token += ch;
                    System.out.printf("Punctuator:\t%s\n", token);
                    token = "";
                } else if (ch == '>') {
                    token += ch;
                    System.out.printf("Punctuator:\t%s\n", token);
                    token = "";
                } else {
                    System.out.printf("Punctuator:\t%s\n", token);
                    token = "";
                }
            // Rule for mistakes
            } else {
                System.out.printf("Unknown Symbol:\t%s\n", token);
                System.exit(1);
            }
            i++;
        }
    } // End method lex
} // End class Project1

import java.util.function.Function;
import java.util.stream.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

public class MyClass {
    
    public static List<Integer> squareArray(List<Integer> arr){
        return arr.stream().map((i) -> i*i).collect(Collectors.toList());
    }
    
    
    public static void main(String args[]) {
        Function<List<Integer>, List<Integer>> fun = MyClass::squareArray;
        List<Integer> a1 = Arrays.asList(2,3,4);
        List<Integer> a2 = Arrays.asList(11,13,27,87,81);
        List<Integer> a3 = Arrays.asList(21,34,124,654,872);
        List<Integer> a4 = Arrays.asList(222,153,415);
        System.out.println(fun.apply(a1));
        System.out.println(fun.apply(a2));
        System.out.println(fun.apply(a3));
        System.out.println(fun.apply(a4));
    }
}

//OUTPUT
//[4, 9, 16]
//[121, 169, 729, 7569, 6561]
//[441, 1156, 15376, 427716, 760384]
//[49284, 23409, 172225]

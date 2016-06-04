class Printer {
    //Write your code here
    public <T> void printArray(T[] arr) {
        for (T t : arr) {
            System.out.println(t.toString());
        }
    }
}

// CONSTRUCTORS

class Student {  
    int id = 1; // field or data member or instance variable  
    String name = "shreya";

    Student() {
        id = 4;
        name = "rupesh";
    }

    Student(int x, String str) {
        id = x;
        name = str;
    }

    Student(Student s) {
        id = s.id;
        name = s.name;
    }

    public static void main(String args[]) {  
        Student s1 = new Student(); // creating an object of Student  
        Student s2 = new Student(10, "rupeshshreya");
        Student s3 = new Student(s1); // Use s1 or s2 here
        System.out.println(s1.id);  
        System.out.println(s1.name);  
        System.out.println(s2.id); 
        System.out.println(s2.name); 
        System.out.println(s3.id); 
        System.out.println(s3.name);   
    }  
}

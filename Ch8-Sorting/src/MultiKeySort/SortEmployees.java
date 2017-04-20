package MultiKeySort;

import java.util.Arrays;

public class SortEmployees {
    public void sortEmployees (Employee[] employees) {
        Arrays.sort(employees, new EmployeeNameComparator());
    }
}

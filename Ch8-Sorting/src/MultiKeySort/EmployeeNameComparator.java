package MultiKeySort;

import java.util.Comparator;

public class EmployeeNameComparator implements Comparator<Employee>{
    public int compare (Employee e1, Employee e2) {
        int ret = e1.surname.compareToIgnoreCase(e2.surname);

        if (ret == 0 ) {
            ret = e1.givenname.compareToIgnoreCase(e2.givenname);
        }
        return ret;
    }
}

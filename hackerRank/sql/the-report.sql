SELECT Students.Name, Grades.Grade, Students.Marks FROM Students
INNER JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark WHERE Students.Marks >= 70 ORDER BY Grades.Grade DESC, Students.Name ASC;

SELECT 'NULL', Grades.Grade, Students.Marks FROM Students
INNER JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark WHERE Students.Marks < 70 ORDER BY Grades.Grade DESC, Students.Marks ASC;

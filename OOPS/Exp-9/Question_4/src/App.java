import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

public class App extends JFrame implements ActionListener {
    JTextField idField, nameField, deptField, salaryField;
    JButton insertButton, retrieveButton;
    JTable table;
    DefaultTableModel model;

    App() {
        setTitle("Employee Manager");
        setLayout(new GridLayout(6, 2));

        add(new JLabel("ID:"));
        idField = new JTextField();
        add(idField);

        add(new JLabel("Name:"));
        nameField = new JTextField();
        add(nameField);

        add(new JLabel("Department:"));
        deptField = new JTextField();
        add(deptField);

        add(new JLabel("Salary:"));
        salaryField = new JTextField();
        add(salaryField);

        insertButton = new JButton("Insert");
        insertButton.addActionListener(this);
        add(insertButton);

        retrieveButton = new JButton("Retrieve");
        retrieveButton.addActionListener(this);
        add(retrieveButton);

        model = new DefaultTableModel(new String[]{"ID", "Name", "Department", "Salary"}, 0);
        table = new JTable(model);
        add(new JScrollPane(table));

        setSize(500, 400);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == insertButton) {
            insertEmployee();
        } else if (e.getSource() == retrieveButton) {
            retrieveEmployees();
        }
    }

    void insertEmployee() {
        int id = Integer.parseInt(idField.getText());
        String name = nameField.getText();
        String dept = deptField.getText();
        double salary = Double.parseDouble(salaryField.getText());

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/java", "root", "your_password");
            PreparedStatement pst = con.prepareStatement("INSERT INTO employee VALUES (?, ?, ?, ?)");
            pst.setInt(1, id);
            pst.setString(2, name);
            pst.setString(3, dept);
            pst.setDouble(4, salary);
            pst.executeUpdate();
            con.close();
            JOptionPane.showMessageDialog(this, "Inserted Successfully");
        } catch (Exception ex) {
            ex.printStackTrace();
            JOptionPane.showMessageDialog(this, "Error: " + ex.getMessage());
        }
    }

    void retrieveEmployees() {
        model.setRowCount(0);
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/java", "root", "root@1234");
            Statement st = con.createStatement();
            ResultSet rs = st.executeQuery("SELECT * FROM employee");
            while (rs.next()) {
                model.addRow(new Object[]{
                    rs.getInt("id"),
                    rs.getString("name"),
                    rs.getString("department"),
                    rs.getDouble("salary")
                });
            }
            con.close();
        } catch (Exception ex) {
            ex.printStackTrace();
            JOptionPane.showMessageDialog(this, "Error: " + ex.getMessage());
        }
    }

    public static void main(String[] args) {
        new App();
    }
}

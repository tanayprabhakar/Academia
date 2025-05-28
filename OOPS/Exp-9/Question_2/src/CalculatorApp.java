import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class CalculatorApp extends JFrame implements ActionListener {
    private JTextField displayField;
    private JButton[] numberButtons;
    private JButton addButton, subButton, mulButton, divButton, equalButton, clearButton;
    private String operator;
    private double num1, num2, result;

    public CalculatorApp() {
        setTitle("Simple Calculator");
        setSize(300, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(null);

        displayField = new JTextField();
        displayField.setBounds(30, 20, 220, 30);
        displayField.setEditable(false);
        add(displayField);

        numberButtons = new JButton[10];
        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            numberButtons[i].addActionListener(this);
        }

        addButton = new JButton("+");
        subButton = new JButton("-");
        mulButton = new JButton("*");
        divButton = new JButton("/");
        equalButton = new JButton("=");
        clearButton = new JButton("C");

        addButton.addActionListener(this);
        subButton.addActionListener(this);
        mulButton.addActionListener(this);
        divButton.addActionListener(this);
        equalButton.addActionListener(this);
        clearButton.addActionListener(this);

        int x = 30, y = 70;
        for (int i = 1; i <= 9; i++) {
            numberButtons[i].setBounds(x, y, 50, 40);
            add(numberButtons[i]);
            x += 60;
            if (i % 3 == 0) {
                x = 30;
                y += 50;
            }
        }

        numberButtons[0].setBounds(90, y, 50, 40);
        add(numberButtons[0]);

        clearButton.setBounds(30, y, 50, 40);
        equalButton.setBounds(150, y, 50, 40);

        addButton.setBounds(210, 70, 50, 40);
        subButton.setBounds(210, 120, 50, 40);
        mulButton.setBounds(210, 170, 50, 40);
        divButton.setBounds(210, 220, 50, 40);

        add(clearButton);
        add(equalButton);
        add(addButton);
        add(subButton);
        add(mulButton);
        add(divButton);
    }

    public void actionPerformed(ActionEvent e) {
        for (int i = 0; i < 10; i++) {
            if (e.getSource() == numberButtons[i]) {
                displayField.setText(displayField.getText() + i);
                return;
            }
        }

        if (e.getSource() == addButton) {
            num1 = Double.parseDouble(displayField.getText());
            operator = "+";
            displayField.setText("");
        } else if (e.getSource() == subButton) {
            num1 = Double.parseDouble(displayField.getText());
            operator = "-";
            displayField.setText("");
        } else if (e.getSource() == mulButton) {
            num1 = Double.parseDouble(displayField.getText());
            operator = "*";
            displayField.setText("");
        } else if (e.getSource() == divButton) {
            num1 = Double.parseDouble(displayField.getText());
            operator = "/";
            displayField.setText("");
        } else if (e.getSource() == equalButton) {
            num2 = Double.parseDouble(displayField.getText());
            switch (operator) {
                case "+":
                    result = num1 + num2;
                    break;
                case "-":
                    result = num1 - num2;
                    break;
                case "*":
                    result = num1 * num2;
                    break;
                case "/":
                    result = num1 / num2;
                    break;
            }
            displayField.setText(String.valueOf(result));
        } else if (e.getSource() == clearButton) {
            displayField.setText("");
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            CalculatorApp calculator = new CalculatorApp();
            calculator.setVisible(true);
        });
    }
}

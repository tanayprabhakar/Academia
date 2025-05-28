import javax.swing.*;

class LoginForm {
    static class LoginFrame extends JFrame {
        private JTextField usernameField;
        private JPasswordField passwordField;
        private JButton loginButton;
        private JLabel messageLabel;

        public LoginFrame() {
            setTitle("Login Form");
            setSize(300, 200);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(null);

            JLabel usernameLabel = new JLabel("Username:");
            usernameLabel.setBounds(20, 20, 80, 25);
            add(usernameLabel);

            usernameField = new JTextField();
            usernameField.setBounds(100, 20, 150, 25);
            add(usernameField);

            JLabel passwordLabel = new JLabel("Password:");
            passwordLabel.setBounds(20, 60, 80, 25);
            add(passwordLabel);

            passwordField = new JPasswordField();
            passwordField.setBounds(100, 60, 150, 25);
            add(passwordField);

            loginButton = new JButton("Login");
            loginButton.setBounds(100, 100, 150, 25);
            add(loginButton);

            messageLabel = new JLabel("");
            messageLabel.setBounds(20, 140, 250, 25);
            add(messageLabel);

            loginButton.addActionListener(e -> validateLogin());
        }

        private void validateLogin() {
            String username = usernameField.getText();
            String password = new String(passwordField.getPassword());

            if (username.equals("admin") && password.equals("password")) {
                messageLabel.setText("Login Successful!");
            } else {
                messageLabel.setText("Invalid username or password.");
            }
        }
    }
}

public class App {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            LoginForm.LoginFrame frame = new LoginForm.LoginFrame();
            frame.setVisible(true);
        });
    }
}

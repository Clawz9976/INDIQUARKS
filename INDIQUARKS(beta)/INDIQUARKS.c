#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showLatestNews() {
    // Placeholder for actual news fetching logic
    printf("Latest News in Cyberspace:\n");
    printf("1. Cybersecurity breaches in 2024\n");
    printf("2. New trends in AI and data privacy\n");
    printf("3. New encryption methods gaining traction\n");
    printf("Enter your choice: ");
    int n;
    scanf("%d", &n);
    getchar(); // Consume the newline character

    if(n == 1)
    {
        system("start https://thehackernews.com");
        system("start https://krebsonsecurity.com");
        system("start https://www.darkreading.com");
        system("start https://www.securityweek.com");
        system("start https://www.bleepingcomputer.com");
    }
    if(n == 2)
    {
        system("start https://techcrunch.com"); 
        system("start https://venturebeat.com"); 
        system("start https://www.wired.com"); 
        system("start https://www.theverge.com"); 
        system("start https://artificialintelligence-news.com"); 
    }
    if(n == 3)
    {
        system("start https://pqcrypto.org/");
        system("start https://ieeexplore.ieee.org/xpl/RecentIssue.jsp?punumber=8013");
        system("start https://www.nist.gov/cryptography");
        system("start https://www.theregister.com/");
        system("start https://www.bleepingcomputer.com/");
    }
}

void runTriviaQuiz() {
    srand(time(NULL));
    char* questions[] = {
        "What does 'HTTP' stand for?\nA) HyperText Transfer Protocol\nB) High Text Transfer Protocol\nC) Hyperlink Transfer Protocol\nD) None of the above\n",
        "What is the full form of VPN?\nA) Very Private Network\nB) Virtual Private Network\nC) Verified Private Network\nD) None of the above\n",
        "What is the main purpose of a firewall?\nA) Block malware\nB) Monitor network traffic\nC) Allow secure connections\nD) All of the above\n",
        "What is a firewall primarily used for in cybersecurity?\nA) To monitor network traffic\nB) To block unauthorized access to a network\nC) To secure passwords\nD) To create secure backups\n",
        "What is the primary goal of a DDoS (Distributed Denial of Service) attack?\nA) Steal sensitive data from the target system\nB) Overload the target system with traffic to make it unavailable\nC) Encrypt files to hold them hostage\nD) Gain unauthorized access to a network\n",
        "Which of the following is the best way to prevent SQL Injection attacks?\nA) Use HTTPS for all communication\nB) Validate and sanitize user input\nC) Use weak passwords for the database\nD) Enable automatic backup of the database\n",
        "What is the purpose of multi-factor authentication (MFA)?\nA) To increase password complexity\nB) To provide an extra layer of security by requiring multiple forms of identification\nC) To secure the physical access to a server room\nD) To monitor user activity on a system\n",
        "Which type of malware is designed to give unauthorized access to a victim's computer?\nA) Ransomware\nB) Trojan horse\nC) Virus\nD) Worm\n",
        "What does the term zero-day exploit refer to in cybersecurity?\nA) A flaw in software that is known and patched by the vendor\nB) A vulnerability that has been publicly disclosed but not yet patched\nC) An attack that takes advantage of a vulnerability that has no available fix\nD) A type of ransomware that is used to steal personal data\n",
        "Which of the following is the most effective way to protect against phishing attacks?\nA) Using complex passwords\nB) Regularly updating antivirus software\nC) Educating users and employees to recognize phishing attempts\nD) Installing a firewall\n",
        "What does SSL stand for?\nA) Secure Sockets Layer\nB) Simple Secure Link\nC) Secure Session Layer\nD) None of the above\n",
        "What is the purpose of encryption?\nA) To speed up the data transfer process\nB) To prevent unauthorized access to data\nC) To store data in a cloud server\nD) To organize data in a readable format\n",
        "What is a botnet?\nA) A type of virus that encrypts files\nB) A network of compromised computers used to launch attacks\nC) A firewall protection method\nD) A type of spyware\n",
        "Which of the following is a common indicator of a phishing attempt?\nA) A professional-looking email address from a known company\nB) A request for sensitive information like passwords or account numbers\nC) An email that is sent from a secure server\nD) An email with a subject line containing your name\n",
        "What does the term malware refer to?\nA) Software designed to perform useful tasks\nB) Software that protects against cyber threats\nC) Malicious software intended to damage or exploit devices\nD) Software that monitors network traffic\n",
        "Which type of attack involves intercepting and altering communications between two parties?\nA) Phishing\nB) Man-in-the-middle attack\nC) Denial-of-service attack\nD) Brute force attack\n",
        "What is the role of an antivirus program?\nA) To block unauthorized access to networks\nB) To secure files with strong encryption\nC) To detect and remove harmful software\nD) To backup important files\n",
        "What does the acronym DNS stand for in networking?\nA) Domain Name System\nB) Data Network Security\nC) Direct Network Service\nD) Distributed Network Service\n",
        "Which of the following is an example of social engineering?\nA) A hacker cracking a password using brute force\nB) An attacker tricking someone into revealing confidential information\nC) A malware infection through an email attachment\nD) A DDoS attack on a server\n",
        "What is the main purpose of a VPN?\nA) To create a private, secure connection over a public network\nB) To speed up your internet connection\nC) To monitor your online activity\nD) To store your personal data safely\n",
        "What is the function of two-factor authentication (2FA)?\nA) It requires the user to change their password every week\nB) It requires the user to provide two forms of identification before accessing an account\nC) It encrypts the user's login credentials\nD) It stores login information securely\n",
        "What is the most secure type of password?\nA) A short, easy-to-remember password\nB) A combination of letters, numbers, and special characters\nC) Your name or birthdate\nD) A password saved in your browser\n",
        "Which of the following best describes a phishing attack?\nA) An attempt to overload a website with traffic\nB) A form of social engineering where attackers trick people into providing sensitive information\nC) A software that monitors user activity on a computer\nD) A type of malware that encrypts files on a victim's computer\n",
        "What does the acronym VPN stand for?\nA) Virtual Private Network\nB) Verified Personal Network\nC) Very Private Network\nD) Virtual Public Network\n",
        "What is the purpose of a CAPTCHA test?\nA) To verify that the user is human and not a bot\nB) To test the security of a website\nC) To prevent hackers from accessing a system\nD) To encrypt user information\n",
        "What is a rootkit?\nA) A type of antivirus software\nB) A malicious software that gives an attacker remote control of a system\nC) A backup tool for storing files\nD) A tool to recover lost passwords\n",
        "Which of the following is considered a secure practice for password management?\nA) Using the same password for multiple accounts\nB) Writing passwords on sticky notes\nC) Using a password manager to store and generate passwords\nD) Sharing your password only with trusted friends\n",
        "What is the purpose of data backup?\nA) To increase internet speed\nB) To create extra copies of important files to prevent data loss\nC) To monitor network traffic\nD) To manage user permissions\n",
        "Which of the following can help protect your computer from ransomware?\nA) Installing antivirus software and keeping it updated\nB) Disabling firewalls\nC) Avoiding using complex passwords\nD) Opening all email attachments\n",
        "What is a keylogger?\nA) A tool used to test the strength of passwords\nB) A malicious program that records keystrokes on a device\nC) A type of encryption algorithm\nD) A tool used for secure file sharing\n"
        "What is the primary difference between symmetric and asymmetric encryption?\nA) Symmetric encryption uses the same key for both encryption and decryption, while asymmetric encryption uses a public and private key pair.\nB) Symmetric encryption uses two different keys for encryption and decryption, while asymmetric encryption uses one key for both.\nC) Symmetric encryption is less secure than asymmetric encryption due to the shared key.\nD) There is no significant difference between the two methods, except for the size of the keys used.\n",
        "Which of the following attack types exploits vulnerabilities in the implementation of cryptographic algorithms, such as weak random number generation or side-channel leaks?\nA) Buffer Overflow\nB) Man-in-the-Middle\nC) Cryptanalysis\nD) Cross-Site Scripting (XSS)\n",
        "What is the primary purpose of a honeypot in cybersecurity?\nA) To trap and neutralize malware in a secure environment.\nB) To create a decoy system that attracts and analyzes attackers’ techniques and behaviors.\nC) To back up critical data in case of a cyberattack.\nD) To monitor and log all network traffic for potential security issues.\n",
        " Which protocol is most commonly used to secure communication between a web browser and a server by ensuring the confidentiality and integrity of data in transit?\nA) FTP\nB) TLS/SSL\nC) HTTP\nD) SNMP\n",
        "Which of the following is a method used by attackers to evade detection during a DDoS (Distributed Denial of Service) attack?\nA) Using high-bandwidth servers to flood a single target.\nB) Employing botnets to generate traffic from multiple, distributed sources.\nC) Encrypting traffic to make it harder to identify.\nD) Employing anti-virus software to hide the origin of the attack.\n",
        "Which attack type involves an attacker gaining unauthorized access to a system through a series of weak authentication mechanisms, such as reused passwords, poor password complexity, or easily guessed passwords?\nA) Brute Force Attack\nB) Credential Stuffing\nC) Phishing\nD) Social Engineering\n",
        "In the context of network security, what does the term Zero Trust Architecture (ZTA) refer to?\nA) A network security model where access is restricted by default, regardless of the location or device, and all users must be authenticated and authorized continuously.\nB) A model where the user’s device is trusted once it successfully logs into the system.\nC) A security framework that only applies to cloud-based services.\nD) A network model where internal traffic is considered safe and not subject to strict monitoring.\n",
        "Which of the following is a characteristic of an Advanced Persistent Threat (APT)?\nA) An APT attack typically happens in a single instance and is quickly detected.\nB) APTs are usually short-term attacks executed by hacktivists.\nC) APTs are long-term, targeted attacks by well-funded threat actors aiming for sustained access and data exfiltration.\nD) APTs always exploit zero-day vulnerabilities to execute the attack.\n",
        "Which cryptographic method can be used to verify the integrity of data by generating a unique hash value that is stored with the data, ensuring it hasn’t been altered during transmission or storage?\nA) Symmetric encryption\nB) Asymmetric encryption\nC) Hashing\nD) Digital Signature\n",
        "What is a major vulnerability of the WPA2 protocol in Wi-Fi networks that was exploited in the KRACK (Key Reinstallation Attack)?\nA) Weak passwords used in the initial handshake\nB) An issue in the encryption process that allows attackers to inject malicious packets into the network\nC) The lack of a proper key exchange mechanism\nD) An inability to verify the integrity of received data frames\n"    
    };

    char* answers[] = {"A", "B", "D", "B", "B", "B", "B", "B", "C","C","A", "B", "B", "B", "C", "B", "C", "A", "B", "A", "B", "B", "B", "A", "A", "B", "C", "B", "B", "B","A","C","B","B","B","B","A","C","C","B"};

    int score = 0;
    char userAnswer;
    printf("Starting trivia quiz!\n");
    int max = 39;
    int min = 0;
    int rand_num; 
    for (int i = 0; i < 10; i++) { // Adjusted to 10 questions
        rand_num = min + rand()%(max - min + 1);
        printf("%s",questions[rand_num]);
        printf("Your answer: ");
        userAnswer = getchar();
        getchar();  // To consume the newline character left by getchar()
      if(userAnswer == 'A' || userAnswer == 'B' || userAnswer == 'C' || userAnswer == 'D')
      { if (userAnswer == answers[rand_num][0]) {
            score++;
        }
      }else{
        printf("Input a proper option (answer in caps and answer in single letters)\n\n\n\n\n");
        runTriviaQuiz();
      }

       
    }

    printf("Your score: %d out of 10\n", score);
}

void showCyberSecurityCourseLinks() {
    system("start https://www.mygreatlearning.com/cybersecurity/free-courses");
    system("start https://www.edx.org/course/cybersecurity-essentials");
    system("start https://www.offensive-security.com/pwk-oscp/");
    
}



void showLiveCyberEvents() {
    system("start https://www.defcon.org/");
    system("start https://www.blackhat.com/");
    system("start https://www.rsaconference.com/");
    system("start https://www.cybersecuritysummit.com/");
}

int main() {
    int choice;

    do {
        printf("\nPlease choose an option:\n");
        printf("1) Latest news in the cyberspace\n");
        printf("2) Trivia Time!!\n");
        printf("3) Try learning cyber security course (give links)\n");
        printf("4) Links to live cyber events\n");
        printf("5) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline after entering choice

        switch (choice) {
            case 1:
                showLatestNews();
                break;
            case 2:
                runTriviaQuiz();
                break;
            case 3:
                showCyberSecurityCourseLinks();
                break;
            case 4:
                showLiveCyberEvents();
                break;
            case 5:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);
return 0;
}

const malwareInfo = {
    "malware1": {
        name: "Trojan Horse",
        description: "A Trojan Horse is a type of malware that disguises itself as a legitimate file or program to trick users into installing it. Once inside, it can steal data, install other malicious software, or give unauthorized access to a system."
    },
    "malware2": {
        name: "Ransomware",
        description: "Ransomware locks or encrypts a user's data, holding it hostage in exchange for a ransom. It often targets both individuals and businesses, causing financial losses and data breaches."
    },
    "malware3": {
        name: "Spyware",
        description: "Spyware is a type of malware designed to gather information about a person or organization without their knowledge. It can track online activities, log keystrokes, and even steal sensitive data like login credentials."
    },
    "malware4": {
        name: "Worm",
        description: "A worm is a self-replicating malware that spreads across networks without the need for human intervention. It can cause widespread damage, consume bandwidth, and disrupt network operations."
    },
    "malware5": {
        name: "Adware",
        description: "Adware displays unwanted advertisements on a user's device. While not always malicious, it can slow down systems, drain battery life, and sometimes lead to more harmful malware installations."
    },
    "malware6": {
        name: "Rootkit",
        description: "A rootkit is a collection of software tools that enable unauthorized access to a system while hiding its presence. It's often used by hackers to maintain privileged access to compromised systems."
    },
    "malware7": {
        name: "Botnet",
        description: "A botnet is a network of infected devices controlled by a hacker. These devices, known as 'zombies,' are often used to launch distributed denial-of-service (DDoS) attacks or send spam emails."
    },
    "malware8": {
        name: "Keylogger",
        description: "A keylogger is software or hardware designed to record the keystrokes of a user, often used to steal sensitive information such as usernames, passwords, and credit card numbers."
    },
    "malware9": {
        name: "Phishing",
        description: "Phishing is a form of social engineering where attackers trick individuals into revealing personal information by impersonating legitimate institutions through fake emails or websites."
    },
    "malware10": {
        name: "Cryptojacking",
        description: "Cryptojacking is when hackers use your device's processing power to mine cryptocurrency without your consent. This can significantly slow down your device and increase electricity costs."
    }
};

function showMalwareInfo() {
    const selectedMalware = document.getElementById("malware-dropdown").value;
    const infoSection = document.getElementById("malware-info");

    if (selectedMalware) {
        const malware = malwareInfo[selectedMalware];
        infoSection.innerHTML = `
            <h2>${malware.name}</h2>
            <p>${malware.description}</p>
        `;
    } else {
        infoSection.innerHTML = `<p>Select a malware from the dropdown to learn more about it.</p>`;
    }
}

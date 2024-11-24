function showSection(sectionId) {
    const content = document.getElementById('content');
    let sectionHTML = '';

    switch (sectionId) {
        case 'linuxSetup':
            sectionHTML = `
                <h2>How to Setup a Linux Machine</h2>
                <ol>
                    <li>Download the desired Linux distribution ISO (e.g., Ubuntu, Fedora).</li>
                    <li>Create a bootable USB using tools like Rufus or Etcher.</li>
                    <li>Boot your system from the USB by accessing BIOS/UEFI settings.</li>
                    <li>Follow the installation wizard to partition disks and configure the OS.</li>
                    <li>Complete the setup and explore Linux!</li>
                    <li><a href ="https://www.linux.org/pages/download/" target="_blank">linux.org</a>.</li>
                </ol>
            `;
            break;
        case 'kaliSetup':
            sectionHTML = `
                <h2>How to Setup Kali Linux</h2>
                <ol>
                    <li>Download the Kali Linux ISO from <a href="https://www.kali.org/" target="_blank">kali.org</a>.</li>
                    <li>Create a bootable USB with tools like Etcher.</li>
                    <li>Boot into the USB and choose "Graphical Install" or "Install".</li>
                    <li>Partition your disk and select the desktop environment (default is Xfce).</li>
                    <li>Finish installation and reboot into Kali Linux.</li>
                </ol>
            `;
            break;
        case 'createGithub':
            sectionHTML = `
                <h2>How to Create a GitHub Repository</h2>
                <ol>
                    <li>Log in to your GitHub account at <a href="https://github.com/" target="_blank">github.com</a>.</li>
                    <li>Click the "New" button or go to <a href="https://github.com/new" target="_blank">github.com/new</a>.</li>
                    <li>Enter a repository name and description (optional).</li>
                    <li>Choose repository visibility: public or private.</li>
                    <li>Click "Create repository" to finish!</li>
                </ol>
            `;
            break;
        case 'githubAmenities':
            sectionHTML = `
                <h2>Basic Amenities in GitHub</h2>
                <ul>
                    <li><strong>Repositories:</strong> Store and manage your code.</li>
                    <li><strong>Branches:</strong> Work on different features without affecting the main codebase.</li>
                    <li><strong>Pull Requests:</strong> Collaborate on code changes with team members.</li>
                    <li><strong>Issues:</strong> Track bugs and feature requests.</li>
                    <li><strong>Actions:</strong> Automate workflows like testing and deployment.</li>
                    <li>Log in to your GitHub account at <a href="https://github.com/" target="_blank">github.com</a>.</li>
                </ul>
            `;
            break;
        case 'kaliTools':
            sectionHTML = `
                <h2>Basic Kali Linux Tools & Applications</h2>
                <ul>
                    <li><strong>nmap:</strong> Network scanning and vulnerability discovery.Learn more here<a href="https://www.geeksforgeeks.org" target="_blank">https://www.geeksforgeeks.org/nmap-command-in-linux-with-examples/</a>.</li>
                    <li><strong>Metasploit:</strong> Penetration testing framework.Learn more here<a href="https://www.metasploit.com/" target="_blank">https://www.metasploit.com/</a>.</li>
                    <li><strong>Wireshark:</strong> Network protocol analyzer for troubleshooting and security analysis.Learn more here<a href="https://www.geeksforgeeks.org/introduction-to-wireshark/" target="_blank">https://www.geeksforgeeks.org/introduction-to-wireshark/</a>.</li>
                    <li><strong>Burp Suite:</strong> Web vulnerability scanner.Learn more here<a href="https://www.geeksforgeeks.org/what-is-burp-suite/" target="_blank">https://www.geeksforgeeks.org/what-is-burp-suite/</a>.</li>
                    <li><strong>John the Ripper:</strong> Password cracking tool.Learn more here<a href="https://www.esecurityplanet.com/products/john-the-ripper/" target="_blank">https://www.esecurityplanet.com/products/john-the-ripper/</a>.</li>
                </ul>
            `;
            break;
        default:
            sectionHTML = `
                <h2>Welcome!</h2>
                <p>Click on the buttons above to explore more about each topic.</p>
            `;
    }

    content.innerHTML = sectionHTML;
}

function redirectToIndiquarks() {
    window.location.href = "https://github.com/Clawz9976/INDIQUARKS/blob/main/INDIQUARKS.c";
}

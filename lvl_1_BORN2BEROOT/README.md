### Introduction

- Virtual Machine

Virtual Machine (VM), is equal to a physical computer. It has CPU, RAM, HD and (usually) can connect to the internet. The only difference is VM work like a software computer, existing only as a code, running inside a physical server. You can have inside your computer a VM, you can run different operating systems (Linux/MAC/Windows), use a big server (like Azure) or your won computer. 
We named it "Virtual" because is a virtual version of a computer. Perhaps virtual, it has a dedicated amount of CPU, RAM and HD, "borrowed" from a physical host computer, normally a cloud provider's data center.

![image](https://user-images.githubusercontent.com/101360239/218759498-b6a5eb0e-05fa-41b5-b36c-72423eba7276.png)


- How VM work

In minimal explanation, VM is a computer file. It is an image that behaves like an actual computer. 
You can run is a window "separate from the computer" or function as the user's entire computer
To be more clear one of the strongest points of VM is it is partitioned from the rest of the system, the software running inside can't interfere with the host computer operating system.

![image](https://user-images.githubusercontent.com/101360239/216980968-3070e086-2e0a-48d9-8204-db42dff297ef.png)

- LVM

LVM is a form of storage virtualization that offers system administrators a more flexible approach to managing disk storage, this tool gives you the power to allocate disks, create, resize, delete and mirror your HD.
![image](https://user-images.githubusercontent.com/101360239/216986265-8c0e0ff9-79ca-40e5-80c7-3a08c91683b7.png)
But first, we need to understand 3 concepts in LVM: Volume Groups, Physical Volumes and Logical Volumes.
Volume Group is a named collection of physical and logical volumes, systems only need one Volume Group to contain the physical and logical volumes. 
Physical Volumes are the disks; block devices that provide the space to store logical volumes. 
Logical volumes are partitions, they hold a filesystem and get names rather than numbers, they can span across multiple disks, and they do not have to be physically contiguous. 
To be clear, if you have more than one HD, with the LVM you can extend "the size of the store" over more than one HD, they are not limited by the real size of each HD, the limit is the total aggregate size.
You also can create an image of any LV, and with that you can revert the original LV at a later time. This is very handy for backups.

- AppArmor

App is a Mandatory Access Control (MAC). But what is a Mandatory Access Control? 
MAC is a method of limiting access to resources based on the sensitivity of the information.
You have to define the security label of your resource, this label goes from 0 to any level you need. This works because of the hierarchical classification of the resources, like an inverted pyramid. And you also can slice the levels, some information can be used by Group A or Group B.
Users can access only the information in a resource to which their security labels entitle them. If the user's security label does not have enough authority, the user cannot access the information in the resource.
![image](https://user-images.githubusercontent.com/101360239/217017358-0f1a59a0-e1c7-4181-a6bf-ccdd45add915.png)
So, AppArmor is a system of MAC for Linux, used to confine programs and limited resources from Users. 
AppArmor is so good because the confinement is provided via boot, and you can bind access control to programs rather than to users.
There are two profile modes: enforcement and complain. 
Profiles loaded in enforcement mode will result in enforcement of the policy defined in the profile as well as reporting policy violation attempts.
Profiles in complain mode will not enforce policy but instead report policy violation attempts.
The big difference from other MAC systems on Linux is the possibility of mixing enforcement and complain profiles.

- Apt or Aptitude

APT stands for Advanced Packaging Tool, an open/source tool, designed to handle software installation and removal. 
It is a command-line tool with no visual reference from a graphical interface.
The word that rules APT is flexible. The user can configure how APT works, including adding new sources, providing up-gradation options, and more.
On the other side, Aptitude is close to API, but you have a graphical interface, you use to emulate most of the apt get's command line and you have flexible but less than APT.
API can be used for package up-gradation, installation, resolving dependencies, system up-gradation, and more. However, Aptitude is good to inclusion functionalities of apt-cache and apt-mark, having more functionality, including package search, setting package installation as automation or manual, and more refined actions on the packages.

- SSH

SSH or Secure Shell is a network communication protocol that enables two computers to communicate (c.f http or hypertext transfer protocol, which is the protocol used to transfer hypertext such as web pages) and share data. An inherent feature of ssh is that the communication between the two computers is encrypted meaning that it is suitable for use on insecure networks.
SSH is often used to "login" and perform operations on remote computers but it may also be used for transferring data.
SSH enables us to provide a service with encrypted access for the widest range of operating systems (Windows XP-10, Max OS X and Linux); this would not be possible if we provided Windows networked drives (which utilise the SMB/CIFS communication protocol). SSH is reliable and secure and is often used in the High Performance Computing community for this reason.

![image](https://user-images.githubusercontent.com/101360239/218759837-87b249d1-8e71-4eae-bde5-d8faa7c8c3f3.png)



- UFW with SSH

UFW stands for Uncomplicated Firewall. It is a command-line interface firewall configuration tool used in Linux systems to manage incoming and outgoing traffic. UFW is designed to make it easier for users to manage their firewall rules without requiring advanced knowledge of iptables
A firewall is a security system that monitors and controls the incoming and outgoing network traffic based on predetermined security rules. It acts as a barrier between a trusted internal network and an untrusted external network, such as the internet, to protect against unauthorized access and malicious attacks. Firewalls can be hardware devices, software programs, or a combination of both. They are a fundamental component of network security and help prevent data breaches, malware infections, and other cyber threats.
SSH and UFW are both related to network security on Linux systems. SSH (Secure Shell) is a network protocol used to establish a secure connection between two computers, typically for remote access or file transfers. UFW (Uncomplicated Firewall) is a tool used to configure the firewall on a Linux system to restrict or allow network traffic.
When using SSH to connect to a remote Linux system, the connection is typically secured by the SSH protocol, which encrypts the data sent over the network. However, to further enhance the security of the system, it is recommended to configure the firewall using UFW to restrict access to the SSH port (usually port 22) to only trusted sources. This helps to prevent unauthorized access attempts to the system and reduces the risk of successful attacks. Therefore, using UFW in conjunction with SSH can help to create a more secure network environment on a Linux system

![image](https://user-images.githubusercontent.com/101360239/218759982-abcfb061-b111-4dab-8b2b-311028a12c0a.png)



- Cron and Wall

Cron is a job scheduler. It allows users to schedule tasks or commands to run automatically at specified intervals. These scheduled tasks are known as "cron jobs". 
Cron is often used to automate system maintenance tasks, such as backups or updates, and to perform periodic tasks like sending emails or generating reports. 
And "wall" is a command used to send a message to all logged-in users on a Linux system. It stands for "write all" and broadcasts a message to all active terminals or TTYs.
The "wall" command is often used in combination with cron to notify users of important events or scheduled maintenance tasks. For example, a system administrator might set up a cron job to run a backup script and then use the "wall" command to notify all users that the backup is in progress and that the system may be temporarily unavailable.
The message sent using the "wall" command is typically displayed as a full-screen message, and it can be an effective way to communicate with users who are currently logged in to the system. 

![image](https://user-images.githubusercontent.com/101360239/218760357-54b63d14-3bc0-4f3c-af8a-66d0d4611d34.png)


- Sudo

Sudo or "superuser do" is a command-line utility that allows users to execute commands with the privileges of another user, typically the root user. It is often used to perform administrative tasks that require elevated privileges, such as installing software or modifying system settings.
The use of sudo helps to prevent unauthorized access to the root account, which is a powerful account that can make system-wide changes. Instead of logging in as the root user, which can be dangerous and should be avoided whenever possible, users can use the sudo command to temporarily elevate their privileges and perform the necessary tasks.

![image](https://user-images.githubusercontent.com/101360239/218760839-dc4d9ca7-6889-4f6c-8447-54e56cdcd6dd.png)



- Script

A script is a program written in a scripting language that can be executed by an interpreter or a command-line interface. Scripts are typically used to automate tasks or perform repetitive actions, such as file manipulation, system administration, or data processing.
Scripts can be executed manually from a command-line interface or scheduled to run automatically at specific intervals using tools such as cron. They can also be integrated with other programs or systems using APIs or other interfaces, making them versatile and powerful tools for automating tasks and improving productivity.

![image](https://user-images.githubusercontent.com/101360239/218761042-18aea697-abe8-4fc2-9a9b-71240e8fbe11.png)

Scripts can be executed manually from a command-line interface or scheduled to run automatically at specific intervals using tools such as cron. They can also be integrated with other programs or systems using APIs or other interfaces, making them versatile and powerful tools for automating tasks and improving productivity.

- Rocky or Debian

Rocky and Debian are high-quality Linux distributions, but they have different strengths and target audiences. Debian is stable and with a long history, while Rocky is a newer design for users who prefer a rolling release model and are familiar with the Red Hat/CentOS ecosystem.

![image](https://user-images.githubusercontent.com/101360239/218761262-e7f6e3b8-42ed-414d-b23f-f2c64151751a.png)


- TTY

Teletype refers to a physical or virtual terminal device used to interact with the system.

![image](https://user-images.githubusercontent.com/101360239/218761419-6726f35e-180f-4dee-9296-7561195b26a3.png)


***


### Installation

***

### Sudo

- Installing
- Adding User to GroupStep 
- Running rootPrivileged CommandsStep 
- Configuring

***

### SSH
- Setting Up SSH
- Setting Up UFW
- Connecting to Server through SSH

***

### User Management
- Strong Password Policy (Password Age/Strength
- Creating a New User
- Creating a New Group

***

### Cron
- Setting Up

***

### Monitoring


***

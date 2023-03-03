# CIRCLE 1 - 1.2 BORN2BEROOT

***

1. [TASK](#task) ✅
	- 1.1. [Introduction](#introduction) ✅
	- 1.2. [Mandatory](#mandatory) ✅
	- 1.3. [Bonus](#bonus) ✅
2. [PROJECT CONCEPT](#projectconcept) ✅
	- 2.1. [Virtual Machine](#virtualmachine) ✅
	- 2.2. [How VM work](#howvmwork) ✅
	- 2.3. [LVM](#lvm) ✅
	- 2.4. [AppArmor](#apparmor) ✅
	- 2.5. [Apt or Aptitude](#aptoraptitude) ✅
	- 2.6. [SSH](#ssh) ✅
	- 2.7. [UFW with SSH](#ufwwithssh) ✅
	- 2.8. [Cron and Wall](#cronandwall) ✅
	- 2.9. [Sudo](#sudo) ✅
	- 2.10. [Script](#script) ✅
	- 2.11. [Rocky or Debian](#rockyordebian) ✅
	- 2.12. [TTY](#tty) ✅
3. [WALKTHROUGH](#walkthrough)
	- 3.1. [Downloading OS and VM](#downloadingosandvm) ⏺️
	- 3.2. [Installing VM](#installingvm) ⏺️
	- 3.3. [Installing OS](#installingos) ⏺️
	- 3.4. [Configurating VM](#configuratingvm) ✅
		- 3.4.1 [sudo](#sudo3) ✅
		- 3.4.2 DELETADO
		- 3.4.3 [SSH](#ssh3) ✅
		- 3.4.4 [UFW](#ufw3) ✅
	- 3.5. [Connecting to SSH](#connectingtossh) ✅
	- 3.6. [Continue Configurating VM](#continueconfiguratingvm) ✅
		- 3.6.1 [Password Policy](#passwordpolicy) ✅
		- 3.6.2 [Group](#group) ✅
		- 3.6.3 [User (Group)](#user) ✅
		- 3.6.4 [sudo.log](#sudolog) ✅
			- 3.6.4.1 [Configuring sudoers group](#sudoers) ✅
		- 3.6.5 [cron](#cron) ✅
		- 3.6.6 [Script](#script2)❗️
	- 3.7. [Signature.txt](#signature) ✅
4. [COMMAND TIPS](#commands)❗️

***

# 1.TASK <a name="task"></a>
## 1.1 Introduction<a name="introduction"></a>
<p align="justify">
The purpose of this project is to familiarize you with virtualization, where you will follow step-by-step instructions to create your first virtual machine using VirtualBox or UTM if VirtualBox is unavailable. By the end of this project, you will have the ability to set up your operating system with stringent guidelines in place.
 </p>
 
## 1.2 Mandatory <a name="mandatory"></a>

<p align="justify">
Although the project allows you to choose between Debian and Rocky, it is recommended that new system administrators opt for Debian. For this reason, we have selected Debian as the operating system for this project.

We must create at least 2 encrypted partitions using LVM:
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218792124-a2877ec7-6bd2-40e2-9f0d-4bed1120f247.png" width="600" height="300">
</p>

<p align="justify">
A SSH service will be running on port 4242 only. For security reasons, it must not be possible to connect using SSH as root.
</p>

<p align="justify">
We have to configure your operating system with the UFW firewall and thus leave only port 4242 open.
</p>

<p align="justify">
To meet the project requirements, we must ensure that the hostname of our virtual machine ends with 42 and matches our login (e.g., rb42). During evaluation, we will be required to modify this hostname. Additionally, we must implement a strong password policy, and install and configure sudo according to strict guidelines. Apart from the root user, we must create a user with our login as the username, and ensure that the user belongs to both the user42 and sudo groups.
</p>

<p align="justify">
To establish a robust password policy, we must adhere to the following criteria:
</p>

<p align="justify">
Passwords must expire every 30 days.
The minimum number of days before a password can be modified will be set to 2.
A warning message must be displayed to the user 7 days before their password expires.
Passwords must be at least 10 characters in length, contain at least one uppercase letter, one lowercase letter, and one number, and must not have more than 3 consecutive identical characters.
Usernames must not be included in passwords.
The rule that requires the password to have at least 7 characters that are not part of the former password does not apply to the root password.
The root password must also comply with this policy.
</p>

<p align="justify">
To establish a robust configuration for the sudo group, we must comply with the following guidelines:
</p>

<p align="justify">
Sudo authentication attempts must be limited to 3 in case of an incorrect password.
A customized error message must be displayed in the event of an incorrect password when using sudo.
Each sudo action must be archived, including inputs and outputs, and the log file must be stored in the /var/log/sudo/ directory.
The TTY mode must be enabled to enhance security.
The paths that can be used by sudo must be restricted to improve security. For example: /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin
</p>

<p align="justify">
As the final step, we need to create a bash script named "monitoring.sh." This script should display certain information on all terminals every 10 minutes (use "wall" for this purpose) during server startup. The banner can be added optionally, and no errors should be visible.
</p>

<p align="justify">
The following information must always be displayed by the script:
</p>

<p align="justify">
The architecture of the operating system and its kernel version
The number of physical processors
The number of virtual processors
The current available RAM on the server and its utilization rate as a percentage
The current available memory on the server and its utilization rate as a percentage
The current utilization rate of the processors as a percentage
The date and time of the last reboot
Whether LVM is active or not
The number of active connections
The number of users currently using the server
The IPv4 address of the server and its MAC (Media Access Control) address
The number of commands executed with the sudo program.
Here's an example of how the script is supposed to work:
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218792691-87587d94-41a5-4566-ae5f-8556747eefe0.png" width="600" height="300">
</p>

<p align="justify">
Below are two commands you can use to check some of the subject’s requirements:
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218792834-86ad471c-fa11-40c3-965c-414cf904f4cd.png" width="600" height="300">
</p>

## 1.3 Bonus <a name="bonus"></a>
<p align="justify">
Set up partitions correctly so we get a structure similar to the one below:

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218793017-b051fa45-de00-4a0d-bbbc-69f5cca3b890.png" width="600" height="300">
</p>

Set up a functional WordPress website with the following services: lighttpd, MariaDB, and PHP.

Set up a service of choice that you think is useful (NGINX / Apache2 excluded!).
</p>

***

# 2. PROJECT CONCEPT <a name="projectconcept"></a>

## 2.1 Virtual Machine <a name="virtualmachine"></a>
<p align="justify">
Virtual Machine (VM), is equal to a physical computer. It has CPU, RAM, HD and (usually) can connect to the internet. The only difference is VM work like a software computer, existing only as a code, running inside a physical server. You can have inside your computer a VM, you can run different operating systems (Linux/MAC/Windows), use a big server (like Azure) or your won computer. 
We named it "Virtual" because is a virtual version of a computer. Perhaps virtual, it has a dedicated amount of CPU, RAM and HD, "borrowed" from a physical host computer, normally a cloud provider's data center.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218759498-b6a5eb0e-05fa-41b5-b36c-72423eba7276.png" width="600" height="300">
</p>
</p>

## 2.2 How VM work <a name="howvmwork"></a>
<p align="justify">
In minimal explanation, VM is a computer file. It is an image that behaves like an actual computer. 
You can run is a window "separate from the computer" or function as the user's entire computer
To be more clear one of the strongest points of VM is it is partitioned from the rest of the system, the software running inside can't interfere with the host computer operating system.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/216980968-3070e086-2e0a-48d9-8204-db42dff297ef.png" width="600" height="300">
</p>
</p>

## 2.3 LVM <a name="lvm"></a>

<p align="justify">
LVM is a form of storage virtualization that offers system administrators a more flexible approach to managing disk storage, this tool gives you the power to allocate disks, create, resize, delete and mirror your HD.
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/216986265-8c0e0ff9-79ca-40e5-80c7-3a08c91683b7.png" width="600" height="300">
</p>

<p align="justify">
But first, we need to understand 3 concepts in LVM: Volume Groups, Physical Volumes and Logical Volumes.
Volume Group is a named collection of physical and logical volumes, systems only need one Volume Group to contain the physical and logical volumes. 
Physical Volumes are the disks; block devices that provide the space to store logical volumes. 
Logical volumes are partitions, they hold a filesystem and get names rather than numbers, they can span across multiple disks, and they do not have to be physically contiguous. 
To be clear, if you have more than one HD, with the LVM you can extend "the size of the store" over more than one HD, they are not limited by the real size of each HD, the limit is the total aggregate size.
You also can create an image of any LV, and with that you can revert the original LV at a later time. This is very handy for backups.
</p>

## 2.4 AppArmor <a name="apparmor"></a>

<p align="justify">
App is a Mandatory Access Control (MAC). But what is a Mandatory Access Control? 
MAC is a method of limiting access to resources based on the sensitivity of the information.
You have to define the security label of your resource, this label goes from 0 to any level you need. This works because of the hierarchical classification of the resources, like an inverted pyramid. And you also can slice the levels, some information can be used by Group A or Group B.
Users can access only the information in a resource to which their security labels entitle them. If the user's security label does not have enough authority, the user cannot access the information in the resource.
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/217017358-0f1a59a0-e1c7-4181-a6bf-ccdd45add915.png" width="600" height="300">
</p>

<p align="justify">
So, AppArmor is a system of MAC for Linux, used to confine programs and limited resources from Users. 
AppArmor is so good because the confinement is provided via boot, and you can bind access control to programs rather than to users.
There are two profile modes: enforcement and complain. 
Profiles loaded in enforcement mode will result in enforcement of the policy defined in the profile as well as reporting policy violation attempts.
Profiles in complain mode will not enforce policy but instead report policy violation attempts.
The big difference from other MAC systems on Linux is the possibility of mixing enforcement and complain profiles.
</p>

## 2.5 Apt or Aptitude <a name="aptoraptitude"></a>
<p align="justify">
APT stands for Advanced Packaging Tool, an open/source tool, designed to handle software installation and removal. 
It is a command-line tool with no visual reference from a graphical interface.
The word that rules APT is flexible. The user can configure how APT works, including adding new sources, providing up-gradation options, and more.
On the other side, Aptitude is close to API, but you have a graphical interface, you use to emulate most of the apt get's command line and you have flexible but less than APT.
API can be used for package up-gradation, installation, resolving dependencies, system up-gradation, and more. However, Aptitude is good to inclusion functionalities of apt-cache and apt-mark, having more functionality, including package search, setting package installation as automation or manual, and more refined actions on the packages.
</p>

## 2.6 SSH <a name="ssh"></a>
<p align="justify">
SSH or Secure Shell is a network communication protocol that enables two computers to communicate (c.f http or hypertext transfer protocol, which is the protocol used to transfer hypertext such as web pages) and share data. An inherent feature of ssh is that the communication between the two computers is encrypted meaning that it is suitable for use on insecure networks.
SSH is often used to "login" and perform operations on remote computers but it may also be used for transferring data.
SSH enables us to provide a service with encrypted access for the widest range of operating systems (Windows XP-10, Max OS X and Linux); this would not be possible if we provided Windows networked drives (which utilise the SMB/CIFS communication protocol). SSH is reliable and secure and is often used in the High Performance Computing community for this reason.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218759837-87b249d1-8e71-4eae-bde5-d8faa7c8c3f3.png" width="600" height="300">
</p>

</p>

## 2.7 UFW with SSH <a name="ufwwithssh"></a>
<p align="justify">
UFW stands for Uncomplicated Firewall. It is a command-line interface firewall configuration tool used in Linux systems to manage incoming and outgoing traffic. UFW is designed to make it easier for users to manage their firewall rules without requiring advanced knowledge of iptables
A firewall is a security system that monitors and controls the incoming and outgoing network traffic based on predetermined security rules. It acts as a barrier between a trusted internal network and an untrusted external network, such as the internet, to protect against unauthorized access and malicious attacks. Firewalls can be hardware devices, software programs, or a combination of both. They are a fundamental component of network security and help prevent data breaches, malware infections, and other cyber threats.
SSH and UFW are both related to network security on Linux systems. SSH (Secure Shell) is a network protocol used to establish a secure connection between two computers, typically for remote access or file transfers. UFW (Uncomplicated Firewall) is a tool used to configure the firewall on a Linux system to restrict or allow network traffic.
When using SSH to connect to a remote Linux system, the connection is typically secured by the SSH protocol, which encrypts the data sent over the network. However, to further enhance the security of the system, it is recommended to configure the firewall using UFW to restrict access to the SSH port (usually port 22) to only trusted sources. This helps to prevent unauthorized access attempts to the system and reduces the risk of successful attacks. Therefore, using UFW in conjunction with SSH can help to create a more secure network environment on a Linux system

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218759982-abcfb061-b111-4dab-8b2b-311028a12c0a.png" width="600" height="300">
</p>


</p>

## 2.8 Cron and Wall <a name="cronandwall"></a>
<p align="justify">
Cron is a job scheduler. It allows users to schedule tasks or commands to run automatically at specified intervals. These scheduled tasks are known as "cron jobs". 
Cron is often used to automate system maintenance tasks, such as backups or updates, and to perform periodic tasks like sending emails or generating reports. 
And "wall" is a command used to send a message to all logged-in users on a Linux system. It stands for "write all" and broadcasts a message to all active terminals or TTYs.
The "wall" command is often used in combination with cron to notify users of important events or scheduled maintenance tasks. For example, a system administrator might set up a cron job to run a backup script and then use the "wall" command to notify all users that the backup is in progress and that the system may be temporarily unavailable.
The message sent using the "wall" command is typically displayed as a full-screen message, and it can be an effective way to communicate with users who are currently logged in to the system. 

cd /usr/local/bin – to show monitoring.sh
sudo crontab -u root -e – to edit the cron job
change script to */1 * * * * sleep 30s && script path – to run it every 30 seconds, delete the line to stop the job from running.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218760357-54b63d14-3bc0-4f3c-af8a-66d0d4611d34.png" width="600" height="300">
</p>
</p>

## 2.9 Sudo <a name="sudo"></a>
<p align="justify">
Sudo or "superuser do" is a command-line utility that allows users to execute commands with the privileges of another user, typically the root user. It is often used to perform administrative tasks that require elevated privileges, such as installing software or modifying system settings.
The use of sudo helps to prevent unauthorized access to the root account, which is a powerful account that can make system-wide changes. Instead of logging in as the root user, which can be dangerous and should be avoided whenever possible, users can use the sudo command to temporarily elevate their privileges and perform the necessary tasks.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218760839-dc4d9ca7-6889-4f6c-8447-54e56cdcd6dd.png" width="600" height="300">
</p>

</p>

## 2.10 Script <a name="script"></a>
<p align="justify">
A script is a program written in a scripting language that can be executed by an interpreter or a command-line interface. Scripts are typically used to automate tasks or perform repetitive actions, such as file manipulation, system administration, or data processing.
Scripts can be executed manually from a command-line interface or scheduled to run automatically at specific intervals using tools such as cron. They can also be integrated with other programs or systems using APIs or other interfaces, making them versatile and powerful tools for automating tasks and improving productivity.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218761042-18aea697-abe8-4fc2-9a9b-71240e8fbe11.png" width="600" height="300">
</p>

Scripts can be executed manually from a command-line interface or scheduled to run automatically at specific intervals using tools such as cron. They can also be integrated with other programs or systems using APIs or other interfaces, making them versatile and powerful tools for automating tasks and improving productivity.
</p>

## 2.11 Rocky or Debian <a name="rockyordebian"></a>
<p align="justify">
Rocky and Debian are high-quality Linux distributions, but they have different strengths and target audiences. Debian is stable and with a long history, while Rocky is a newer design for users who prefer a rolling release model and are familiar with the Red Hat/CentOS ecosystem.

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218761262-e7f6e3b8-42ed-414d-b23f-f2c64151751a.png" width="600" height="300">
</p>

</p>

## 2.12 TTY <a name="tty"></a>
<p align="justify">
Teletype refers to a physical or virtual terminal device used to interact with the system.
</p>

<p align="center">
<img src="https://user-images.githubusercontent.com/101360239/218761419-6726f35e-180f-4dee-9296-7561195b26a3.png" width="600" height="300">
</p>

***

# 3. WALKTHROUGH <a name="walkthrough"></a>

  
## 3.1 Downloading OS and VM <a name="downloadingosandvm"></a>
<p align="justify">

First we have to download the OS, [Debian](https://www.debian.org/download). After that we have to download the Virtual Machine, [VirtualBox](https://www.virtualbox.org/wiki/Downloads).

</p>

## 3.2 Installing VM <a name="installingvm"></a>

- Click on New

- Choose the Machine Folder > Continue

- Set Memory Size as <strong>1024MB</strong> > Continue

- Click on <strong>Create a Virtual Hard Disk Now</strong> > Create

- Click on <strong>VDI (VirtualBox Disk Image)</strong> > Continue

- Click on <strong>Dynamically Allocated</strong> > Continue

- Set the HD as <strong>8 GB</strong> > Continue

- Click on Settings > Click on Storage

- Click on Empty from Controller: IDE > Click on Optical Drive > Click on Choose a disk file...

- Choose the OS.iso file

- Click on Virtual Machine > Click OK

- Click on Start

## 3.3 Installing OS <a name="installingos"></a>

- Install > Enter

- Choose the language > Enter

- Choose the contry > Enter

- Choose the keyboard > Enter

- Create a hostname <strong>(rbotasse42)</strong> > Continue

- Ignore the Domain name > Continue

- Create a hostname password > Continue

- Create a new user <strong>(rbotasse)</strong>> Continue

- Create a new user password > Continue

- Choose the Timezone > Enter

- <strong>Guided - use entire disk and set up encrypted LVM</strong> > Enter

- Select the Disk > Enter

- Separate <strong>/home, /var, and /tmp paritions</strong> > Enter

- YES > Enter > Cancel

- Create a <strong>encryption passphrase</strong> > Continue

- Re-enter passphrase > Continue

- Type <strong>MAX</strong> > Continue

- <strong>Finish partitioning and write changes to disk</strong> > Enter

- YES > Enter

- NO > Enter 

- Choose the contry > Enter

- deb.debian.org. > Enter

- Ignore HTTP proxy information > Continue

- NO > Enter

- Deselect (use SPACE KEY) <strong>SSH server</strong> and <strong>standard system utilities</strong> > Enter > Continue

- YES > Enter

- <strong>/dev/sda</strong> > Enter

- Continue

## 3.4 Configurating VM <a name="configuratingvm"></a>
 
### 3.4.1 sudo <a name="sudo3"></a>
 
- Open as root:

`su -`

- Source list is up-to-date

`apt-get update -y`

- Install packages

`apt-get upgrade -y`

- Install sudo

`apt-get install sudo`

- Add user to sudo

`usermod -aG sudo rbotasse42`

- Check sudo group

`getent group sudo`

- Open sudo for change the privileges

`sudo visudo`

- Username 1 ALL rule applies to all hosts | 2 ALL user can run commands as all users | 3 user can run commands as all groups | 4 ALL rules apply to commands

`rbotasse42  	ALL=(ALL:ALL) ALL`

### 3.4.3 SSH <a name="ssh3"></a>
 
 - Install ssh
 
`sudo apt install openssh-server`

- Check the status

`sudo systemctl status ssh`

- Open the configuration file

`sudo nano /etc/ssh/sshd_config`

- Find the line `#Port22`

- Change to `Port 4242` without the #

- Save and Exit

- Check the SSH Port

`sudo grep Port /etc/ssh/sshd_config`

- Restart SSH

`sudo service ssh restart`

### 3.4.4 UFW <a name="ufw3"></a>
 
`apt-get install ufw`

`sudo ufw enable`

`sudo ufw status numbered`

- To allow incoming SSH connection (and the default SSH port)

`sudo ufw allow ssh`

- To allow Port 4242

`sudo ufw allow 4242`

`sudo ufw status numbered`

?????????DENY or DELETE PORT 22???????????

## 3.5 Connecting to SSH <a name="connectingtossh"></a>

- Exit VM

- VirtualBox

- Click on VM Settings

- Click on Network > Adapter 1 > Advance > Port Forwarding

- Add Host Port and Guest Port to <strong>4242</strong>

- Back VM

`sudo systemctl restart ssh`

`sudo service sshd status`

- Open Terminal and type:

`ssh rbotasse@127.0.0.1 -p 4242`

- In case of error:

`rm ~/.ssh/known_hosts` > `ssh rbotasse42@127.0.0.1 -p 4242` 

- Exit

## 3.6 Continue Configurating VM <a name="continueconfiguratingvm"></a>

### 3.6.1 Password Policy <a name="passwordpolicy"></a>

- To install the password quality checking library. This module provide some plug-in strength-checking for passwords:

`sudo apt-get install libpam-pwquality`

`sudo nano /etc/pam.d/common-password`

- Find this line:

`password		requisite		pam_deny.so (or pam_pwquakity.so retry=3)`

- Add this to the end of that line: (minlen = minimum password length, ucredit = maximum number of uppercase characters that will generate a credit, dcredit = maximum number of digits that will generate a credit, maxrepeat = the maximum number of times a single character may be repeated, reject_username, difok = the minimum number of characters that must be different from the old password

`minlen=10 ucredit=-1 dcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root`

- Save and Exit

- Password aging controls

`sudo nano /etc/login.defs`

- Find this part 

`PASS_MAX_DAYS 9999 PASS_MIN_DAYS 0 PASS_WARN_AGE 7`

- Change that part to 

`PASS_MAX_DAYS 30 PASS_MIN_DAYS 2 PASS_WARN_AGE 7`

- Reboot VM

`sudo reboot`

### 3.6.2 Group <a name="group"></a>

`sudo groupadd user42`

`sudo groupadd evaluating`

`getent group`

### 3.6.3 User (Group) <a name="user"></a>

- Show all groups. Cut print a selected parts of line. -d = delimiter | -f = cut by fields 

`cut -d: -f1 /etc/group`

- Add new user

`sudo adduser new_username`

- Add new user to a rbotasse42 group. usermod allows to modify a user login infrmation. -aG used to add existing user to a group.

`sudo usermod -aG rbotasse42 new_username`

- Create evaluating group

 `sudo groupadd evaluating`
 
 - Add new_username to evaluating group

`sudo usermod -aG evaluating new_username`

- Lis the users of a group

`getent group user42`

`getent group evaluating`

`cut -d: -f1 /etc/group`

- Check new_username password status

`sudo chage -l new_username`

### 3.6.4 sudo.log <a name="sudolog"></a>

`cd ~/../`

`cd /var/log`

`sudo mkdir sudo`

`cd sudo``

`sudo touch sudo.log`

`cd ~/../`

#### 3.6.4.1 Configuring Sudoers Group <a name="sudoers"></a>

`sudo nano /etc/sudoers`

- Edit sudoers file to add this defaults:

```
Defaults	env_reset

Defaults	mail_badpass

Defaults	secure_path="/usr/local/sbin:/usr/local/bin:/usr/bin:/sbin:/bin"

Defaults	badpass_message="Password is wrong"

Defaults	passwd_tries=3

Defaults	logfile="/var/log/sudo.log"

Defaults	log_input, log_output

Defaults	requiretty
```

### 3.6.5 Cron <a name="cron"></a>

`sudo apt-get install -y net-tools`

`cd /usr/local/bin/`

`touch monitoring.sh`

`chmod 777 monitoring.sh`

### 3.6.6 Script <a name="script2"></a>

```
#!/bin/bash
arc=$(uname -a)
pcpu=$(grep "physical id" /proc/cpuinfo | sort | uniq | wc -l) 
vcpu=$(grep "^processor" /proc/cpuinfo | wc -l)
fram=$(free -m | awk '$1 == "Mem:" {print $2}')
uram=$(free -m | awk '$1 == "Mem:" {print $3}')
pram=$(free | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
fdisk=$(df -BG | grep '^/dev/' | grep -v '/boot$' | awk '{ft += $2} END {print ft}')
udisk=$(df -BM | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} END {print ut}')
pdisk=$(df -BM | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} {ft+= $2} END {printf("%d"), ut/ft*100}')
cpul=$(top -bn1 | grep '^%Cpu' | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1 + $3}')
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -eq 0 ]; then echo no; else echo yes; fi)
ctcp=$(ss -neopt state established | wc -l)
ulog=$(users | wc -w)
ip=$(hostname -I)
mac=$(ip link show | grep "ether" | awk '{print $2}')
cmds=$(journalctl _COMM=sudo | grep COMMAND | wc -l)
wall "	#Architecture: $arc
	#CPU physical: $pcpu
	#vCPU: $vcpu
	#Memory Usage: $uram/${fram}MB ($pram%)
	#Disk Usage: $udisk/${fdisk}Gb ($pdisk%)
	#CPU load: $cpul
	#Last boot: $lb
	#LVM use: $lvmu
	#Connections TCP: $ctcp ESTABLISHED
	#User log: $ulog
	#Network: IP $ip ($mac)
	#Sudo: $cmds cmd"
 ```

<p align="justify">

The first line starts with a shebang #!/bin/bash that tells the system to run the script using the Bash shell.

The script uses various commands to collect system information and stores the output of each command in a variable for further processing. For example:

</p>

<p align="justify">

- `arc=$(uname -a)` gets the system's architecture information and stores it in the `$arc` variable.

- `pcpu=$(grep "physical id" /proc/cpuinfo | sort | uniq | wc -l)` gets the number of physical CPUs on the system and stores it in the `$pcpu` variable.

- `vcpu=$(grep "^processor" /proc/cpuinfo | wc -l)` gets the number of virtual CPUs on the system and stores it in the `$vcpu` variable.

- `fram=$(free -m | awk '$1 == "Mem:" {print $2}')` gets the total amount of system memory and stores it in the `$fram` variable.

- `uram=$(free -m | awk '$1 == "Mem:" {print $3}')` gets the used amount of system memory and stores it in the `$uram` variable.

- `pram=$(free | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')` calculates the percentage of memory used and stores it in the `$pram` variable.

- `fdisk=$(df -BG | grep '^/dev/' | grep -v '/boot$' | awk '{ft += $2} END {print ft}')` gets the total disk space available on the system and stores it in the `$fdisk` variable.

- `udisk=$(df -BM | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} END {print ut}')` gets the used disk space on the system and stores it in the `$udisk` variable.

- `pdisk=$(df -BM | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} {ft+= $2} END {printf("%d"), ut/ft*100}')` calculates the percentage of disk space used and stores it in the `$pdisk` variable.

- `cpul=$(top -bn1 | grep '^%Cpu' | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1 + $3}')` gets the CPU usage and stores it in the `$cpul` variable.

- `lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')` gets the date and time when the system was last booted and stores it in the `$lb` variable.

- `lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -eq 0 ];` then echo no; else echo yes; fi) checks if LVM is in use and stores the result in the `$lvmu` variable.

- `ctcp=$(ss -neopt state established | wc -l)` gets the number of established TCP connections on the system and stores it in the `$ctcp` variable.

- `ulog=$(users | wc -w)` gets the number of logged-in users on the system and stores it in the `$ulog` variable.

- `ip=$(hostname -I)` gets the IP address of the system and stores it in the `$ip` variable.

</p>

<p align="justify">

- On Terminal:

`ssh your_host_name42@127.0.0.1 -p 4242`
 
 `cd /usr/local/bin.`
 
 `nano monitoring.sh`
 
 - Save and Exit your `monitoring.sh`
 
 - Then type exit (exit the SSH Login).
 
 - Go back to VM and continue:
 
 `sudo visudo`
 
 - Under the  "# Allow members of group sudo to execute any command" there is a `%sudo ALL=(ALL:ALL) ALL` . Add:
 
 `your_username ALL=(ALL) NOPASSWD: /usr/local/bin/monitoring.sh`
 
- exit and save
 
 `sudo reboot`
 
`sudo /usr/local/bin/monitoring.sh`
 
 `sudo crontab -u root -e`
 
 `*/10 * * * * /usr/local/bin/monitoring.sh`
 
## 3.7 Signature.txt <a name="signature"></a>

- Turn off VM

- Open Terminal > cd

`cd sgoinfre/students/<your_intra_username>/VirtualBox VMs`

- shasum VirtualBox.vdi

- Copy the output number and create a signature.txt.

- Submit the signature.txt.
  
# 4 COMMANDS <a name="commands"></a>
<p align="justify">

- Show monitoring.sh:

`cd /usr/local/bin`

- Edit cron:

`sudo crontab -u root -e`

- Edit cron for 1 min:

`*/1 * * * * sleep 30s`

- UFW status:

`sudo ufw status`

- SSH status:

`sudo systemctl status ssh`

- Show sudo group:

`getent group sudo`

- Show user group:

`getent group user42`

- Add user:

`sudo adduser new username`

- Add group:

`sudo groupadd groupname`

- Add user to group:

`sudo usermod -aG groupname username`

- Check user password status:

`sudo chage -l username`

- Check host:

`hostnamectl`

- Change host:

`hostnamectl set-hostname new_hostname`

- Reboot:

`sudo reboot`

- Another way to change the hostname:

`sudo nano /etc/hosts`

- Display the partitions:

`lsblk`

- Check Sudo:

`dpkg -l | grep sudo`

- Display UFW ports:

`sudo ufw status numbered`

- Allow port 8080:

`sudo ufw allow 8080`

- Delete port 8080:

`sudo ufw delete rule number`

- Show SSH to port 4242

`ssh your_user_id@127.0.0.1 -p 4242`

### Introduction
- Virtual Machine
Virtual Machine (VM), is equal to a physical computer. It has CPU, RAM, HD and (usually) can connect to the internet. The only diference is VM work like a sofware computer, existing only as a code, running inside a physical server. You can have inside your computer a VM, you can run different operating systema (Linux/MAC/Windows), using a big server (like Azure) or you won computer. 
We named "Virtual" because is a virtual version of a computer. Pearhps virtual, it has dedicated amount of CPU, RAM and HD, "borrowed" from a physical host computer, normally a cloud provider's datacenter.

[image](https://user-images.githubusercontent.com/101360239/216974527-8ab05515-bdbf-499a-93fc-3887a73ef74b.png)

- How VM work
In minimal explanation VM is a computer file. It is a image that behaves like an actual computer. 
You can run is a window "separate of the computer" or function as the user's entire computer
To be more clear one of the strongest points of VM is he is partiotioned from the rest of the system, the software running inside can't interfere with the host computer opreating system.

![image](https://user-images.githubusercontent.com/101360239/216980968-3070e086-2e0a-48d9-8204-db42dff297ef.png)

- LVM
LVM is is a form of storage virtualization that offers system administrators a more flexible approach to managing disk storage, this tool give you power to allocate disks, create, resize, delete and mirror your HD.
![image](https://user-images.githubusercontent.com/101360239/216986265-8c0e0ff9-79ca-40e5-80c7-3a08c91683b7.png)
But first, we need to understand 3 concepts in LVM: Volume Groups, Physical Volumes and Logical Volumes.
Volume Group is a named collection of physical and logical volumes, systems only need one Volume Group to contain the physical and logical volumes. 
Physical Volumes are the disks; block devices that provide the space to store logical volumes. 
Logical volumes are the partitions, they hold a filesystem and get names rather than numbers, they can span across multiple disks, and do not have to be physically contiguous. 
To be clear, if you have more than one HD, with the LVM you can extend "the size of the store" over more than one HD, they are not limited by the real size of each HD, the limited is the total aggregate size.
You also can create a image of any LV, with that you can revert the original LV at a later time. This is very handy for backups.

- AppArmor
App is a Mandatory Acess Control (MAC). But what is a Mandatory Acess Control? 
MAC is a method of limiting acess to resources based on the sensitivity of the information.
You have to define the security label of your resource, this label goes from 0 to any level you need. This works because the hierarchical classification of the resources, like inverted pyramid. And you also can slice the levels, some information can be used by Group A or Group B.
Users can access only the information in a resource to which their security labels entitle them. If the user's security label does not have enough authority, the user cannot access the information in the resource.
![image](https://user-images.githubusercontent.com/101360239/217017358-0f1a59a0-e1c7-4181-a6bf-ccdd45add915.png)
So, AppArmor is a system of MAC for Linux, used to confine programs and limited resources from Users. 
AppArmor is so good because the confinement is provided via boot, and you can binds acess control to programs rather than to users.
There are two profile modes: enforcement and complain. 
Profiles loaded in enforcement mode will result in enforcement of the policy defined in the profile as well as reporting policy violation attempts.
Profiles in complain mode will not enforce policy but instead report policy violation attempts.
The big difference from other MAC systems on Linux is the possibility to mixing enforcement and complain profiles.

- Apt or Aptitude
APT stands for Advanced Packaging Tool, a open/source tool, designed to handle software installation and removal. 
It is a command-line tool with no visual reference from a graphical interface.
The word that rules APT is flexible. The user can configure how APT works, including adding new sources, providing up-gradation options, and more.
In the other side Aptitude is close to API, but you have a graphical interface, you use to emulate most of the apt get's command line and you have flexible but less than APT.
API can be used for package up-gradation, installation, resolving dependencies, system up-gradation, and more. However, Aptitude is good to inclusion functionalities of apt-cache and apt-mark, having more functionality, including package search, setting package installation as automation or manual, and more refined actions on the packages.

- SSH

SSH or Secure Shell is a network communication protocol that enables two computers to communicate (c.f http or hypertext transfer protocol, which is the protocol used to transfer hypertext such as web pages) and share data. An inherent feature of ssh is that the communication between the two computers is encrypted meaning that it is suitable for use on insecure networks.

SSH is often used to "login" and perform operations on remote computers but it may also be used for transferring data.

SSH enables us to provide a service with encrypted access for the widest range of operating systems (Windows XP-10, Max OS X and Linux); this would not be possible if we provided Windows networked drives (which utilise the SMB/CIFS communication protocol). SSH is reliable and secure and is often used in the High Performance Computing community for this reason.


- UFW with SSH
- Cron and Wall
- Sudo
- Script
- Rocky or Debian
- TTY

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


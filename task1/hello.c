#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#define HELLO_AUTHOR "Mayank Bhargava <mayankmman@gmail.com>"
#define HELLO_DESC "Prints hello on kernel debug"

int hello_init(void){
	printk(KERN_DEBUG "Hello,World!");
	return 1;
}
void hello_exit(void){}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR(HELLO_AUTHOR);
MODULE_DESCRIPTION(HELLO_DESC);



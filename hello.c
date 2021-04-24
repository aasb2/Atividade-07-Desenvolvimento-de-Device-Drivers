#include <linux/init.h>
#include <linux/moduleparam.h>
#include <linux/module.h>
#include <linux/kernel.h>

int value = 7;

module_param(value,int,0000);

static int simple_init(void){
    printk(KERN_ALERT "Greetings And Salutations\n");
    return 0;
}

static void simple_exit(void){
    printk(KERN_ALERT "Module Exiting... Code: %d\n",value);
}

module_init(simple_init);
module_exit(simple_exit);

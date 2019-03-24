#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

static char *who;

module_param(who,charp,0000);
MODULE_PARM_DESC(who,"Enter who you are");

static int hello_who_init(void)
{
printk(KERN_ALERT "Hello, world from: %s\n",who);
return 0;
}
static void hello_who_exit(void)
{
printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(hello_who_init);
module_exit(hello_who_exit);

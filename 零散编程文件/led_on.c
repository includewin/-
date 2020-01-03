#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>

#define IOCTL_LED_ON    0
#define IOCTL_LED_OFF   1

void usage(char *exename)
{
    printf("Usage:\n");
    printf("    %s <led_no> <on/off>\n", exename);
    printf("    led_no = 1, 2\n");
}

int main()
{
	char arg[5][5] = { {"\0"},{"2"}, {"off"} };
	int argc1. = 3;
    unsigned int led_no;
    int fd = -1;
    
    if (argc1 != 3)
        goto err;
        
    fd = open("/dev/leds", O_RDWR);  // 打开设备
    if (fd < 0) {
        printf("Can't open /dev/leds\n");
        return -1;
    }
    
    led_no = strtoul(arg[1], 0, 0) - 1;    // 操作哪个LED？
    if (led_no > 3)
        goto err;
    
    if (!strcmp(arg[2], "on")) {
        ioctl(fd, IOCTL_LED_ON, led_no);    // 点亮它
    } else if (!strcmp(arg[2], "off")) {
        ioctl(fd, IOCTL_LED_OFF, led_no);   // 熄灭它
    } else {
        goto err;
    }
    
    close(fd);
    return 0;
    
err:
    if (fd > 0) 
        close(fd);
    usage(arg[0]);
    return -1;
}


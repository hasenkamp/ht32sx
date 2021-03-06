/* ETSI_RAMP=[1, 1, 2, 2, 3, 4, 6, 8, 11, 15, 20, 24, 30, 39, 54, 220] */
/* ETSI_START_RAMP=[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 13, 13, 15, 16, 17, 18, 20, 22, 24, 26, 31, 35, 40, 45, 51, 60, 67, 70, 80] */


#define ETSI_FIFO_RAMP_FAST {0,255,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,2,0,2,0,3,0,4,0,6,0,8,0,11,0,15,0,20,0,24,0,30,0,39,0,54,0,220,0,220,0,54,0,39,0,30,0,24,0,20,0,15,0,11,0,8,0,6,0,4,0,3,0,2,0,2,0,1,0,1}
#define ETSI_FIFO_CONST_FAST {0,255,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1}
#define ETSI_FIFO_START_RAMP_DOWN_1 {0,255,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,4,0,4,0,4,0,4,0,4,0,4,0,5}
#define ETSI_FIFO_START_RAMP_DOWN_1_SIZE 82
#define ETSI_FIFO_START_RAMP_DOWN_2 {0,255,0,5,0,5,0,5,0,5,0,6,0,6,0,6,0,6,0,6,0,7,0,7,0,7,0,7,0,8,0,8,0,9,0,9,0,10,0,10,0,11,0,11,0,13,0,13,0,15,0,16,0,17,0,18,0,20,0,22,0,24,0,26,0,31,0,35,0,40,0,45,0,51,0,60,0,67,0,70,0,80}
#define ETSI_FIFO_START_RAMP_DOWN_2_SIZE 82
#define ETSI_FIFO_START_RAMP_UP_1 {0,255,0,80,0,70,0,67,0,60,0,51,0,45,0,40,0,35,0,31,0,26,0,24,0,22,0,20,0,18,0,17,0,16,0,15,0,13,0,13,0,11,0,11,0,10,0,10,0,9,0,9,0,8,0,8,0,7,0,7,0,7,0,7,0,6,0,6,0,6,0,6,0,6,0,5,0,5,0,5,0,5}
#define ETSI_FIFO_START_RAMP_UP_1_SIZE 82
#define ETSI_FIFO_START_RAMP_UP_2 {0,255,0,5,0,4,0,4,0,4,0,4,0,4,0,4,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1}
#define ETSI_FIFO_START_RAMP_UP_2_SIZE 66
#define ETSI_FIFO_ZEROES {0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
#define ETSI_FDEV_POS 0x7f
#define ETSI_FDEV_NEG 0x81
#define ETSI_MAX_POWER 1
#define ETSI_MIN_POWER 220
#define ETSI_START_RAMP_DURATION 18

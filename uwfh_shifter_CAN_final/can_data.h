#ifndef CAN_DATA_H_
#define CAN_DATA_H_

#define BATT_S1 	1
#define BATT_S2 	2
#define SCU_GEAR_S1		3

void can_write_temps(unsigned int StringNo, unsigned int* temp);

void can_write_vcell(unsigned int StringNo, unsigned int* vcell);

void can_write_gear(unsigned int StringNo, unsigned int *gear_num);

void can_write_vstats(unsigned int StringNo, unsigned int* vcell, unsigned int* temperature, unsigned int isense);

#endif //CAN_DATA_H_

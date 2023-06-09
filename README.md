# M031BSP_ADC_Bandgap_MultiCH_PDMA
 M031BSP_ADC_Bandgap_MultiCH_PDMA

update @ 2023/06/09

1. Get bandgap to calculate AVDD , to get ADC channe voltage

2. use moving average to get ADC ch 29 (bandgap) 

3. use get x , do sorting , drop y method to get ADC channel 0~9 , 15

	- each ADC channel will get 8+4 bytes by PDMA conversion

	- after convert finish , do array sorting
	
	- drop first 2 and last 2 data in array , then execute average

4. below is log about AVDD , and ADC channel

![image](https://github.com/released/M031BSP_ADC_Bandgap_MultiCH_PDMA/blob/main/log.jpg)


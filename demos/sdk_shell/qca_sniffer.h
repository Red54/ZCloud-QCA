
#ifndef _QCA_SNIFFER_H_
#define _QCA_SNIFFER_H_

/** 
 * @brief: sniffer mode 
 * SCAN_CHANNEL_MODE��snifferǰɨ���ŵ���ֻ̽��ɨ�赽��AP�����ŵ�,�е����ܼӿ������ŵ����ٶ�
 * ALL_CHANNEL_MODE��ɨ�������ŵ���1~13�� 
*/
typedef enum  
{
	SCAN_CHANNEL_MODE = 1,			  
	ALL_CHANNEL_MODE				 
}tSnifferMode;


/** 
 * @brief: sniffer�ص�����ָ��
*/
typedef void (*sniffer_cb)(char *ssid, char *password, unsigned char response);

/** 
 * @brief: ����sniffer
 *	mode�� snifferɨ��ģʽ
 *	sniffer_func��sniffer�ɹ���Ļص���
*/
/**
***************************************************************************
*@brief		��	����sniffer
*@param[in]	��	mode��			snifferɨ��ģʽ
*				sniffer_func��	sniffer�ɹ���Ļص���
*@return	��	none
*@see		��	
***************************************************************************
*/
void sniffer_start(tSnifferMode mode, sniffer_cb sniffer_func);

/**
***************************************************************************
*@brief		��	�����߳��ж��Ƿ���Ҫ�����߳�
*@param[in]	��	0	������
*				1	����
*@return	��	none
*@see		��	sniffer�ؼ�ʱ�������߳���ò�Ҫ��ϣ���ù���
*				��֪��������������ɨ��AP,��Ϊɨ��AP��Ҫ�����һᵼ��sniffer
*				����������������
***************************************************************************
*/
int qca_get_thread_suspend(void);


#endif


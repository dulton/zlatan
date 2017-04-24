#ifndef _GB28181_UTILS_H_
#define _GB28181_UTILS_H_

#include "GBDefines.h"

class GB28181Utils
{
public:
	GB28181Utils();
	virtual ~GB28181Utils();

	//��������:		��ѯ�豸
	//dest_id:	    Ŀ��ƽ̨ID
	//dest_ip:  	Ŀ��ƽ̨��IP��ַ
	//dest_port:	Ŀ��ƽ̨�Ķ˿�
	//src_id:	    ����ID
	//sn:           XML���
	//device_id:    Ŀ��ƽ̨���ͨ���豸��ID
	//query_type:	��ѯ���ͣ�����Ϊ"Catalog","DeviceInfo","DeviceStatus"

	static void Query(eXosip_t *exosip,
					  const std::string &dest_id,
					  const std::string &dest_ip,
					  const int dest_port,
					  const std::string &src_id,
					  const unsigned int sn,
					  const std::string &device_id,
					  const std::string &query_type);
	
	//��������:		��ʵʱ��
	//dest_id:	    ������豸ID,������Ϊֹ�����ֻ����ͨ��ID
	//src_id:	    ����ID
	//dest_ip:  	�豸����ƽ̨��IP��ַ
	//dest_port:	�豸����ƽ̨�Ķ˿�

	static int PlayTCP(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const std::string &src_ip,
		const int video_port,
		const unsigned int ssrc);

	static int Play(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const std::string &src_ip,
		const int video_port,
		const unsigned int ssrc);

	static int TalkPlay(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const std::string &src_ip,
		const int recv_port,
		const int send_port,
		const unsigned int ssrc);

	static int Playback(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const std::string &src_ip,
		const int record_type,
		const std::string &start_time,
		const std::string &end_time,
		const int recv_port,
		const unsigned int ssrc);

	static int Download(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const std::string &src_ip,
		const int record_type,
		const std::string &start_time,
		const std::string &end_time,
		const int recv_port,
		const unsigned int ssrc);

	static bool StopPlay(eXosip_t *exosip, const int cid, const int did);

	static void PtzControl(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const unsigned int sn,
		const std::string &device_id,
		const int ptz_cmd,
		const int speed);


	//¼��
	static void Record(eXosip_t * pEXosip,
		const std::string & strDestID,
		const std::string & strSourceID,
		const std::string & strDestIP,
		const int & nPort,
		const bool & bStop);

	static int QueryRecordFile(eXosip_t *exosip,
		const std::string &dest_id,
		const std::string &dest_ip,
		const int dest_port,
		const std::string &src_id,
		const unsigned int sn,
		const std::string &device_id,
		const std::string &start_time,
		const std::string &end_time,
		const std::string &type,
		const std::string &file_path,
		const std::string &record_id,
		const std::string &address);

	static void PlaybackPause(eXosip_t *exosip, const int did, const bool pause);
	static void PlayByAbsoluteTime(eXosip_t *exosip, const int did, const int npt);
	static void PlaybackSpeed(eXosip_t *exosip, const int did, const double speed);//�������������

	//Զ������
	static void TeleBoot(eXosip_t * pEXosip,
		const std::string & strDestID,
		const std::string & strSourceID,
		const std::string & strDestIP,
		const int & nPort);

	//����
	static void SetGuard(eXosip_t * pEXosip,
		const std::string & strDestID,
		const std::string & strSourceID,
		const std::string & strDestIP,
		const int & nPort,
		const bool & bSetGuard);
	//������λ
	static void ResetAlarm(eXosip_t * pEXosip,
		const std::string & strDestID,
		const std::string & strSourceID,
		const std::string & strDestIP,
		const int & nPort);

	static void SubscribeAlarm(eXosip_t * pEXosip,
		const std::string & strDestID,
		const std::string & strSourceID,
		const std::string & strDestIP,
		const int & nPort,
		const std::string & strAlarmSrcID,
		const int & nStartAlarmPriority,
		const int & nEndAlarmPriority,
		const int & nAlarmMethod,
		const std::string & strStartTime,
		const std::string & strEndTime,
		int & nExpires);

	//Catalog����
	static void SubscribeCatalog(eXosip_t *exosip, 
		const std::string &dest_id, 
		const std::string &dest_ip, 
		const int dest_port,
		const std::string &src_id, 
		const unsigned int sn, 
		const std::string &device_id, 
		const int expires);

	static void SubscribeRefreshCatalog(eXosip_t *exosip, 
		const int did,
		const int expires,
		const unsigned int sn, 
		const std::string &device_id);

	
	//�˴���:yyyy-MM-dd hh:mm:ss
	static unsigned long StrToTimeStamp(const std::string & strTime);
	static std::string PtzToHexStr(const int & nPtzType,const int & nSpeed);
	static std::string PtzToHexStr2(const int & nTiltType,const int & nTiltSpeed,const int & nPanType,const int & nPanSpeed){return "";}

	static bool IsUserIDValidate(const std::string & strID);
	static int GetIDType(const std::string & strID);
	static int GetIDNumber(const std::string & strID);

	static bool IsLeafNodeDevice(const std::string & strDevID);
	static bool IsPlatformType(const std::string &id);
	static bool GBDateStringAddSecs(const char *s,size_t stCch, time_t tSec,char * pOut,size_t nOutLen);
	//�����ʽ:yyyy-MM-ddThh:mm:ss
	static std::string GetCurrentDate();
	static std::string GetCurrentDateNoMs();
};
#endif
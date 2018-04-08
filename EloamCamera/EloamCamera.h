#ifndef ELOAMCAMERA_H
#define ELOAMCAMERA_H

#include <QtWidgets/QWidget>
#include "ui_Eloamcamera.h"

class EloamCamera : public QWidget
{
	Q_OBJECT

public:
	EloamCamera(QWidget *parent = 0);
	~EloamCamera();

private:
	Ui::EloamCamera ui;

private slots:
	//!��Ӧ��ѡ
	void onSelectRect();
	//!��Ӧ������ת
	void onRotateLeft();
	//!��Ӧ������ת
	void onRotateRight();
	//!��Ӧ��С
	void onZoomout();
	//!��Ӧ���ű����ı�
	void onZoomRatioChanged(int ratio);
	//!��Ӧ�Ŵ�
	void onZoomin();
	//!��Ӧȫ��
	void onFullScreen();
	//!��Ӧ��Ƶ����ת
	void onMirror();
	//!��Ӧ�����֤ʶ�����
	void onIdCard();
	//!��Ӧ���ļ��������
	void onFileManage();
	//!��ӦͼƬ�ϳɽ���
	void onImageCombine();
	//!��Ӧ�Զ�����
	void onAutoScan();
	//!��Ӧ����Pdf
	void onPdf();
	//!��Ӧ��ӡ
	void onPrint();
	//!��Ӧ����ʶ��
	void onBarcode();
	//!��ӦOcrʶ��
	void onOcr();
	//!��Ӧ¼��
	void onRecord();
	//!��Ӧ����
	void onScan();
	//!��Ӧ���豸�ı�
	void onMainDevChanged(int index);
	//!��ӦͼƬ�ߴ�ı�
	void onImageSizeChanged(int index);
	//!��ӦͼƬ��ʽ�ı�
	void onImageFormatChanged(int index);
	//!��ӦͼƬ���͸ı�
	void onImageTypeChanged(int index);
	//!��Ӧ�Ƿ��Զ���ƫ�ñ�
	void onIsDeskew(int state);
	//!��Ӧ�Ƿ����ĵ�ɨ��ģʽ
	void onIsDocScanMode(int state);
	//!��Ӧ���ȸı�
	void onLightChanged(int value);
	//!��Ӧ�ع�ֵ�ı�
	void onExposureChanged(int value);
	//!��Ӧ�Ƿ��Զ��ع�
	void onIsAutoExposure(int state);
	//!��Ӧ�������·��
	void onBrowse();
	//!��ӦͼƬ�����ı�
	void onImageQualityChanged(int value);
	//!��Ӧ�Ƿ�ȥ��ɫ
	void onIsDeBackgroundColor(int state);
	//!��Ӧ�Ƿ��Զ�ȥ��
	void onIsAutoDenosing(int state);
	//!��Ӧ�����豸�������ý���
	void onProperty();
	//!��Ӧ�Ƿ����ˮӡ����
	void onIsAddWaterText(int state);
	//!��Ӧˮӡ����
	void onWaterSet();
	//!��Ӧ������ͷ����
	void onAssiDevSet();
	//!��Ӧ������ͷ����
	void onAssiScan();
};

#endif // ELOAMCAMERA_H

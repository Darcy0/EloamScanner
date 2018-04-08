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
	//!响应框选
	void onSelectRect();
	//!响应向左旋转
	void onRotateLeft();
	//!响应向右旋转
	void onRotateRight();
	//!响应缩小
	void onZoomout();
	//!响应缩放比例改变
	void onZoomRatioChanged(int ratio);
	//!响应放大
	void onZoomin();
	//!响应全屏
	void onFullScreen();
	//!响应视频镜像翻转
	void onMirror();
	//!响应打开身份证识别界面
	void onIdCard();
	//!响应打开文件管理界面
	void onFileManage();
	//!响应图片合成界面
	void onImageCombine();
	//!响应自动连拍
	void onAutoScan();
	//!响应生成Pdf
	void onPdf();
	//!响应打印
	void onPrint();
	//!响应条码识别
	void onBarcode();
	//!响应Ocr识别
	void onOcr();
	//!响应录像
	void onRecord();
	//!响应拍摄
	void onScan();
	//!响应主设备改变
	void onMainDevChanged(int index);
	//!响应图片尺寸改变
	void onImageSizeChanged(int index);
	//!响应图片格式改变
	void onImageFormatChanged(int index);
	//!响应图片类型改变
	void onImageTypeChanged(int index);
	//!响应是否自动纠偏裁边
	void onIsDeskew(int state);
	//!响应是否是文档扫描模式
	void onIsDocScanMode(int state);
	//!响应亮度改变
	void onLightChanged(int value);
	//!响应曝光值改变
	void onExposureChanged(int value);
	//!响应是否自动曝光
	void onIsAutoExposure(int state);
	//!响应浏览保存路径
	void onBrowse();
	//!响应图片质量改变
	void onImageQualityChanged(int value);
	//!响应是否去底色
	void onIsDeBackgroundColor(int state);
	//!响应是否自动去噪
	void onIsAutoDenosing(int state);
	//!响应弹出设备属性设置界面
	void onProperty();
	//!响应是否添加水印文字
	void onIsAddWaterText(int state);
	//!响应水印设置
	void onWaterSet();
	//!响应副摄像头设置
	void onAssiDevSet();
	//!响应副摄像头拍照
	void onAssiScan();
};

#endif // ELOAMCAMERA_H

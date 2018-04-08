#include "Eloamcamera.h"
#include <QMessageBox>

EloamCamera::EloamCamera(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//Á¬½ÓÐÅºÅ²Û
	connect(ui.pushButton_selectRect,SIGNAL(clicked()),this,SLOT(onSelectRect()));
	connect(ui.pushButton_rotateLeft,SIGNAL(clicked()),this,SLOT(onRotateLeft()));
	connect(ui.pushButton_rotateRight,SIGNAL(clicked()),this,SLOT(onRotateRight()));
	connect(ui.pushButton_zoomout,SIGNAL(clicked()),this,SLOT(onZoomout()));
	connect(ui.slider_zoom,SIGNAL(valueChanged(int)),this,SLOT(onZoomRatioChanged(int)));
	connect(ui.pushButton_zoomin,SIGNAL(clicked()),this,SLOT(onZoomin()));
	connect(ui.pushButton_fullScreen,SIGNAL(clicked()),this,SLOT(onFullScreen()));
	connect(ui.pushButton_mirror,SIGNAL(clicked()),this,SLOT(onMirror()));
	connect(ui.pushButton_idCard,SIGNAL(clicked()),this,SLOT(onIdCard()));
	connect(ui.pushButton_fileManage,SIGNAL(clicked()),this,SLOT(onFileManage()));
	connect(ui.pushButton_imageCombine,SIGNAL(clicked()),this,SLOT(onImageCombine()));
	connect(ui.pushButton_autoScan,SIGNAL(clicked()),this,SLOT(onAutoScan()));
	connect(ui.pushButton_exportPdf,SIGNAL(clicked()),this,SLOT(onPdf()));
	connect(ui.pushButton_print,SIGNAL(clicked()),this,SLOT(onPrint()));
	connect(ui.pushButton_barcode,SIGNAL(clicked()),this,SLOT(onBarcode()));
	connect(ui.pushButton_ocr,SIGNAL(clicked()),this,SLOT(onOcr()));
	connect(ui.pushButton_record,SIGNAL(clicked()),this,SLOT(onRecord()));
	connect(ui.pushButton_scan,SIGNAL(clicked()),this,SLOT(onScan()));
	connect(ui.comboBox_mainDevList,SIGNAL(currentIndexChanged(int)),this,SLOT(onMainDevChanged(int)));
	connect(ui.comboBox_imageSizeList,SIGNAL(currentIndexChanged(int)),this,SLOT(onImageSizeChanged(int)));
	connect(ui.comboBox_imageFormatList,SIGNAL(currentIndexChanged(int)),this,SLOT(onImageFormatChanged(int)));
	connect(ui.comboBox_imageTypeList,SIGNAL(currentIndexChanged(int)),this,SLOT(onImageTypeChanged(int)));
	connect(ui.checkBox_deskew,SIGNAL(stateChanged(int)),this,SLOT(onIsDeskew(int)));
	connect(ui.checkBox_docScanMode,SIGNAL(stateChanged(int)),this,SLOT(onIsDocScanMode(int)));
	connect(ui.slider_light,SIGNAL(valueChanged(int)),this,SLOT(onLightChanged(int)));
	connect(ui.slider_exposure,SIGNAL(valueChanged(int)),this,SLOT(onExposureChanged(int)));
	connect(ui.checkBox_autoExposure,SIGNAL(stateChanged(int)),this,SLOT(onIsAutoExposure(int)));
	connect(ui.pushButton_browse,SIGNAL(clicked()),this,SLOT(onBrowse()));
	connect(ui.slider_imageQuality,SIGNAL(valueChanged(int)),this,SLOT(onImageQualityChanged(int)));
	connect(ui.checkBox_deBackgroundColor,SIGNAL(stateChanged(int)),this,SLOT(onIsDeBackgroundColor(int)));
	connect(ui.checkBox_denoising,SIGNAL(stateChanged(int)),this,SLOT(onIsAutoDenosing(int)));
	connect(ui.pushButton_property,SIGNAL(clicked()),this,SLOT(onProperty()));
	connect(ui.checkBox_addWater,SIGNAL(stateChanged(int)),this,SLOT(onIsAddWaterText(int)));
	connect(ui.pushButton_waterSet,SIGNAL(clicked()),this,SLOT(onWaterSet()));
	connect(ui.pushButton_assiDevSet,SIGNAL(clicked()),this,SLOT(onAssiDevSet()));
	connect(ui.pushButton_assiScan,SIGNAL(clicked()),this,SLOT(onAssiScan()));
}

EloamCamera::~EloamCamera()
{

}

void EloamCamera::onSelectRect()
{
	QMessageBox::information(this,tr("Test"),tr("onSelectRect"));
}

void EloamCamera::onRotateLeft()
{
	QMessageBox::information(this,tr("Test"),tr("onRotateLeft"));
}

void EloamCamera::onRotateRight()
{
	QMessageBox::information(this,tr("Test"),tr("onRotateRight"));
}

void EloamCamera::onZoomout()
{
	QMessageBox::information(this,tr("Test"),tr("onZoomout"));
}

void EloamCamera::onZoomRatioChanged(int ratio)
{
	QMessageBox::information(this,tr("Test"),tr("onZoomRatioChanged"));
}

void EloamCamera::onZoomin()
{
	QMessageBox::information(this,tr("Test"),tr("onZoomin"));
}

void EloamCamera::onFullScreen()
{
	QMessageBox::information(this,tr("Test"),tr("onFullScreen"));
}

void EloamCamera::onMirror()
{
	QMessageBox::information(this,tr("Test"),tr("onMirror"));
}

void EloamCamera::onIdCard()
{
	QMessageBox::information(this,tr("Test"),tr("onIdCard"));
}

void EloamCamera::onFileManage()
{
	QMessageBox::information(this,tr("Test"),tr("onFileManage"));
}

void EloamCamera::onImageCombine()
{
	QMessageBox::information(this,tr("Test"),tr("onImageCombine"));
}

void EloamCamera::onAutoScan()
{
	QMessageBox::information(this,tr("Test"),tr("onAutoScan"));
}

void EloamCamera::onPdf()
{
	QMessageBox::information(this,tr("Test"),tr("onPdf"));
}

void EloamCamera::onPrint()
{
	QMessageBox::information(this,tr("Test"),tr("onPrint"));
}

void EloamCamera::onBarcode()
{
	QMessageBox::information(this,tr("Test"),tr("onBarcode"));
}

void EloamCamera::onOcr()
{
	QMessageBox::information(this,tr("Test"),tr("onOcr"));
}

void EloamCamera::onRecord()
{
	QMessageBox::information(this,tr("Test"),tr("onRecord"));
}

void EloamCamera::onScan()
{
	QMessageBox::information(this,tr("Test"),tr("onScan"));
}

void EloamCamera::onMainDevChanged(int index)
{
	QMessageBox::information(this,tr("Test"),tr("onMainDevChanged"));
}

void EloamCamera::onImageSizeChanged(int index)
{
	QMessageBox::information(this,tr("Test"),tr("onImageSizeChanged"));
}

void EloamCamera::onImageFormatChanged(int index)
{
	QMessageBox::information(this,tr("Test"),tr("onImageFormatChanged"));
}

void EloamCamera::onImageTypeChanged(int index)
{
	QMessageBox::information(this,tr("Test"),tr("onImageTypeChanged"));
}

void EloamCamera::onIsDeskew(int state)
{
	QMessageBox::information(this,tr("Test"),tr("onIsDeskew"));
}

void EloamCamera::onIsDocScanMode(int state)
{
	QMessageBox::information(this,tr("Test"),tr("onIsDocScanMode"));
}

void EloamCamera::onLightChanged(int value)
{
	QMessageBox::information(this,tr("Test"),tr("onLightChanged"));
}

void EloamCamera::onExposureChanged(int value)
{
	QMessageBox::information(this,tr("Test"),tr("onExposureChanged"));
}

void EloamCamera::onIsAutoExposure(int state)
{
	QMessageBox::information(this,tr("Test"),tr("onIsAutoExposure"));
}

void EloamCamera::onBrowse()
{
	QMessageBox::information(this,tr("Test"),tr("onBrowse"));
}

void EloamCamera::onImageQualityChanged(int value)
{
	QMessageBox::information(this,tr("Test"),tr("information"));
}

void EloamCamera::onIsDeBackgroundColor(int state)
{
	QMessageBox::information(this,tr("Test"),tr("onIsDeBackgroundColor"));
}

void EloamCamera::onIsAutoDenosing(int state)
{
	QMessageBox::information(this,tr("Test"),tr("onIsAutoDenosing"));
}

void EloamCamera::onProperty()
{
	QMessageBox::information(this,tr("Test"),tr("onProperty"));
}

void EloamCamera::onIsAddWaterText(int state)
{
	QMessageBox::information(this,tr("Test"),tr("onIsAddWaterText"));
}

void EloamCamera::onWaterSet()
{
	QMessageBox::information(this,tr("Test"),tr("onWaterSet"));
}

void EloamCamera::onAssiDevSet()
{
	QMessageBox::information(this,tr("Test"),tr("onAssiDevSet"));
}

void EloamCamera::onAssiScan()
{
	QMessageBox::information(this,tr("Test"),tr("onAssiScan"));
}

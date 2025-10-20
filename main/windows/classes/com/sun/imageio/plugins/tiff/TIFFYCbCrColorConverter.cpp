#include <com/sun/imageio/plugins/tiff/TIFFYCbCrColorConverter.h>

#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <jcpp.h>

#undef CODING_RANGE_CB_CR
#undef CODING_RANGE_Y
#undef TAG_REFERENCE_BLACK_WHITE
#undef TAG_Y_CB_CR_COEFFICIENTS
#undef Y

using $TIFFColorConverter = ::com::sun::imageio::plugins::tiff::TIFFColorConverter;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFYCbCrColorConverter_FieldInfo_[] = {
	{"CODING_RANGE_Y", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFYCbCrColorConverter, CODING_RANGE_Y)},
	{"CODING_RANGE_CB_CR", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFYCbCrColorConverter, CODING_RANGE_CB_CR)},
	{"lumaRed", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, lumaRed)},
	{"lumaGreen", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, lumaGreen)},
	{"lumaBlue", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, lumaBlue)},
	{"referenceBlackY", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, referenceBlackY)},
	{"referenceWhiteY", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, referenceWhiteY)},
	{"referenceBlackCb", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, referenceBlackCb)},
	{"referenceWhiteCb", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, referenceWhiteCb)},
	{"referenceBlackCr", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, referenceBlackCr)},
	{"referenceWhiteCr", "F", nullptr, $PRIVATE, $field(TIFFYCbCrColorConverter, referenceWhiteCr)},
	{}
};

$MethodInfo _TIFFYCbCrColorConverter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFYCbCrColorConverter::*)($TIFFImageMetadata*)>(&TIFFYCbCrColorConverter::init$))},
	{"fromRGB", "(FFF[F)V", nullptr, $PUBLIC},
	{"toRGB", "(FFF[F)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFYCbCrColorConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFYCbCrColorConverter",
	"com.sun.imageio.plugins.tiff.TIFFColorConverter",
	nullptr,
	_TIFFYCbCrColorConverter_FieldInfo_,
	_TIFFYCbCrColorConverter_MethodInfo_
};

$Object* allocate$TIFFYCbCrColorConverter($Class* clazz) {
	return $of($alloc(TIFFYCbCrColorConverter));
}

float TIFFYCbCrColorConverter::CODING_RANGE_Y = 0.0;
float TIFFYCbCrColorConverter::CODING_RANGE_CB_CR = 0.0;

void TIFFYCbCrColorConverter::init$($TIFFImageMetadata* metadata) {
	$useLocalCurrentObjectStackCache();
	$TIFFColorConverter::init$();
	this->lumaRed = 0.299f;
	this->lumaGreen = 0.587f;
	this->lumaBlue = 0.114f;
	this->referenceBlackY = 0.0f;
	this->referenceWhiteY = 255.0f;
	this->referenceBlackCb = 128.0f;
	this->referenceWhiteCb = 255.0f;
	this->referenceBlackCr = 128.0f;
	this->referenceWhiteCr = 255.0f;
	$var($TIFFImageMetadata, tmetadata, metadata);
	$var($TIFFField, f, $nc(tmetadata)->getTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_COEFFICIENTS));
	if (f != nullptr && f->getCount() == 3) {
		this->lumaRed = f->getAsFloat(0);
		this->lumaGreen = f->getAsFloat(1);
		this->lumaBlue = f->getAsFloat(2);
	}
	$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_REFERENCE_BLACK_WHITE));
	if (f != nullptr && f->getCount() == 6) {
		this->referenceBlackY = f->getAsFloat(0);
		this->referenceWhiteY = f->getAsFloat(1);
		this->referenceBlackCb = f->getAsFloat(2);
		this->referenceWhiteCb = f->getAsFloat(3);
		this->referenceBlackCr = f->getAsFloat(4);
		this->referenceWhiteCr = f->getAsFloat(5);
	}
}

void TIFFYCbCrColorConverter::fromRGB(float r, float g, float b, $floats* result) {
	float Y = (this->lumaRed * r + this->lumaGreen * g + this->lumaBlue * b);
	float Cb = (b - Y) / (2 - 2 * this->lumaBlue);
	float Cr = (r - Y) / (2 - 2 * this->lumaRed);
	$nc(result)->set(0, $div(Y * (this->referenceWhiteY - this->referenceBlackY), TIFFYCbCrColorConverter::CODING_RANGE_Y) + this->referenceBlackY);
	result->set(1, $div(Cb * (this->referenceWhiteCb - this->referenceBlackCb), TIFFYCbCrColorConverter::CODING_RANGE_CB_CR) + this->referenceBlackCb);
	result->set(2, $div(Cr * (this->referenceWhiteCr - this->referenceBlackCr), TIFFYCbCrColorConverter::CODING_RANGE_CB_CR) + this->referenceBlackCr);
}

void TIFFYCbCrColorConverter::toRGB(float x0, float x1, float x2, $floats* rgb) {
	float Y = (x0 - this->referenceBlackY) * TIFFYCbCrColorConverter::CODING_RANGE_Y / (this->referenceWhiteY - this->referenceBlackY);
	float Cb = (x1 - this->referenceBlackCb) * TIFFYCbCrColorConverter::CODING_RANGE_CB_CR / (this->referenceWhiteCb - this->referenceBlackCb);
	float Cr = (x2 - this->referenceBlackCr) * TIFFYCbCrColorConverter::CODING_RANGE_CB_CR / (this->referenceWhiteCr - this->referenceBlackCr);
	$nc(rgb)->set(0, Cr * (2 - 2 * this->lumaRed) + Y);
	rgb->set(2, Cb * (2 - 2 * this->lumaBlue) + Y);
	rgb->set(1, (Y - this->lumaBlue * rgb->get(2) - this->lumaRed * rgb->get(0)) / this->lumaGreen);
}

TIFFYCbCrColorConverter::TIFFYCbCrColorConverter() {
}

void clinit$TIFFYCbCrColorConverter($Class* class$) {
	TIFFYCbCrColorConverter::CODING_RANGE_Y = 255.0f;
	TIFFYCbCrColorConverter::CODING_RANGE_CB_CR = 127.0f;
}

$Class* TIFFYCbCrColorConverter::load$($String* name, bool initialize) {
	$loadClass(TIFFYCbCrColorConverter, name, initialize, &_TIFFYCbCrColorConverter_ClassInfo_, clinit$TIFFYCbCrColorConverter, allocate$TIFFYCbCrColorConverter);
	return class$;
}

$Class* TIFFYCbCrColorConverter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
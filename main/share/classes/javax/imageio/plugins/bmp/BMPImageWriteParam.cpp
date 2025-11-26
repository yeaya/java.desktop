#include <javax/imageio/plugins/bmp/BMPImageWriteParam.h>

#include <com/sun/imageio/plugins/bmp/BMPCompressionTypes.h>
#include <com/sun/imageio/plugins/bmp/BMPConstants.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageWriteParam.h>
#include <jcpp.h>

#undef BI_RGB
#undef MODE_COPY_FROM_METADATA

using $BMPCompressionTypes = ::com::sun::imageio::plugins::bmp::BMPCompressionTypes;
using $BMPConstants = ::com::sun::imageio::plugins::bmp::BMPConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace bmp {

$FieldInfo _BMPImageWriteParam_FieldInfo_[] = {
	{"topDown", "Z", nullptr, $PRIVATE, $field(BMPImageWriteParam, topDown)},
	{}
};

$MethodInfo _BMPImageWriteParam_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(BMPImageWriteParam::*)($Locale*)>(&BMPImageWriteParam::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BMPImageWriteParam::*)()>(&BMPImageWriteParam::init$))},
	{"isTopDown", "()Z", nullptr, $PUBLIC},
	{"setTopDown", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BMPImageWriteParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.bmp.BMPImageWriteParam",
	"javax.imageio.ImageWriteParam",
	nullptr,
	_BMPImageWriteParam_FieldInfo_,
	_BMPImageWriteParam_MethodInfo_
};

$Object* allocate$BMPImageWriteParam($Class* clazz) {
	return $of($alloc(BMPImageWriteParam));
}

void BMPImageWriteParam::init$($Locale* locale) {
	$ImageWriteParam::init$(locale);
	this->topDown = false;
	$set(this, compressionTypes, $BMPCompressionTypes::getCompressionTypes());
	this->canWriteCompressed$ = true;
	this->compressionMode = $ImageWriteParam::MODE_COPY_FROM_METADATA;
	$set(this, compressionType, $nc(this->compressionTypes)->get($BMPConstants::BI_RGB));
}

void BMPImageWriteParam::init$() {
	BMPImageWriteParam::init$(nullptr);
}

void BMPImageWriteParam::setTopDown(bool topDown) {
	this->topDown = topDown;
}

bool BMPImageWriteParam::isTopDown() {
	return this->topDown;
}

BMPImageWriteParam::BMPImageWriteParam() {
}

$Class* BMPImageWriteParam::load$($String* name, bool initialize) {
	$loadClass(BMPImageWriteParam, name, initialize, &_BMPImageWriteParam_ClassInfo_, allocate$BMPImageWriteParam);
	return class$;
}

$Class* BMPImageWriteParam::class$ = nullptr;

			} // bmp
		} // plugins
	} // imageio
} // javax
#include <com/sun/imageio/plugins/gif/GIFImageWriteParam.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageWriteParam.h>
#include <jcpp.h>

#undef MODE_DISABLED

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Locale = ::java::util::Locale;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$MethodInfo _GIFImageWriteParam_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Locale;)V", nullptr, 0, $method(static_cast<void(GIFImageWriteParam::*)($Locale*)>(&GIFImageWriteParam::init$))},
	{"setCompressionMode", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GIFImageWriteParam_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageWriteParam",
	"javax.imageio.ImageWriteParam",
	nullptr,
	nullptr,
	_GIFImageWriteParam_MethodInfo_
};

$Object* allocate$GIFImageWriteParam($Class* clazz) {
	return $of($alloc(GIFImageWriteParam));
}

void GIFImageWriteParam::init$($Locale* locale) {
	$ImageWriteParam::init$(locale);
	this->canWriteCompressed$ = true;
	this->canWriteProgressive$ = true;
	$set(this, compressionTypes, $new($StringArray, {"LZW"_s}));
	$set(this, compressionType, $nc(this->compressionTypes)->get(0));
}

void GIFImageWriteParam::setCompressionMode(int32_t mode) {
	if (mode == $ImageWriteParam::MODE_DISABLED) {
		$throwNew($UnsupportedOperationException, "MODE_DISABLED is not supported."_s);
	}
	$ImageWriteParam::setCompressionMode(mode);
}

GIFImageWriteParam::GIFImageWriteParam() {
}

$Class* GIFImageWriteParam::load$($String* name, bool initialize) {
	$loadClass(GIFImageWriteParam, name, initialize, &_GIFImageWriteParam_ClassInfo_, allocate$GIFImageWriteParam);
	return class$;
}

$Class* GIFImageWriteParam::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com
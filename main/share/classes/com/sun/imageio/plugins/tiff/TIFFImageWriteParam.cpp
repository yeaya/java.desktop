#include <com/sun/imageio/plugins/tiff/TIFFImageWriteParam.h>

#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageWriteParam.h>
#include <jcpp.h>

using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFImageWriteParam_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageWriteParam::*)($Locale*)>(&TIFFImageWriteParam::init$))},
	{}
};

$ClassInfo _TIFFImageWriteParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageWriteParam",
	"javax.imageio.ImageWriteParam",
	nullptr,
	nullptr,
	_TIFFImageWriteParam_MethodInfo_
};

$Object* allocate$TIFFImageWriteParam($Class* clazz) {
	return $of($alloc(TIFFImageWriteParam));
}

void TIFFImageWriteParam::init$($Locale* locale) {
	$ImageWriteParam::init$(locale);
	this->canWriteCompressed$ = true;
	this->canWriteTiles$ = true;
	$init($TIFFImageWriter);
	$set(this, compressionTypes, $TIFFImageWriter::TIFFCompressionTypes);
}

TIFFImageWriteParam::TIFFImageWriteParam() {
}

$Class* TIFFImageWriteParam::load$($String* name, bool initialize) {
	$loadClass(TIFFImageWriteParam, name, initialize, &_TIFFImageWriteParam_ClassInfo_, allocate$TIFFImageWriteParam);
	return class$;
}

$Class* TIFFImageWriteParam::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
#include <com/sun/imageio/plugins/tiff/TIFFDeflateCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDeflater.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <jcpp.h>

#undef COMPRESSION_DEFLATE

using $TIFFDeflater = ::com::sun::imageio::plugins::tiff::TIFFDeflater;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFDeflateCompressor_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/ImageWriteParam;I)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFDeflateCompressor::*)($ImageWriteParam*,int32_t)>(&TIFFDeflateCompressor::init$))},
	{}
};

$ClassInfo _TIFFDeflateCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFDeflateCompressor",
	"com.sun.imageio.plugins.tiff.TIFFDeflater",
	nullptr,
	nullptr,
	_TIFFDeflateCompressor_MethodInfo_
};

$Object* allocate$TIFFDeflateCompressor($Class* clazz) {
	return $of($alloc(TIFFDeflateCompressor));
}

void TIFFDeflateCompressor::init$($ImageWriteParam* param, int32_t predictor) {
	$TIFFDeflater::init$("Deflate"_s, $BaselineTIFFTagSet::COMPRESSION_DEFLATE, param, predictor);
}

TIFFDeflateCompressor::TIFFDeflateCompressor() {
}

$Class* TIFFDeflateCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFDeflateCompressor, name, initialize, &_TIFFDeflateCompressor_ClassInfo_, allocate$TIFFDeflateCompressor);
	return class$;
}

$Class* TIFFDeflateCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
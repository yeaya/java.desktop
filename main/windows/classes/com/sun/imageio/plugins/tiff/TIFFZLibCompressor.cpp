#include <com/sun/imageio/plugins/tiff/TIFFZLibCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDeflater.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <jcpp.h>

#undef COMPRESSION_ZLIB

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

$MethodInfo _TIFFZLibCompressor_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/ImageWriteParam;I)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFZLibCompressor::*)($ImageWriteParam*,int32_t)>(&TIFFZLibCompressor::init$))},
	{}
};

$ClassInfo _TIFFZLibCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFZLibCompressor",
	"com.sun.imageio.plugins.tiff.TIFFDeflater",
	nullptr,
	nullptr,
	_TIFFZLibCompressor_MethodInfo_
};

$Object* allocate$TIFFZLibCompressor($Class* clazz) {
	return $of($alloc(TIFFZLibCompressor));
}

void TIFFZLibCompressor::init$($ImageWriteParam* param, int32_t predictor) {
	$TIFFDeflater::init$("ZLib"_s, $BaselineTIFFTagSet::COMPRESSION_ZLIB, param, predictor);
}

TIFFZLibCompressor::TIFFZLibCompressor() {
}

$Class* TIFFZLibCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFZLibCompressor, name, initialize, &_TIFFZLibCompressor_ClassInfo_, allocate$TIFFZLibCompressor);
	return class$;
}

$Class* TIFFZLibCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
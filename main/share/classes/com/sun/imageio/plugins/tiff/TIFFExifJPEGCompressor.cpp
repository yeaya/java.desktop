#include <com/sun/imageio/plugins/tiff/TIFFExifJPEGCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <jcpp.h>

#undef COMPRESSION_OLD_JPEG
#undef EXIF_JPEG_COMPRESSION_TYPE

using $TIFFBaseJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor;
using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFExifJPEGCompressor_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFExifJPEGCompressor::*)($ImageWriteParam*)>(&TIFFExifJPEGCompressor::init$))},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFExifJPEGCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFExifJPEGCompressor",
	"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor",
	nullptr,
	nullptr,
	_TIFFExifJPEGCompressor_MethodInfo_
};

$Object* allocate$TIFFExifJPEGCompressor($Class* clazz) {
	return $of($alloc(TIFFExifJPEGCompressor));
}

void TIFFExifJPEGCompressor::init$($ImageWriteParam* param) {
	$init($TIFFImageWriter);
	$TIFFBaseJPEGCompressor::init$($TIFFImageWriter::EXIF_JPEG_COMPRESSION_TYPE, $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG, false, param);
}

void TIFFExifJPEGCompressor::setMetadata($IIOMetadata* metadata) {
	$TIFFBaseJPEGCompressor::setMetadata(metadata);
	initJPEGWriter(false, true);
}

TIFFExifJPEGCompressor::TIFFExifJPEGCompressor() {
}

$Class* TIFFExifJPEGCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFExifJPEGCompressor, name, initialize, &_TIFFExifJPEGCompressor_ClassInfo_, allocate$TIFFExifJPEGCompressor);
	return class$;
}

$Class* TIFFExifJPEGCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
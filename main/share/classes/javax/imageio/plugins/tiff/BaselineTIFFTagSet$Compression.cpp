#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Compression.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$Compression_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Compression::*)()>(&BaselineTIFFTagSet$Compression::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Compression_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Compression", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Compression", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Compression_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Compression",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Compression_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Compression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Compression($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Compression));
}

void BaselineTIFFTagSet$Compression::init$() {
	$TIFFTag::init$("Compression"_s, 259, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Uncompressed"_s);
	addValueName(2, "CCITT RLE"_s);
	addValueName(3, "CCITT T.4"_s);
	addValueName(4, "CCITT T.6"_s);
	addValueName(5, "LZW"_s);
	addValueName(6, "Old JPEG"_s);
	addValueName(7, "JPEG"_s);
	addValueName(8, "ZLib"_s);
	addValueName(0x00008005, "PackBits"_s);
	addValueName(0x000080B2, "Deflate"_s);
}

BaselineTIFFTagSet$Compression::BaselineTIFFTagSet$Compression() {
}

$Class* BaselineTIFFTagSet$Compression::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Compression, name, initialize, &_BaselineTIFFTagSet$Compression_ClassInfo_, allocate$BaselineTIFFTagSet$Compression);
	return class$;
}

$Class* BaselineTIFFTagSet$Compression::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoKeyDirectory.h>

#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
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

$MethodInfo _GeoTIFFTagSet$GeoKeyDirectory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeoTIFFTagSet$GeoKeyDirectory::*)()>(&GeoTIFFTagSet$GeoKeyDirectory::init$))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet$GeoKeyDirectory_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoKeyDirectory", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoKeyDirectory", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet$GeoKeyDirectory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoKeyDirectory",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_GeoTIFFTagSet$GeoKeyDirectory_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet$GeoKeyDirectory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet"
};

$Object* allocate$GeoTIFFTagSet$GeoKeyDirectory($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet$GeoKeyDirectory));
}

void GeoTIFFTagSet$GeoKeyDirectory::init$() {
	$TIFFTag::init$("GeoKeyDirectoryTag"_s, 0x000087AF, $sl(1, $TIFFTag::TIFF_SHORT));
}

GeoTIFFTagSet$GeoKeyDirectory::GeoTIFFTagSet$GeoKeyDirectory() {
}

$Class* GeoTIFFTagSet$GeoKeyDirectory::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet$GeoKeyDirectory, name, initialize, &_GeoTIFFTagSet$GeoKeyDirectory_ClassInfo_, allocate$GeoTIFFTagSet$GeoKeyDirectory);
	return class$;
}

$Class* GeoTIFFTagSet$GeoKeyDirectory::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
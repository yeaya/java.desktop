#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileWidth.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$TileWidth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TileWidth::*)()>(&BaselineTIFFTagSet$TileWidth::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TileWidth_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileWidth", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TileWidth_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileWidth",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileWidth_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileWidth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TileWidth($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TileWidth));
}

void BaselineTIFFTagSet$TileWidth::init$() {
	$TIFFTag::init$("TileWidth"_s, 322, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$TileWidth::BaselineTIFFTagSet$TileWidth() {
}

$Class* BaselineTIFFTagSet$TileWidth::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TileWidth, name, initialize, &_BaselineTIFFTagSet$TileWidth_ClassInfo_, allocate$BaselineTIFFTagSet$TileWidth);
	return class$;
}

$Class* BaselineTIFFTagSet$TileWidth::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
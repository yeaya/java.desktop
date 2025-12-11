#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileOffsets.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$TileOffsets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TileOffsets::*)()>(&BaselineTIFFTagSet$TileOffsets::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TileOffsets_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileOffsets", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TileOffsets_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileOffsets",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileOffsets_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileOffsets_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TileOffsets($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TileOffsets));
}

void BaselineTIFFTagSet$TileOffsets::init$() {
	$TIFFTag::init$("TileOffsets"_s, 324, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$TileOffsets::BaselineTIFFTagSet$TileOffsets() {
}

$Class* BaselineTIFFTagSet$TileOffsets::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TileOffsets, name, initialize, &_BaselineTIFFTagSet$TileOffsets_ClassInfo_, allocate$BaselineTIFFTagSet$TileOffsets);
	return class$;
}

$Class* BaselineTIFFTagSet$TileOffsets::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
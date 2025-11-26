#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileLength.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$TileLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TileLength::*)()>(&BaselineTIFFTagSet$TileLength::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TileLength_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileLength", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TileLength_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileLength",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileLength_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileLength_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TileLength($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TileLength));
}

void BaselineTIFFTagSet$TileLength::init$() {
	$TIFFTag::init$("TileLength"_s, 323, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$TileLength::BaselineTIFFTagSet$TileLength() {
}

$Class* BaselineTIFFTagSet$TileLength::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TileLength, name, initialize, &_BaselineTIFFTagSet$TileLength_ClassInfo_, allocate$BaselineTIFFTagSet$TileLength);
	return class$;
}

$Class* BaselineTIFFTagSet$TileLength::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$CellWidth.h>

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

$MethodInfo _BaselineTIFFTagSet$CellWidth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$CellWidth::*)()>(&BaselineTIFFTagSet$CellWidth::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$CellWidth_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "CellWidth", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$CellWidth_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellWidth",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$CellWidth_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$CellWidth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$CellWidth($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$CellWidth));
}

void BaselineTIFFTagSet$CellWidth::init$() {
	$TIFFTag::init$("CellWidth"_s, 264, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$CellWidth::BaselineTIFFTagSet$CellWidth() {
}

$Class* BaselineTIFFTagSet$CellWidth::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$CellWidth, name, initialize, &_BaselineTIFFTagSet$CellWidth_ClassInfo_, allocate$BaselineTIFFTagSet$CellWidth);
	return class$;
}

$Class* BaselineTIFFTagSet$CellWidth::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
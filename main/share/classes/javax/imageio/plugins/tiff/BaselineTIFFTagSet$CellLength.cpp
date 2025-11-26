#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$CellLength.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

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

$MethodInfo _BaselineTIFFTagSet$CellLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$CellLength::*)()>(&BaselineTIFFTagSet$CellLength::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$CellLength_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "CellLength", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$CellLength_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellLength",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$CellLength_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$CellLength_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$CellLength($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$CellLength));
}

void BaselineTIFFTagSet$CellLength::init$() {
	$TIFFTag::init$("CellLength"_s, 265, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$CellLength::BaselineTIFFTagSet$CellLength() {
}

$Class* BaselineTIFFTagSet$CellLength::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$CellLength, name, initialize, &_BaselineTIFFTagSet$CellLength_ClassInfo_, allocate$BaselineTIFFTagSet$CellLength);
	return class$;
}

$Class* BaselineTIFFTagSet$CellLength::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
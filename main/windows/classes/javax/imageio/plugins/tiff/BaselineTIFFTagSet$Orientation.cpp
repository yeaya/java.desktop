#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Orientation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _BaselineTIFFTagSet$Orientation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Orientation::*)()>(&BaselineTIFFTagSet$Orientation::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Orientation_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Orientation", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Orientation", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Orientation_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Orientation",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Orientation_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Orientation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Orientation($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Orientation));
}

void BaselineTIFFTagSet$Orientation::init$() {
	$TIFFTag::init$("Orientation"_s, 274, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Row 0=Top, Column 0=Left"_s);
	addValueName(2, "Row 0=Top, Column 0=Right"_s);
	addValueName(3, "Row 0=Bottom, Column 0=Right"_s);
	addValueName(4, "Row 0=Bottom, Column 0=Left"_s);
	addValueName(5, "Row 0=Left, Column 0=Top"_s);
	addValueName(6, "Row 0=Right, Column 0=Top"_s);
	addValueName(7, "Row 0=Right, Column 0=Bottom"_s);
}

BaselineTIFFTagSet$Orientation::BaselineTIFFTagSet$Orientation() {
}

$Class* BaselineTIFFTagSet$Orientation::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Orientation, name, initialize, &_BaselineTIFFTagSet$Orientation_ClassInfo_, allocate$BaselineTIFFTagSet$Orientation);
	return class$;
}

$Class* BaselineTIFFTagSet$Orientation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
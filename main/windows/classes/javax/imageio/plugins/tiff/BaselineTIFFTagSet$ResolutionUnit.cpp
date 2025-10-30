#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ResolutionUnit.h>

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

$MethodInfo _BaselineTIFFTagSet$ResolutionUnit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ResolutionUnit::*)()>(&BaselineTIFFTagSet$ResolutionUnit::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ResolutionUnit_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ResolutionUnit", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ResolutionUnit", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ResolutionUnit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ResolutionUnit",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ResolutionUnit_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ResolutionUnit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ResolutionUnit($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ResolutionUnit));
}

void BaselineTIFFTagSet$ResolutionUnit::init$() {
	$TIFFTag::init$("ResolutionUnit"_s, 296, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "Inch"_s);
	addValueName(3, "Centimeter"_s);
}

BaselineTIFFTagSet$ResolutionUnit::BaselineTIFFTagSet$ResolutionUnit() {
}

$Class* BaselineTIFFTagSet$ResolutionUnit::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ResolutionUnit, name, initialize, &_BaselineTIFFTagSet$ResolutionUnit_ClassInfo_, allocate$BaselineTIFFTagSet$ResolutionUnit);
	return class$;
}

$Class* BaselineTIFFTagSet$ResolutionUnit::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
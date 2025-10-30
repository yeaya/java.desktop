#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$GrayResponseUnit.h>

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

$MethodInfo _BaselineTIFFTagSet$GrayResponseUnit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$GrayResponseUnit::*)()>(&BaselineTIFFTagSet$GrayResponseUnit::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$GrayResponseUnit_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseUnit", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "GrayResponseUnit", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$GrayResponseUnit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseUnit",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$GrayResponseUnit_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$GrayResponseUnit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$GrayResponseUnit($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$GrayResponseUnit));
}

void BaselineTIFFTagSet$GrayResponseUnit::init$() {
	$TIFFTag::init$("GrayResponseUnit"_s, 290, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Tenths"_s);
	addValueName(2, "Hundredths"_s);
	addValueName(3, "Thousandths"_s);
	addValueName(4, "Ten-Thousandths"_s);
	addValueName(5, "Hundred-Thousandths"_s);
}

BaselineTIFFTagSet$GrayResponseUnit::BaselineTIFFTagSet$GrayResponseUnit() {
}

$Class* BaselineTIFFTagSet$GrayResponseUnit::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$GrayResponseUnit, name, initialize, &_BaselineTIFFTagSet$GrayResponseUnit_ClassInfo_, allocate$BaselineTIFFTagSet$GrayResponseUnit);
	return class$;
}

$Class* BaselineTIFFTagSet$GrayResponseUnit::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
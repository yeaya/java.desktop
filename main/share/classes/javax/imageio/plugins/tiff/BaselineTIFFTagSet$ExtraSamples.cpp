#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ExtraSamples.h>

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

$MethodInfo _BaselineTIFFTagSet$ExtraSamples_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ExtraSamples::*)()>(&BaselineTIFFTagSet$ExtraSamples::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ExtraSamples_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ExtraSamples", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ExtraSamples", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ExtraSamples_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ExtraSamples",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ExtraSamples_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ExtraSamples_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ExtraSamples($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ExtraSamples));
}

void BaselineTIFFTagSet$ExtraSamples::init$() {
	$TIFFTag::init$("ExtraSamples"_s, 338, $sl(1, $TIFFTag::TIFF_SHORT));
	addValueName(0, "Unspecified"_s);
	addValueName(1, "Associated Alpha"_s);
	addValueName(2, "Unassociated Alpha"_s);
}

BaselineTIFFTagSet$ExtraSamples::BaselineTIFFTagSet$ExtraSamples() {
}

$Class* BaselineTIFFTagSet$ExtraSamples::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ExtraSamples, name, initialize, &_BaselineTIFFTagSet$ExtraSamples_ClassInfo_, allocate$BaselineTIFFTagSet$ExtraSamples);
	return class$;
}

$Class* BaselineTIFFTagSet$ExtraSamples::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
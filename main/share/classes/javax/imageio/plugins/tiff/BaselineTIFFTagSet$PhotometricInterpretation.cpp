#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PhotometricInterpretation.h>

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

$MethodInfo _BaselineTIFFTagSet$PhotometricInterpretation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$PhotometricInterpretation::*)()>(&BaselineTIFFTagSet$PhotometricInterpretation::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$PhotometricInterpretation_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PhotometricInterpretation", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PhotometricInterpretation", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$PhotometricInterpretation_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PhotometricInterpretation",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PhotometricInterpretation_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PhotometricInterpretation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$PhotometricInterpretation($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$PhotometricInterpretation));
}

void BaselineTIFFTagSet$PhotometricInterpretation::init$() {
	$TIFFTag::init$("PhotometricInterpretation"_s, 262, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "WhiteIsZero"_s);
	addValueName(1, "BlackIsZero"_s);
	addValueName(2, "RGB"_s);
	addValueName(3, "Palette Color"_s);
	addValueName(4, "Transparency Mask"_s);
	addValueName(5, "CMYK"_s);
	addValueName(6, "YCbCr"_s);
	addValueName(8, "CIELAB"_s);
	addValueName(9, "ICCLAB"_s);
}

BaselineTIFFTagSet$PhotometricInterpretation::BaselineTIFFTagSet$PhotometricInterpretation() {
}

$Class* BaselineTIFFTagSet$PhotometricInterpretation::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$PhotometricInterpretation, name, initialize, &_BaselineTIFFTagSet$PhotometricInterpretation_ClassInfo_, allocate$BaselineTIFFTagSet$PhotometricInterpretation);
	return class$;
}

$Class* BaselineTIFFTagSet$PhotometricInterpretation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
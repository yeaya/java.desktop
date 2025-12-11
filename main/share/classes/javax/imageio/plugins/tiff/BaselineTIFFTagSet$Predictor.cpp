#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Predictor.h>

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

$MethodInfo _BaselineTIFFTagSet$Predictor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Predictor::*)()>(&BaselineTIFFTagSet$Predictor::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Predictor_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Predictor", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Predictor", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Predictor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Predictor",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Predictor_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Predictor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Predictor($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Predictor));
}

void BaselineTIFFTagSet$Predictor::init$() {
	$TIFFTag::init$("Predictor"_s, 317, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "Horizontal Differencing"_s);
}

BaselineTIFFTagSet$Predictor::BaselineTIFFTagSet$Predictor() {
}

$Class* BaselineTIFFTagSet$Predictor::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Predictor, name, initialize, &_BaselineTIFFTagSet$Predictor_ClassInfo_, allocate$BaselineTIFFTagSet$Predictor);
	return class$;
}

$Class* BaselineTIFFTagSet$Predictor::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
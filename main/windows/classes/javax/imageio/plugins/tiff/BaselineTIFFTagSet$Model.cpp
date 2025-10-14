#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Model.h>

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

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$Model_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Model::*)()>(&BaselineTIFFTagSet$Model::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Model_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Model", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Model", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Model_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Model",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Model_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Model_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Model($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Model));
}

void BaselineTIFFTagSet$Model::init$() {
	$TIFFTag::init$("Model"_s, 272, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$Model::BaselineTIFFTagSet$Model() {
}

$Class* BaselineTIFFTagSet$Model::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Model, name, initialize, &_BaselineTIFFTagSet$Model_ClassInfo_, allocate$BaselineTIFFTagSet$Model);
	return class$;
}

$Class* BaselineTIFFTagSet$Model::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGRestartInterval.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGRestartInterval_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGRestartInterval::*)()>(&BaselineTIFFTagSet$JPEGRestartInterval::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGRestartInterval_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGRestartInterval", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGRestartInterval", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGRestartInterval_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGRestartInterval",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGRestartInterval_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGRestartInterval_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGRestartInterval($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGRestartInterval));
}

void BaselineTIFFTagSet$JPEGRestartInterval::init$() {
	$TIFFTag::init$("JPEGRestartInterval"_s, 515, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$JPEGRestartInterval::BaselineTIFFTagSet$JPEGRestartInterval() {
}

$Class* BaselineTIFFTagSet$JPEGRestartInterval::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGRestartInterval, name, initialize, &_BaselineTIFFTagSet$JPEGRestartInterval_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGRestartInterval);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGRestartInterval::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
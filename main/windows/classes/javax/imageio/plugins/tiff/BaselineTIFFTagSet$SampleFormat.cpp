#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SampleFormat.h>

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

$MethodInfo _BaselineTIFFTagSet$SampleFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$SampleFormat::*)()>(&BaselineTIFFTagSet$SampleFormat::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$SampleFormat_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SampleFormat", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SampleFormat", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$SampleFormat_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SampleFormat",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SampleFormat_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SampleFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$SampleFormat($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$SampleFormat));
}

void BaselineTIFFTagSet$SampleFormat::init$() {
	$TIFFTag::init$("SampleFormat"_s, 339, $sl(1, $TIFFTag::TIFF_SHORT));
	addValueName(1, "Unsigned Integer"_s);
	addValueName(2, "Signed Integer"_s);
	addValueName(3, "Floating Point"_s);
	addValueName(4, "Undefined"_s);
}

BaselineTIFFTagSet$SampleFormat::BaselineTIFFTagSet$SampleFormat() {
}

$Class* BaselineTIFFTagSet$SampleFormat::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$SampleFormat, name, initialize, &_BaselineTIFFTagSet$SampleFormat_ClassInfo_, allocate$BaselineTIFFTagSet$SampleFormat);
	return class$;
}

$Class* BaselineTIFFTagSet$SampleFormat::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
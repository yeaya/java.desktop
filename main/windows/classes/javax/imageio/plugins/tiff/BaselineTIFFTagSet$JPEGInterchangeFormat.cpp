#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGInterchangeFormat.h>

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

#undef TIFF_LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$JPEGInterchangeFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGInterchangeFormat::*)()>(&BaselineTIFFTagSet$JPEGInterchangeFormat::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGInterchangeFormat_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormat", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGInterchangeFormat", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGInterchangeFormat_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormat",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGInterchangeFormat_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGInterchangeFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGInterchangeFormat($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGInterchangeFormat));
}

void BaselineTIFFTagSet$JPEGInterchangeFormat::init$() {
	$TIFFTag::init$("JPEGInterchangeFormat"_s, 513, $sl(1, $TIFFTag::TIFF_LONG), 1);
}

BaselineTIFFTagSet$JPEGInterchangeFormat::BaselineTIFFTagSet$JPEGInterchangeFormat() {
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormat::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGInterchangeFormat, name, initialize, &_BaselineTIFFTagSet$JPEGInterchangeFormat_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGInterchangeFormat);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormat::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
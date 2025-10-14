#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PageNumber.h>

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

$MethodInfo _BaselineTIFFTagSet$PageNumber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$PageNumber::*)()>(&BaselineTIFFTagSet$PageNumber::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$PageNumber_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageNumber", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PageNumber", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$PageNumber_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageNumber",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PageNumber_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PageNumber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$PageNumber($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$PageNumber));
}

void BaselineTIFFTagSet$PageNumber::init$() {
	$TIFFTag::init$("PageNumber"_s, 297, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$PageNumber::BaselineTIFFTagSet$PageNumber() {
}

$Class* BaselineTIFFTagSet$PageNumber::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$PageNumber, name, initialize, &_BaselineTIFFTagSet$PageNumber_ClassInfo_, allocate$BaselineTIFFTagSet$PageNumber);
	return class$;
}

$Class* BaselineTIFFTagSet$PageNumber::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
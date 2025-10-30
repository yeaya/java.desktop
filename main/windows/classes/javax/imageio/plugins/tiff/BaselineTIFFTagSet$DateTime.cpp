#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DateTime.h>

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

$MethodInfo _BaselineTIFFTagSet$DateTime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$DateTime::*)()>(&BaselineTIFFTagSet$DateTime::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$DateTime_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DateTime", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DateTime", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$DateTime_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DateTime",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$DateTime_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$DateTime_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$DateTime($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$DateTime));
}

void BaselineTIFFTagSet$DateTime::init$() {
	$TIFFTag::init$("DateTime"_s, 306, $sl(1, $TIFFTag::TIFF_ASCII), 20);
}

BaselineTIFFTagSet$DateTime::BaselineTIFFTagSet$DateTime() {
}

$Class* BaselineTIFFTagSet$DateTime::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$DateTime, name, initialize, &_BaselineTIFFTagSet$DateTime_ClassInfo_, allocate$BaselineTIFFTagSet$DateTime);
	return class$;
}

$Class* BaselineTIFFTagSet$DateTime::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Copyright.h>

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

$MethodInfo _BaselineTIFFTagSet$Copyright_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Copyright::*)()>(&BaselineTIFFTagSet$Copyright::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Copyright_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Copyright", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Copyright", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Copyright_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Copyright",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Copyright_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Copyright_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Copyright($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Copyright));
}

void BaselineTIFFTagSet$Copyright::init$() {
	$TIFFTag::init$("Copyright"_s, 0x00008298, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$Copyright::BaselineTIFFTagSet$Copyright() {
}

$Class* BaselineTIFFTagSet$Copyright::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Copyright, name, initialize, &_BaselineTIFFTagSet$Copyright_ClassInfo_, allocate$BaselineTIFFTagSet$Copyright);
	return class$;
}

$Class* BaselineTIFFTagSet$Copyright::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
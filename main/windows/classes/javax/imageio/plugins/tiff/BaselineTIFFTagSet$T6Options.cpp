#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$T6Options.h>

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

$MethodInfo _BaselineTIFFTagSet$T6Options_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$T6Options::*)()>(&BaselineTIFFTagSet$T6Options::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$T6Options_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T6Options", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "T6Options", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$T6Options_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T6Options",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$T6Options_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$T6Options_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$T6Options($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$T6Options));
}

void BaselineTIFFTagSet$T6Options::init$() {
	$TIFFTag::init$("T6Options"_s, 293, $sl(1, $TIFFTag::TIFF_LONG), 1);
	addValueName(0, "Default"_s);
	addValueName(2, "Uncompressed"_s);
}

BaselineTIFFTagSet$T6Options::BaselineTIFFTagSet$T6Options() {
}

$Class* BaselineTIFFTagSet$T6Options::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$T6Options, name, initialize, &_BaselineTIFFTagSet$T6Options_ClassInfo_, allocate$BaselineTIFFTagSet$T6Options);
	return class$;
}

$Class* BaselineTIFFTagSet$T6Options::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
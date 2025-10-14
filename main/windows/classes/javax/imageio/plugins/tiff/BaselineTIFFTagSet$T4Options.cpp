#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$T4Options.h>

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

$MethodInfo _BaselineTIFFTagSet$T4Options_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$T4Options::*)()>(&BaselineTIFFTagSet$T4Options::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$T4Options_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T4Options", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "T4Options", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$T4Options_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T4Options",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$T4Options_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$T4Options_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$T4Options($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$T4Options));
}

void BaselineTIFFTagSet$T4Options::init$() {
	$TIFFTag::init$("T4Options"_s, 292, $sl(1, $TIFFTag::TIFF_LONG), 1);
	addValueName(0, "Default 1DCoding"_s);
	addValueName(1, "2DCoding"_s);
	addValueName(2, "Uncompressed"_s);
	addValueName(1 | 2, "2DCoding+Uncompressed"_s);
	addValueName(4, "EOLByteAligned"_s);
	addValueName(1 | 4, "2DCoding+EOLByteAligned"_s);
	addValueName(2 | 4, "Uncompressed+EOLByteAligned"_s);
	addValueName((1 | 2) | 4, "2DCoding+Uncompressed+EOLByteAligned"_s);
}

BaselineTIFFTagSet$T4Options::BaselineTIFFTagSet$T4Options() {
}

$Class* BaselineTIFFTagSet$T4Options::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$T4Options, name, initialize, &_BaselineTIFFTagSet$T4Options_ClassInfo_, allocate$BaselineTIFFTagSet$T4Options);
	return class$;
}

$Class* BaselineTIFFTagSet$T4Options::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
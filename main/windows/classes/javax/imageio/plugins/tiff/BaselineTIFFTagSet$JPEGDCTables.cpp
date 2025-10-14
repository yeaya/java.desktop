#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGDCTables.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGDCTables_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGDCTables::*)()>(&BaselineTIFFTagSet$JPEGDCTables::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGDCTables_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGDCTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGDCTables", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGDCTables_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGDCTables",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGDCTables_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGDCTables_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGDCTables($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGDCTables));
}

void BaselineTIFFTagSet$JPEGDCTables::init$() {
	$TIFFTag::init$("JPEGDCTables"_s, 520, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$JPEGDCTables::BaselineTIFFTagSet$JPEGDCTables() {
}

$Class* BaselineTIFFTagSet$JPEGDCTables::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGDCTables, name, initialize, &_BaselineTIFFTagSet$JPEGDCTables_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGDCTables);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGDCTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
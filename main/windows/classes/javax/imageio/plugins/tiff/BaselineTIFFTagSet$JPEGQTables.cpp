#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGQTables.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGQTables_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGQTables::*)()>(&BaselineTIFFTagSet$JPEGQTables::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGQTables_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGQTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGQTables", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGQTables_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGQTables",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGQTables_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGQTables_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGQTables($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGQTables));
}

void BaselineTIFFTagSet$JPEGQTables::init$() {
	$TIFFTag::init$("JPEGQTables"_s, 519, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$JPEGQTables::BaselineTIFFTagSet$JPEGQTables() {
}

$Class* BaselineTIFFTagSet$JPEGQTables::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGQTables, name, initialize, &_BaselineTIFFTagSet$JPEGQTables_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGQTables);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGQTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
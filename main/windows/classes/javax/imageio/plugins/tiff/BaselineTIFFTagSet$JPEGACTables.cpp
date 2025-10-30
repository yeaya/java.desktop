#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGACTables.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGACTables_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGACTables::*)()>(&BaselineTIFFTagSet$JPEGACTables::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGACTables_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGACTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGACTables", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGACTables_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGACTables",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGACTables_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGACTables_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGACTables($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGACTables));
}

void BaselineTIFFTagSet$JPEGACTables::init$() {
	$TIFFTag::init$("JPEGACTables"_s, 521, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$JPEGACTables::BaselineTIFFTagSet$JPEGACTables() {
}

$Class* BaselineTIFFTagSet$JPEGACTables::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGACTables, name, initialize, &_BaselineTIFFTagSet$JPEGACTables_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGACTables);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGACTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
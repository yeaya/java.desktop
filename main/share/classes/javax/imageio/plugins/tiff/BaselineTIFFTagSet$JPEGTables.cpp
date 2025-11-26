#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGTables.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$JPEGTables_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGTables::*)()>(&BaselineTIFFTagSet$JPEGTables::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGTables_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGTables", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGTables_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGTables",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGTables_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGTables_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGTables($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGTables));
}

void BaselineTIFFTagSet$JPEGTables::init$() {
	$TIFFTag::init$("JPEGTables"_s, 347, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

BaselineTIFFTagSet$JPEGTables::BaselineTIFFTagSet$JPEGTables() {
}

$Class* BaselineTIFFTagSet$JPEGTables::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGTables, name, initialize, &_BaselineTIFFTagSet$JPEGTables_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGTables);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGTables::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
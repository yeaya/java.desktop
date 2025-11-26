#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$BadFaxLines.h>

#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FaxTIFFTagSet = ::javax::imageio::plugins::tiff::FaxTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _FaxTIFFTagSet$BadFaxLines_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FaxTIFFTagSet$BadFaxLines::*)()>(&FaxTIFFTagSet$BadFaxLines::init$))},
	{}
};

$InnerClassInfo _FaxTIFFTagSet$BadFaxLines_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.FaxTIFFTagSet$BadFaxLines", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "BadFaxLines", $STATIC},
	{}
};

$ClassInfo _FaxTIFFTagSet$BadFaxLines_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet$BadFaxLines",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_FaxTIFFTagSet$BadFaxLines_MethodInfo_,
	nullptr,
	nullptr,
	_FaxTIFFTagSet$BadFaxLines_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet"
};

$Object* allocate$FaxTIFFTagSet$BadFaxLines($Class* clazz) {
	return $of($alloc(FaxTIFFTagSet$BadFaxLines));
}

void FaxTIFFTagSet$BadFaxLines::init$() {
	$TIFFTag::init$("BadFaxLines"_s, 326, $sl(1, $TIFFTag::TIFF_SHORT) | $sl(1, $TIFFTag::TIFF_LONG), 1);
}

FaxTIFFTagSet$BadFaxLines::FaxTIFFTagSet$BadFaxLines() {
}

$Class* FaxTIFFTagSet$BadFaxLines::load$($String* name, bool initialize) {
	$loadClass(FaxTIFFTagSet$BadFaxLines, name, initialize, &_FaxTIFFTagSet$BadFaxLines_ClassInfo_, allocate$FaxTIFFTagSet$BadFaxLines);
	return class$;
}

$Class* FaxTIFFTagSet$BadFaxLines::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
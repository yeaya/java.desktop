#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$ConsecutiveBadFaxLines.h>

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

$MethodInfo _FaxTIFFTagSet$ConsecutiveBadFaxLines_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FaxTIFFTagSet$ConsecutiveBadFaxLines::*)()>(&FaxTIFFTagSet$ConsecutiveBadFaxLines::init$))},
	{}
};

$InnerClassInfo _FaxTIFFTagSet$ConsecutiveBadFaxLines_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.FaxTIFFTagSet$ConsecutiveBadFaxLines", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "ConsecutiveBadFaxLines", $STATIC},
	{}
};

$ClassInfo _FaxTIFFTagSet$ConsecutiveBadFaxLines_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet$ConsecutiveBadFaxLines",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_FaxTIFFTagSet$ConsecutiveBadFaxLines_MethodInfo_,
	nullptr,
	nullptr,
	_FaxTIFFTagSet$ConsecutiveBadFaxLines_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet"
};

$Object* allocate$FaxTIFFTagSet$ConsecutiveBadFaxLines($Class* clazz) {
	return $of($alloc(FaxTIFFTagSet$ConsecutiveBadFaxLines));
}

void FaxTIFFTagSet$ConsecutiveBadFaxLines::init$() {
	$TIFFTag::init$("ConsecutiveBadFaxLines"_s, 328, $sl(1, $TIFFTag::TIFF_SHORT) | $sl(1, $TIFFTag::TIFF_LONG), 1);
}

FaxTIFFTagSet$ConsecutiveBadFaxLines::FaxTIFFTagSet$ConsecutiveBadFaxLines() {
}

$Class* FaxTIFFTagSet$ConsecutiveBadFaxLines::load$($String* name, bool initialize) {
	$loadClass(FaxTIFFTagSet$ConsecutiveBadFaxLines, name, initialize, &_FaxTIFFTagSet$ConsecutiveBadFaxLines_ClassInfo_, allocate$FaxTIFFTagSet$ConsecutiveBadFaxLines);
	return class$;
}

$Class* FaxTIFFTagSet$ConsecutiveBadFaxLines::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
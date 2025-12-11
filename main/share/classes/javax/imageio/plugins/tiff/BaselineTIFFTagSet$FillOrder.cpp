#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FillOrder.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$FillOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$FillOrder::*)()>(&BaselineTIFFTagSet$FillOrder::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$FillOrder_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FillOrder", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FillOrder", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$FillOrder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FillOrder",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$FillOrder_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$FillOrder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$FillOrder($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$FillOrder));
}

void BaselineTIFFTagSet$FillOrder::init$() {
	$TIFFTag::init$("FillOrder"_s, 266, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "LeftToRight"_s);
	addValueName(2, "RightToLeft"_s);
}

BaselineTIFFTagSet$FillOrder::BaselineTIFFTagSet$FillOrder() {
}

$Class* BaselineTIFFTagSet$FillOrder::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$FillOrder, name, initialize, &_BaselineTIFFTagSet$FillOrder_ClassInfo_, allocate$BaselineTIFFTagSet$FillOrder);
	return class$;
}

$Class* BaselineTIFFTagSet$FillOrder::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
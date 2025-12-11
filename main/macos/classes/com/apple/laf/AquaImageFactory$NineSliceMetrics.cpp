#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>

#include <com/apple/laf/AquaImageFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaImageFactory$NineSliceMetrics_FieldInfo_[] = {
	{"wCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, wCut)},
	{"eCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, eCut)},
	{"nCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, nCut)},
	{"sCut", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, sCut)},
	{"minW", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, minW)},
	{"minH", "I", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, minH)},
	{"showMiddle", "Z", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, showMiddle)},
	{"stretchH", "Z", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, stretchH)},
	{"stretchV", "Z", nullptr, $PUBLIC | $FINAL, $field(AquaImageFactory$NineSliceMetrics, stretchV)},
	{}
};

$MethodInfo _AquaImageFactory$NineSliceMetrics_MethodInfo_[] = {
	{"<init>", "(IIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$NineSliceMetrics::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&AquaImageFactory$NineSliceMetrics::init$))},
	{"<init>", "(IIIIIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$NineSliceMetrics::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&AquaImageFactory$NineSliceMetrics::init$))},
	{"<init>", "(IIIIIIZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$NineSliceMetrics::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,bool,bool)>(&AquaImageFactory$NineSliceMetrics::init$))},
	{}
};

$InnerClassInfo _AquaImageFactory$NineSliceMetrics_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$NineSliceMetrics", "com.apple.laf.AquaImageFactory", "NineSliceMetrics", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaImageFactory$NineSliceMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaImageFactory$NineSliceMetrics",
	"java.lang.Object",
	nullptr,
	_AquaImageFactory$NineSliceMetrics_FieldInfo_,
	_AquaImageFactory$NineSliceMetrics_MethodInfo_,
	nullptr,
	nullptr,
	_AquaImageFactory$NineSliceMetrics_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$NineSliceMetrics($Class* clazz) {
	return $of($alloc(AquaImageFactory$NineSliceMetrics));
}

void AquaImageFactory$NineSliceMetrics::init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut) {
	AquaImageFactory$NineSliceMetrics::init$(minWidth, minHeight, westCut, eastCut, northCut, southCut, true);
}

void AquaImageFactory$NineSliceMetrics::init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool showMiddle) {
	AquaImageFactory$NineSliceMetrics::init$(minWidth, minHeight, westCut, eastCut, northCut, southCut, showMiddle, true, true);
}

void AquaImageFactory$NineSliceMetrics::init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool showMiddle, bool stretchHorizontally, bool stretchVertically) {
	this->wCut = westCut;
	this->eCut = eastCut;
	this->nCut = northCut;
	this->sCut = southCut;
	this->minW = minWidth;
	this->minH = minHeight;
	this->showMiddle = showMiddle;
	this->stretchH = stretchHorizontally;
	this->stretchV = stretchVertically;
}

AquaImageFactory$NineSliceMetrics::AquaImageFactory$NineSliceMetrics() {
}

$Class* AquaImageFactory$NineSliceMetrics::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$NineSliceMetrics, name, initialize, &_AquaImageFactory$NineSliceMetrics_ClassInfo_, allocate$AquaImageFactory$NineSliceMetrics);
	return class$;
}

$Class* AquaImageFactory$NineSliceMetrics::class$ = nullptr;

		} // laf
	} // apple
} // com
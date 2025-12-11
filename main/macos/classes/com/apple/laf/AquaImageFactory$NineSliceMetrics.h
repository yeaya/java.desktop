#ifndef _com_apple_laf_AquaImageFactory$NineSliceMetrics_h_
#define _com_apple_laf_AquaImageFactory$NineSliceMetrics_h_
//$ class com.apple.laf.AquaImageFactory$NineSliceMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$NineSliceMetrics : public ::java::lang::Object {
	$class(AquaImageFactory$NineSliceMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaImageFactory$NineSliceMetrics();
	void init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut);
	void init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool showMiddle);
	void init$(int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool showMiddle, bool stretchHorizontally, bool stretchVertically);
	int32_t wCut = 0;
	int32_t eCut = 0;
	int32_t nCut = 0;
	int32_t sCut = 0;
	int32_t minW = 0;
	int32_t minH = 0;
	bool showMiddle = false;
	bool stretchH = false;
	bool stretchV = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$NineSliceMetrics_h_
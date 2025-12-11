#ifndef _apple_laf_JRSUIConstants$ScrollBarHit_h_
#define _apple_laf_JRSUIConstants$ScrollBarHit_h_
//$ class apple.laf.JRSUIConstants$ScrollBarHit
//$ extends apple.laf.JRSUIConstants$Hit

#include <apple/laf/JRSUIConstants$Hit.h>

#pragma push_macro("ARROW_MAX")
#undef ARROW_MAX
#pragma push_macro("ARROW_MAX_INSIDE")
#undef ARROW_MAX_INSIDE
#pragma push_macro("ARROW_MIN")
#undef ARROW_MIN
#pragma push_macro("ARROW_MIN_INSIDE")
#undef ARROW_MIN_INSIDE
#pragma push_macro("THUMB")
#undef THUMB
#pragma push_macro("TRACK_MAX")
#undef TRACK_MAX
#pragma push_macro("TRACK_MIN")
#undef TRACK_MIN

namespace apple {
	namespace laf {

class JRSUIConstants$ScrollBarHit : public ::apple::laf::JRSUIConstants$Hit {
	$class(JRSUIConstants$ScrollBarHit, 0, ::apple::laf::JRSUIConstants$Hit)
public:
	JRSUIConstants$ScrollBarHit();
	void init$(int32_t hit);
	static const int32_t _thumb = 2;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* THUMB;
	static const int32_t _trackMin = 3;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* TRACK_MIN;
	static const int32_t _trackMax = 4;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* TRACK_MAX;
	static const int32_t _arrowMin = 5;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* ARROW_MIN;
	static const int32_t _arrowMax = 6;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* ARROW_MAX;
	static const int32_t _arrowMaxInside = 7;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* ARROW_MAX_INSIDE;
	static const int32_t _arrowMinInside = 8;
	static ::apple::laf::JRSUIConstants$ScrollBarHit* ARROW_MIN_INSIDE;
};

	} // laf
} // apple

#pragma pop_macro("ARROW_MAX")
#pragma pop_macro("ARROW_MAX_INSIDE")
#pragma pop_macro("ARROW_MIN")
#pragma pop_macro("ARROW_MIN_INSIDE")
#pragma pop_macro("THUMB")
#pragma pop_macro("TRACK_MAX")
#pragma pop_macro("TRACK_MIN")

#endif // _apple_laf_JRSUIConstants$ScrollBarHit_h_
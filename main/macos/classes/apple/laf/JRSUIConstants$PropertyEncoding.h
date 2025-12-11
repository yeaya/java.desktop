#ifndef _apple_laf_JRSUIConstants$PropertyEncoding_h_
#define _apple_laf_JRSUIConstants$PropertyEncoding_h_
//$ class apple.laf.JRSUIConstants$PropertyEncoding
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {

class JRSUIConstants$PropertyEncoding : public ::java::lang::Object {
	$class(JRSUIConstants$PropertyEncoding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIConstants$PropertyEncoding();
	void init$(int64_t mask, int8_t shift);
	int64_t mask = 0;
	int8_t shift = 0;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIConstants$PropertyEncoding_h_
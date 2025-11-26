#ifndef _javax_swing_text_SegmentCache_h_
#define _javax_swing_text_SegmentCache_h_
//$ class javax.swing.text.SegmentCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Segment;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class SegmentCache : public ::java::lang::Object {
	$class(SegmentCache, 0, ::java::lang::Object)
public:
	SegmentCache();
	void init$();
	virtual ::javax::swing::text::Segment* getSegment();
	static ::javax::swing::text::SegmentCache* getSharedInstance();
	static ::javax::swing::text::Segment* getSharedSegment();
	virtual void releaseSegment(::javax::swing::text::Segment* segment);
	static void releaseSharedSegment(::javax::swing::text::Segment* segment);
	static ::javax::swing::text::SegmentCache* sharedCache;
	::java::util::List* segments = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_SegmentCache_h_
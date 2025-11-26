#ifndef _javax_swing_text_GapContent$MarkData_h_
#define _javax_swing_text_GapContent$MarkData_h_
//$ class javax.swing.text.GapContent$MarkData
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class GapContent;
			class GapContent$StickyPosition;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export GapContent$MarkData : public ::java::lang::ref::WeakReference {
	$class(GapContent$MarkData, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	GapContent$MarkData();
	void init$(::javax::swing::text::GapContent* this$0, int32_t index);
	void init$(::javax::swing::text::GapContent* this$0, int32_t index, ::javax::swing::text::GapContent$StickyPosition* position, ::java::lang::ref::ReferenceQueue* queue);
	int32_t getOffset();
	::javax::swing::text::GapContent$StickyPosition* getPosition();
	::javax::swing::text::GapContent* this$0 = nullptr;
	int32_t index = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GapContent$MarkData_h_
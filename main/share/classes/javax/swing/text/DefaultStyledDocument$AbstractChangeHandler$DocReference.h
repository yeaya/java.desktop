#ifndef _javax_swing_text_DefaultStyledDocument$AbstractChangeHandler$DocReference_h_
#define _javax_swing_text_DefaultStyledDocument$AbstractChangeHandler$DocReference_h_
//$ class javax.swing.text.DefaultStyledDocument$AbstractChangeHandler$DocReference
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
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultStyledDocument;
			class DefaultStyledDocument$AbstractChangeHandler;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class DefaultStyledDocument$AbstractChangeHandler$DocReference : public ::java::lang::ref::WeakReference {
	$class(DefaultStyledDocument$AbstractChangeHandler$DocReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	DefaultStyledDocument$AbstractChangeHandler$DocReference();
	void init$(::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler* this$0, ::javax::swing::text::DefaultStyledDocument* d, ::java::lang::ref::ReferenceQueue* q);
	virtual ::javax::swing::event::ChangeListener* getListener();
	::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$AbstractChangeHandler$DocReference_h_
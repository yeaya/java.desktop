#ifndef _PopupReferenceMemoryLeak_h_
#define _PopupReferenceMemoryLeak_h_
//$ class PopupReferenceMemoryLeak
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export PopupReferenceMemoryLeak : public ::java::lang::Object {
	$class(PopupReferenceMemoryLeak, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PopupReferenceMemoryLeak();
	void init$();
	virtual void createUI();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static $volatile(::java::lang::ref::WeakReference*) referenceToFrame1;
	static ::javax::swing::JFrame* frame1;
	static ::javax::swing::JFrame* frame2;
};

#endif // _PopupReferenceMemoryLeak_h_
#ifndef _javax_swing_JEditorPane$3_h_
#define _javax_swing_JEditorPane$3_h_
//$ class javax.swing.JEditorPane$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

namespace javax {
	namespace swing {

class JEditorPane$3 : public ::java::lang::Runnable {
	$class(JEditorPane$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JEditorPane$3();
	void init$(::javax::swing::JEditorPane* this$0, ::java::net::URLConnection* val$conn);
	virtual void run() override;
	::javax::swing::JEditorPane* this$0 = nullptr;
	::java::net::URLConnection* val$conn = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$3_h_
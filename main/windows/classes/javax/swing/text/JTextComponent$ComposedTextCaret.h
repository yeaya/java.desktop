#ifndef _javax_swing_text_JTextComponent$ComposedTextCaret_h_
#define _javax_swing_text_JTextComponent$ComposedTextCaret_h_
//$ class javax.swing.text.JTextComponent$ComposedTextCaret
//$ extends javax.swing.text.DefaultCaret

#include <javax/swing/text/DefaultCaret.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export JTextComponent$ComposedTextCaret : public ::javax::swing::text::DefaultCaret {
	$class(JTextComponent$ComposedTextCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret)
public:
	JTextComponent$ComposedTextCaret();
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	void init$(::javax::swing::text::JTextComponent* this$0);
	virtual void install(::javax::swing::text::JTextComponent* c) override;
	using ::javax::swing::text::DefaultCaret::intersects;
	using ::javax::swing::text::DefaultCaret::outcode;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void positionCaret(::java::awt::event::MouseEvent* me) override;
	using ::javax::swing::text::DefaultCaret::setRect;
	using ::javax::swing::text::DefaultCaret::setFrame;
	::javax::swing::text::JTextComponent* this$0 = nullptr;
	::java::awt::Color* bg = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$ComposedTextCaret_h_
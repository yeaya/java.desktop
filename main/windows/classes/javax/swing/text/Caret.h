#ifndef _javax_swing_text_Caret_h_
#define _javax_swing_text_Caret_h_
//$ interface javax.swing.text.Caret
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
		class Point;
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
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export Caret : public ::java::lang::Object {
	$interface(Caret, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual void deinstall(::javax::swing::text::JTextComponent* c) {}
	virtual int32_t getBlinkRate() {return 0;}
	virtual int32_t getDot() {return 0;}
	virtual ::java::awt::Point* getMagicCaretPosition() {return nullptr;}
	virtual int32_t getMark() {return 0;}
	virtual void install(::javax::swing::text::JTextComponent* c) {}
	virtual bool isSelectionVisible() {return false;}
	virtual bool isVisible() {return false;}
	virtual void moveDot(int32_t dot) {}
	virtual void paint(::java::awt::Graphics* g) {}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) {}
	virtual void setBlinkRate(int32_t rate) {}
	virtual void setDot(int32_t dot) {}
	virtual void setMagicCaretPosition(::java::awt::Point* p) {}
	virtual void setSelectionVisible(bool v) {}
	virtual void setVisible(bool v) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Caret_h_
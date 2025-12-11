#ifndef _com_apple_laf_AquaCaret_h_
#define _com_apple_laf_AquaCaret_h_
//$ class com.apple.laf.AquaCaret
//$ extends javax.swing.text.DefaultCaret
//$ implements javax.swing.plaf.UIResource,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultCaret.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$HighlightPainter;
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaCaret : public ::javax::swing::text::DefaultCaret, public ::javax::swing::plaf::UIResource, public ::java::beans::PropertyChangeListener {
	$class(AquaCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret, ::javax::swing::plaf::UIResource, ::java::beans::PropertyChangeListener)
public:
	AquaCaret();
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void damage(::java::awt::Rectangle* r) override;
	virtual void deinstall(::javax::swing::text::JTextComponent* c) override;
	virtual void fireStateChanged() override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::javax::swing::text::Highlighter$HighlightPainter* getSelectionPainter() override;
	virtual void install(::javax::swing::text::JTextComponent* c) override;
	using ::javax::swing::text::DefaultCaret::intersects;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	using ::javax::swing::text::DefaultCaret::outcode;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	using ::javax::swing::text::DefaultCaret::setRect;
	using ::javax::swing::text::DefaultCaret::setFrame;
	virtual void setVisible(bool e) override;
	virtual $String* toString() override;
	bool isMultiLineEditor = false;
	bool mFocused = false;
	bool fPainting = false;
	bool shouldSelectAllOnFocus = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaCaret_h_
#ifndef _com_apple_laf_AquaTextPasswordFieldUI$CapsLockSymbolPainter_h_
#define _com_apple_laf_AquaTextPasswordFieldUI$CapsLockSymbolPainter_h_
//$ class com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter
//$ extends java.awt.event.KeyAdapter
//$ implements javax.swing.border.Border,javax.swing.plaf.UIResource

#include <java/awt/event/KeyAdapter.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextPasswordFieldUI$CapsLockSymbolPainter : public ::java::awt::event::KeyAdapter, public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(AquaTextPasswordFieldUI$CapsLockSymbolPainter, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	AquaTextPasswordFieldUI$CapsLockSymbolPainter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::java::awt::Shape* getCapsLockShape();
	virtual bool isBorderOpaque() override;
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	virtual void update(::java::awt::event::KeyEvent* e);
	::java::awt::Shape* capsLockShape = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextPasswordFieldUI$CapsLockSymbolPainter_h_
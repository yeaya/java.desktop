#ifndef _sun_awt_im_CompositionArea_h_
#define _sun_awt_im_CompositionArea_h_
//$ class sun.awt.im.CompositionArea
//$ extends javax.swing.JPanel
//$ implements java.awt.event.InputMethodListener

#include <java/awt/event/InputMethodListener.h>
#include <javax/swing/JPanel.h>

#pragma push_macro("HEIGHT_MARGIN")
#undef HEIGHT_MARGIN
#pragma push_macro("PASSIVE_WIDTH")
#undef PASSIVE_WIDTH
#pragma push_macro("TEXT_ORIGIN_X")
#undef TEXT_ORIGIN_X
#pragma push_macro("TEXT_ORIGIN_Y")
#undef TEXT_ORIGIN_Y
#pragma push_macro("WIDTH_MARGIN")
#undef WIDTH_MARGIN

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputMethodEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
			class TextLayout;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodRequests;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class CompositionAreaHandler;
			class InputContext;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class CompositionArea : public ::javax::swing::JPanel, public ::java::awt::event::InputMethodListener {
	$class(CompositionArea, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::InputMethodListener)
public:
	CompositionArea();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void caretPositionChanged(::java::awt::event::InputMethodEvent* event) override;
	::java::awt::Rectangle* getCaretRectangle(::java::awt::font::TextHitInfo* caret);
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	::java::awt::font::TextHitInfo* getLocationOffset(int32_t x, int32_t y);
	::java::awt::Rectangle* getTextLocation(::java::awt::font::TextHitInfo* offset);
	virtual void inputMethodTextChanged(::java::awt::event::InputMethodEvent* event) override;
	bool isCompositionAreaVisible();
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	void setCaret(::java::awt::font::TextHitInfo* caret);
	void setCompositionAreaUndecorated(bool setUndecorated);
	void setCompositionAreaVisible(bool visible);
	void setHandlerInfo(::sun::awt::im::CompositionAreaHandler* handler, ::sun::awt::im::InputContext* inputContext);
	void setText(::java::text::AttributedCharacterIterator* composedText, ::java::awt::font::TextHitInfo* caret);
	using ::javax::swing::JPanel::setUI;
	virtual $String* toString() override;
	void updateWindowLocation();
	::sun::awt::im::CompositionAreaHandler* handler = nullptr;
	::java::awt::font::TextLayout* composedTextLayout = nullptr;
	::java::awt::font::TextHitInfo* caret = nullptr;
	::javax::swing::JFrame* compositionWindow = nullptr;
	static const int32_t TEXT_ORIGIN_X = 5;
	static const int32_t TEXT_ORIGIN_Y = 15;
	static const int32_t PASSIVE_WIDTH = 480;
	static const int32_t WIDTH_MARGIN = 10;
	static const int32_t HEIGHT_MARGIN = 3;
	static const int64_t serialVersionUID = (int64_t)0xF153E7647B89D7FC;
};

		} // im
	} // awt
} // sun

#pragma pop_macro("HEIGHT_MARGIN")
#pragma pop_macro("PASSIVE_WIDTH")
#pragma pop_macro("TEXT_ORIGIN_X")
#pragma pop_macro("TEXT_ORIGIN_Y")
#pragma pop_macro("WIDTH_MARGIN")

#endif // _sun_awt_im_CompositionArea_h_
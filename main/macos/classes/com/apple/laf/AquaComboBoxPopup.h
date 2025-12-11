#ifndef _com_apple_laf_AquaComboBoxPopup_h_
#define _com_apple_laf_AquaComboBoxPopup_h_
//$ class com.apple.laf.AquaComboBoxPopup
//$ extends javax.swing.plaf.basic.BasicComboPopup

#include <javax/swing/plaf/basic/BasicComboPopup.h>

#pragma push_macro("FOCUS_RING_PAD_BOTTOM")
#undef FOCUS_RING_PAD_BOTTOM
#pragma push_macro("FOCUS_RING_PAD_LEFT")
#undef FOCUS_RING_PAD_LEFT
#pragma push_macro("FOCUS_RING_PAD_RIGHT")
#undef FOCUS_RING_PAD_RIGHT

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class GraphicsConfiguration;
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JList;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxPopup : public ::javax::swing::plaf::basic::BasicComboPopup {
	$class(AquaComboBoxPopup, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboPopup)
public:
	AquaComboBoxPopup();
	using ::javax::swing::plaf::basic::BasicComboPopup::add;
	using ::javax::swing::plaf::basic::BasicComboPopup::getComponent;
	using ::javax::swing::plaf::basic::BasicComboPopup::contains;
	using ::javax::swing::plaf::basic::BasicComboPopup::enable;
	using ::javax::swing::plaf::basic::BasicComboPopup::getBounds;
	using ::javax::swing::plaf::basic::BasicComboPopup::getSize;
	using ::javax::swing::plaf::basic::BasicComboPopup::getLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboPopup::getMousePosition;
	void init$(::javax::swing::JComboBox* cBox);
	::java::awt::Rectangle* adjustPopupAndGetBounds();
	virtual ::java::awt::Rectangle* computePopupBounds(int32_t px, int32_t py, int32_t pw, int32_t ph) override;
	::java::awt::Rectangle* computePopupBoundsForMenu(int32_t px, int32_t py, int32_t pw, int32_t ph, int32_t itemCount, ::java::awt::Rectangle* scrBounds);
	virtual void configurePopup() override;
	virtual ::javax::swing::JList* createList() override;
	::java::awt::Rectangle* getAvailableScreenArea(::java::awt::Rectangle* bounds, ::java::awt::GraphicsConfiguration* gc);
	::java::awt::Dimension* getBestPopupSizeForRowCount(int32_t maxRowCount);
	::java::awt::Rectangle* getBestScreenBounds(::java::awt::Point* p);
	int32_t getComboBoxEdge(int32_t py, bool bottom);
	bool isPopdown();
	using ::javax::swing::plaf::basic::BasicComboPopup::setUI;
	using ::javax::swing::plaf::basic::BasicComboPopup::remove;
	using ::javax::swing::plaf::basic::BasicComboPopup::setLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::processMouseEvent;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboPopup::repaint;
	using ::javax::swing::plaf::basic::BasicComboPopup::list;
	bool shouldScroll();
	using ::javax::swing::plaf::basic::BasicComboPopup::show;
	virtual void show() override;
	void updateContents(bool remove);
	static const int32_t FOCUS_RING_PAD_LEFT = 6;
	static const int32_t FOCUS_RING_PAD_RIGHT = 6;
	static const int32_t FOCUS_RING_PAD_BOTTOM = 5;
	::java::awt::Component* topStrut = nullptr;
	::java::awt::Component* bottomStrut = nullptr;
	bool isPopDown = false;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("FOCUS_RING_PAD_BOTTOM")
#pragma pop_macro("FOCUS_RING_PAD_LEFT")
#pragma pop_macro("FOCUS_RING_PAD_RIGHT")

#endif // _com_apple_laf_AquaComboBoxPopup_h_
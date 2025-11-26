#ifndef _javax_swing_JScrollPane$ScrollBar_h_
#define _javax_swing_JScrollPane$ScrollBar_h_
//$ class javax.swing.JScrollPane$ScrollBar
//$ extends javax.swing.JScrollBar
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		class JScrollPane;
	}
}

namespace javax {
	namespace swing {

class $export JScrollPane$ScrollBar : public ::javax::swing::JScrollBar, public ::javax::swing::plaf::UIResource {
	$class(JScrollPane$ScrollBar, $NO_CLASS_INIT, ::javax::swing::JScrollBar, ::javax::swing::plaf::UIResource)
public:
	JScrollPane$ScrollBar();
	using ::javax::swing::JScrollBar::getUnitIncrement;
	using ::javax::swing::JScrollBar::getBlockIncrement;
	using ::javax::swing::JScrollBar::contains;
	using ::javax::swing::JScrollBar::enable;
	using ::javax::swing::JScrollBar::getBounds;
	using ::javax::swing::JScrollBar::getSize;
	using ::javax::swing::JScrollBar::getLocation;
	using ::javax::swing::JScrollBar::firePropertyChange;
	using ::javax::swing::JScrollBar::add;
	using ::javax::swing::JScrollBar::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JScrollPane* this$0, int32_t orientation);
	virtual int32_t getBlockIncrement(int32_t direction) override;
	virtual int32_t getUnitIncrement(int32_t direction) override;
	using ::javax::swing::JScrollBar::requestFocus;
	using ::javax::swing::JScrollBar::requestFocusInWindow;
	using ::javax::swing::JScrollBar::repaint;
	using ::javax::swing::JScrollBar::remove;
	using ::javax::swing::JScrollBar::list;
	virtual void setBlockIncrement(int32_t blockIncrement) override;
	using ::javax::swing::JScrollBar::setUI;
	virtual void setUnitIncrement(int32_t unitIncrement) override;
	virtual $String* toString() override;
	::javax::swing::JScrollPane* this$0 = nullptr;
	bool unitIncrementSet = false;
	bool blockIncrementSet = false;
};

	} // swing
} // javax

#endif // _javax_swing_JScrollPane$ScrollBar_h_
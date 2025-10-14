#ifndef _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_h_
#define _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_h_
//$ class SilenceOfDeprecatedMenuBar$DeprecatedFrame$1
//$ extends javax.swing.JRootPane

#include <javax/swing/JRootPane.h>

class SilenceOfDeprecatedMenuBar$DeprecatedFrame;
namespace javax {
	namespace swing {
		class JMenuBar;
	}
}

class SilenceOfDeprecatedMenuBar$DeprecatedFrame$1 : public ::javax::swing::JRootPane {
	$class(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, $NO_CLASS_INIT, ::javax::swing::JRootPane)
public:
	SilenceOfDeprecatedMenuBar$DeprecatedFrame$1();
	using ::javax::swing::JRootPane::contains;
	using ::javax::swing::JRootPane::enable;
	using ::javax::swing::JRootPane::getBounds;
	using ::javax::swing::JRootPane::getSize;
	using ::javax::swing::JRootPane::getLocation;
	using ::javax::swing::JRootPane::firePropertyChange;
	using ::javax::swing::JRootPane::add;
	using ::javax::swing::JRootPane::getMousePosition;
	void init$(::SilenceOfDeprecatedMenuBar$DeprecatedFrame* this$0);
	virtual ::javax::swing::JMenuBar* getMenuBar() override;
	using ::javax::swing::JRootPane::requestFocus;
	using ::javax::swing::JRootPane::requestFocusInWindow;
	using ::javax::swing::JRootPane::repaint;
	using ::javax::swing::JRootPane::remove;
	using ::javax::swing::JRootPane::list;
	virtual void setMenuBar(::javax::swing::JMenuBar* menu) override;
	using ::javax::swing::JRootPane::setUI;
	::SilenceOfDeprecatedMenuBar$DeprecatedFrame* this$0 = nullptr;
};

#endif // _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_h_
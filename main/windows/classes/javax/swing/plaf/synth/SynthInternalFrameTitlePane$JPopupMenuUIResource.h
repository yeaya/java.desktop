#ifndef _javax_swing_plaf_synth_SynthInternalFrameTitlePane$JPopupMenuUIResource_h_
#define _javax_swing_plaf_synth_SynthInternalFrameTitlePane$JPopupMenuUIResource_h_
//$ class javax.swing.plaf.synth.SynthInternalFrameTitlePane$JPopupMenuUIResource
//$ extends javax.swing.JPopupMenu
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JPopupMenu.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthInternalFrameTitlePane$JPopupMenuUIResource : public ::javax::swing::JPopupMenu, public ::javax::swing::plaf::UIResource {
	$class(SynthInternalFrameTitlePane$JPopupMenuUIResource, $NO_CLASS_INIT, ::javax::swing::JPopupMenu, ::javax::swing::plaf::UIResource)
public:
	SynthInternalFrameTitlePane$JPopupMenuUIResource();
	using ::javax::swing::JPopupMenu::add;
	using ::javax::swing::JPopupMenu::getComponent;
	using ::javax::swing::JPopupMenu::contains;
	using ::javax::swing::JPopupMenu::enable;
	using ::javax::swing::JPopupMenu::getBounds;
	using ::javax::swing::JPopupMenu::getSize;
	using ::javax::swing::JPopupMenu::getLocation;
	using ::javax::swing::JPopupMenu::firePropertyChange;
	using ::javax::swing::JPopupMenu::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	using ::javax::swing::JPopupMenu::setUI;
	using ::javax::swing::JPopupMenu::remove;
	using ::javax::swing::JPopupMenu::setLocation;
	using ::javax::swing::JPopupMenu::show;
	using ::javax::swing::JPopupMenu::processMouseEvent;
	using ::javax::swing::JPopupMenu::requestFocus;
	using ::javax::swing::JPopupMenu::requestFocusInWindow;
	using ::javax::swing::JPopupMenu::repaint;
	using ::javax::swing::JPopupMenu::list;
	virtual $String* toString() override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthInternalFrameTitlePane$JPopupMenuUIResource_h_
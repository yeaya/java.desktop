#ifndef _com_apple_laf_AquaComboBoxRenderer_h_
#define _com_apple_laf_AquaComboBoxRenderer_h_
//$ class com.apple.laf.AquaComboBoxRenderer
//$ extends com.apple.laf.AquaComboBoxRendererInternal
//$ implements javax.swing.plaf.UIResource

#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxRenderer : public ::com::apple::laf::AquaComboBoxRendererInternal, public ::javax::swing::plaf::UIResource {
	$class(AquaComboBoxRenderer, $NO_CLASS_INIT, ::com::apple::laf::AquaComboBoxRendererInternal, ::javax::swing::plaf::UIResource)
public:
	AquaComboBoxRenderer();
	using ::com::apple::laf::AquaComboBoxRendererInternal::getInsets;
	using ::com::apple::laf::AquaComboBoxRendererInternal::contains;
	using ::com::apple::laf::AquaComboBoxRendererInternal::enable;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getBounds;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getSize;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getLocation;
	using ::com::apple::laf::AquaComboBoxRendererInternal::firePropertyChange;
	using ::com::apple::laf::AquaComboBoxRendererInternal::add;
	using ::com::apple::laf::AquaComboBoxRendererInternal::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComboBox* comboBox);
	using ::com::apple::laf::AquaComboBoxRendererInternal::setUI;
	using ::com::apple::laf::AquaComboBoxRendererInternal::requestFocus;
	using ::com::apple::laf::AquaComboBoxRendererInternal::requestFocusInWindow;
	using ::com::apple::laf::AquaComboBoxRendererInternal::repaint;
	using ::com::apple::laf::AquaComboBoxRendererInternal::remove;
	using ::com::apple::laf::AquaComboBoxRendererInternal::list;
	virtual $String* toString() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxRenderer_h_
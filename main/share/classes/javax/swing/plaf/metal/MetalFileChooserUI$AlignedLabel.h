#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$AlignedLabel_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$AlignedLabel_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel
//$ extends javax.swing.JLabel

#include <java/lang/Array.h>
#include <javax/swing/JLabel.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFileChooserUI$AlignedLabel : public ::javax::swing::JLabel {
	$class(MetalFileChooserUI$AlignedLabel, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	MetalFileChooserUI$AlignedLabel();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0, $String* text);
	int32_t getMaxWidth();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	int32_t getSuperPreferredWidth();
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
	$Array<::javax::swing::plaf::metal::MetalFileChooserUI$AlignedLabel>* group = nullptr;
	int32_t maxWidth = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$AlignedLabel_h_
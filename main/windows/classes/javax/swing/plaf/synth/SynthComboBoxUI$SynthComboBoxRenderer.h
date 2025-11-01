#ifndef _javax_swing_plaf_synth_SynthComboBoxUI$SynthComboBoxRenderer_h_
#define _javax_swing_plaf_synth_SynthComboBoxUI$SynthComboBoxRenderer_h_
//$ class javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxRenderer
//$ extends javax.swing.JLabel
//$ implements javax.swing.ListCellRenderer,javax.swing.plaf.UIResource

#include <javax/swing/JLabel.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthComboBoxUI$SynthComboBoxRenderer : public ::javax::swing::JLabel, public ::javax::swing::ListCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(SynthComboBoxUI$SynthComboBoxRenderer, $NO_CLASS_INIT, ::javax::swing::JLabel, ::javax::swing::ListCellRenderer, ::javax::swing::plaf::UIResource)
public:
	SynthComboBoxUI$SynthComboBoxRenderer();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthComboBoxUI* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	virtual $String* getName() override;
	using ::javax::swing::JLabel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	virtual $String* toString() override;
	::javax::swing::plaf::synth::SynthComboBoxUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthComboBoxUI$SynthComboBoxRenderer_h_
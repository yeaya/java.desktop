#ifndef _javax_swing_plaf_synth_SynthListUI$SynthListCellRenderer_h_
#define _javax_swing_plaf_synth_SynthListUI$SynthListCellRenderer_h_
//$ class javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer
//$ extends javax.swing.DefaultListCellRenderer$UIResource

#include <javax/swing/DefaultListCellRenderer$UIResource.h>

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
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthListUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthListUI$SynthListCellRenderer : public ::javax::swing::DefaultListCellRenderer$UIResource {
	$class(SynthListUI$SynthListCellRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer$UIResource)
public:
	SynthListUI$SynthListCellRenderer();
	using ::javax::swing::DefaultListCellRenderer$UIResource::contains;
	using ::javax::swing::DefaultListCellRenderer$UIResource::enable;
	using ::javax::swing::DefaultListCellRenderer$UIResource::getBounds;
	using ::javax::swing::DefaultListCellRenderer$UIResource::getSize;
	using ::javax::swing::DefaultListCellRenderer$UIResource::getLocation;
	using ::javax::swing::DefaultListCellRenderer$UIResource::add;
	using ::javax::swing::DefaultListCellRenderer$UIResource::getMousePosition;
	void init$(::javax::swing::plaf::synth::SynthListUI* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	virtual $String* getName() override;
	using ::javax::swing::DefaultListCellRenderer$UIResource::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::DefaultListCellRenderer$UIResource::repaint;
	using ::javax::swing::DefaultListCellRenderer$UIResource::requestFocus;
	using ::javax::swing::DefaultListCellRenderer$UIResource::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer$UIResource::remove;
	virtual void setBorder(::javax::swing::border::Border* b) override;
	using ::javax::swing::DefaultListCellRenderer$UIResource::setUI;
	::javax::swing::plaf::synth::SynthListUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthListUI$SynthListCellRenderer_h_
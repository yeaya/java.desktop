#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$FilterComboBoxRenderer_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$FilterComboBoxRenderer_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxRenderer
//$ extends javax.swing.ListCellRenderer

#include <javax/swing/ListCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
		}
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUIImpl$FilterComboBoxRenderer : public ::javax::swing::ListCellRenderer {
	$class(SynthFileChooserUIImpl$FilterComboBoxRenderer, 0, ::javax::swing::ListCellRenderer)
public:
	SynthFileChooserUIImpl$FilterComboBoxRenderer();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0, ::javax::swing::ListCellRenderer* delegate);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, ::javax::swing::filechooser::FileFilter* value, int32_t index, bool isSelected, bool cellHasFocus);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
	static bool $assertionsDisabled;
	::javax::swing::ListCellRenderer* delegate = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$FilterComboBoxRenderer_h_
#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxRenderer
//$ extends javax.swing.ListCellRenderer

#include <javax/swing/ListCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl;
				class SynthFileChooserUIImpl$IndentIcon;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUIImpl$DirectoryComboBoxRenderer : public ::javax::swing::ListCellRenderer {
	$class(SynthFileChooserUIImpl$DirectoryComboBoxRenderer, 0, ::javax::swing::ListCellRenderer)
public:
	SynthFileChooserUIImpl$DirectoryComboBoxRenderer();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0, ::javax::swing::ListCellRenderer* delegate);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, ::java::io::File* value, int32_t index, bool isSelected, bool cellHasFocus);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
	static bool $assertionsDisabled;
	::javax::swing::ListCellRenderer* delegate = nullptr;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl$IndentIcon* ii = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxRenderer_h_
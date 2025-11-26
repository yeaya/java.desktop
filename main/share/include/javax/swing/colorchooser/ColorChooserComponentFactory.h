#ifndef _javax_swing_colorchooser_ColorChooserComponentFactory_h_
#define _javax_swing_colorchooser_ColorChooserComponentFactory_h_
//$ class javax.swing.colorchooser.ColorChooserComponentFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class AbstractColorChooserPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class $import ColorChooserComponentFactory : public ::java::lang::Object {
	$class(ColorChooserComponentFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ColorChooserComponentFactory();
	void init$();
	static $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>* getDefaultChooserPanels();
	static ::javax::swing::JComponent* getPreviewPanel();
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorChooserComponentFactory_h_
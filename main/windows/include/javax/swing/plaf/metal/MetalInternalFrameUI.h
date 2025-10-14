#ifndef _javax_swing_plaf_metal_MetalInternalFrameUI_h_
#define _javax_swing_plaf_metal_MetalInternalFrameUI_h_
//$ class javax.swing.plaf.metal.MetalInternalFrameUI
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI

#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

#pragma push_macro("FRAME_TYPE")
#undef FRAME_TYPE
#pragma push_macro("IS_PALETTE")
#undef IS_PALETTE
#pragma push_macro("IS_PALETTE_KEY")
#undef IS_PALETTE_KEY
#pragma push_macro("NORMAL_FRAME")
#undef NORMAL_FRAME
#pragma push_macro("OPTION_DIALOG")
#undef OPTION_DIALOG
#pragma push_macro("PALETTE_FRAME")
#undef PALETTE_FRAME

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
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
		namespace event {
			class MouseInputAdapter;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalInternalFrameUI : public ::javax::swing::plaf::basic::BasicInternalFrameUI {
	$class(MetalInternalFrameUI, 0, ::javax::swing::plaf::basic::BasicInternalFrameUI)
public:
	MetalInternalFrameUI();
	void init$(::javax::swing::JInternalFrame* b);
	static ::javax::swing::JInternalFrame* access$000(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	static ::javax::swing::plaf::basic::BasicInternalFrameTitlePane* access$100(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$200(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	static ::javax::swing::plaf::basic::BasicInternalFrameTitlePane* access$300(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$400(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$500(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$600(::javax::swing::plaf::metal::MetalInternalFrameUI* x0);
	virtual ::javax::swing::event::MouseInputAdapter* createBorderListener(::javax::swing::JInternalFrame* w) override;
	virtual ::javax::swing::JComponent* createNorthPane(::javax::swing::JInternalFrame* w) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	void setFrameType($String* frameType);
	virtual void setPalette(bool isPalette);
	void stripContentBorder(Object$* c);
	virtual void uninstallComponents() override;
	virtual void uninstallKeyboardActions() override;
	virtual void uninstallListeners() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::java::beans::PropertyChangeListener* metalPropertyChangeListener;
	static ::javax::swing::border::Border* handyEmptyBorder;
	static $String* IS_PALETTE;
	static $String* IS_PALETTE_KEY;
	static $String* FRAME_TYPE;
	static $String* NORMAL_FRAME;
	static $String* PALETTE_FRAME;
	static $String* OPTION_DIALOG;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FRAME_TYPE")
#pragma pop_macro("IS_PALETTE")
#pragma pop_macro("IS_PALETTE_KEY")
#pragma pop_macro("NORMAL_FRAME")
#pragma pop_macro("OPTION_DIALOG")
#pragma pop_macro("PALETTE_FRAME")

#endif // _javax_swing_plaf_metal_MetalInternalFrameUI_h_
#ifndef _com_apple_laf_AquaInternalFrameUI_h_
#define _com_apple_laf_AquaInternalFrameUI_h_
//$ class com.apple.laf.AquaInternalFrameUI
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI
//$ implements javax.swing.SwingConstants

#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

#pragma push_macro("FRAME_TYPE")
#undef FRAME_TYPE
#pragma push_macro("IS_PALETTE_PROPERTY")
#undef IS_PALETTE_PROPERTY
#pragma push_macro("NORMAL_FRAME")
#undef NORMAL_FRAME
#pragma push_macro("OPTION_DIALOG")
#undef OPTION_DIALOG
#pragma push_macro("PALETTE_FRAME")
#undef PALETTE_FRAME
#pragma push_macro("RESIZE_ICON")
#undef RESIZE_ICON

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameBorder;
			class AquaInternalFrameUI$InternalFrameShadow;
			class AquaInternalFrameUI$ResizeBox;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class ActionMap;
		class DesktopManager;
		class Icon;
		class JComponent;
		class JInternalFrame;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI : public ::javax::swing::plaf::basic::BasicInternalFrameUI, public ::javax::swing::SwingConstants {
	$class(AquaInternalFrameUI, 0, ::javax::swing::plaf::basic::BasicInternalFrameUI, ::javax::swing::SwingConstants)
public:
	AquaInternalFrameUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame* b);
	static ::javax::swing::JInternalFrame* access$000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$1200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$1700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$1900(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$2200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$2400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$2900(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$3500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$3900(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$4900(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$5900(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$6500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$6900(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$700(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$7000(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$7100(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$7200(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$7300(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$7400(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$7500(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::DesktopManager* access$7600(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$800(::com::apple::laf::AquaInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$900(::com::apple::laf::AquaInternalFrameUI* x0);
	virtual ::javax::swing::ActionMap* createActionMap();
	virtual ::javax::swing::event::MouseInputAdapter* createBorderListener(::javax::swing::JInternalFrame* w) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual void deinstallMouseHandlers(::javax::swing::JComponent* c) override;
	static ::javax::swing::Icon* exportCloseIcon();
	static ::javax::swing::Icon* exportMinimizeIcon();
	static ::javax::swing::Icon* exportZoomIcon();
	virtual bool getMouseOverPressedButton();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* x) override;
	virtual bool getRollover();
	virtual int32_t getWhichButtonPressed();
	virtual void installComponents() override;
	virtual void installDefaults() override;
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void installMouseHandlers(::javax::swing::JComponent* c) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isDocumentEdited();
	virtual void replacePane(::javax::swing::JComponent* currentPane, ::javax::swing::JComponent* newPane) override;
	virtual void setDocumentEdited(bool flag);
	virtual void setFrameType($String* frameType);
	virtual void setNorthPane(::javax::swing::JComponent* c) override;
	virtual void setPalette(bool isPalette);
	virtual void setSouthPane(::javax::swing::JComponent* c) override;
	virtual $String* toString() override;
	virtual void uninstallComponents() override;
	virtual void uninstallKeyboardActions() override;
	virtual void uninstallListeners() override;
	static void updateComponentTreeUIActivation(::java::awt::Component* c, Object$* active);
	static $String* IS_PALETTE_PROPERTY;
	static $String* FRAME_TYPE;
	static $String* NORMAL_FRAME;
	static $String* PALETTE_FRAME;
	static $String* OPTION_DIALOG;
	::java::beans::PropertyChangeListener* fPropertyListener = nullptr;
	::java::awt::Color* fSelectedTextColor = nullptr;
	::java::awt::Color* fNotSelectedTextColor = nullptr;
	::com::apple::laf::AquaInternalFrameBorder* fAquaBorder = nullptr;
	::com::apple::laf::AquaInternalFrameUI$ResizeBox* resizeBox = nullptr;
	bool fMouseOverPressedButton = false;
	int32_t fWhichButtonPressed = 0;
	bool fRollover = false;
	bool fDocumentEdited = false;
	bool fIsPallet = false;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* closeIcon;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* minimizeIcon;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* zoomIcon;
	static ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow* documentWindowShadow;
	static ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow* paletteWindowShadow;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* RESIZE_ICON;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("FRAME_TYPE")
#pragma pop_macro("IS_PALETTE_PROPERTY")
#pragma pop_macro("NORMAL_FRAME")
#pragma pop_macro("OPTION_DIALOG")
#pragma pop_macro("PALETTE_FRAME")
#pragma pop_macro("RESIZE_ICON")

#endif // _com_apple_laf_AquaInternalFrameUI_h_
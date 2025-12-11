#ifndef _com_apple_laf_AquaButtonBorder_h_
#define _com_apple_laf_AquaButtonBorder_h_
//$ class com.apple.laf.AquaButtonBorder
//$ extends com.apple.laf.AquaBorder

#include <com/apple/laf/AquaBorder.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class ButtonModel;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonBorder : public ::com::apple::laf::AquaBorder {
	$class(AquaButtonBorder, 0, ::com::apple::laf::AquaBorder)
public:
	AquaButtonBorder();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	void init$(::com::apple::laf::AquaButtonBorder* other);
	virtual void alterPreferredSize(::java::awt::Dimension* d);
	virtual void doButtonPaint(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	static ::com::apple::laf::AquaButtonBorder* getBevelButtonBorder();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::apple::laf::JRSUIConstants$State* getButtonState(::javax::swing::AbstractButton* b, ::javax::swing::ButtonModel* model);
	virtual ::java::awt::Insets* getContentInsets(::javax::swing::AbstractButton* b, int32_t w, int32_t h);
	static ::com::apple::laf::AquaButtonBorder* getDynamicButtonBorder();
	static ::com::apple::laf::AquaButtonBorder* getToggleButtonBorder();
	static ::javax::swing::border::Border* getToolBarButtonBorder();
	virtual bool hasSmallerInsets(::javax::swing::JComponent* c);
	virtual bool isBorderOpaque() override;
	virtual bool isSelectionPressing();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void paintButton(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* fDynamic;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* fToggle;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* fToolBar;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* fBevel;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonBorder_h_
#ifndef _com_apple_laf_AquaTableHeaderBorder_h_
#define _com_apple_laf_AquaTableHeaderBorder_h_
//$ class com.apple.laf.AquaTableHeaderBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

#pragma push_macro("SORT_ASCENDING")
#undef SORT_ASCENDING
#pragma push_macro("SORT_DECENDING")
#undef SORT_DECENDING
#pragma push_macro("SORT_NONE")
#undef SORT_NONE

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
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

class AquaTableHeaderBorder : public ::javax::swing::border::AbstractBorder {
	$class(AquaTableHeaderBorder, 0, ::javax::swing::border::AbstractBorder)
public:
	AquaTableHeaderBorder();
	void init$();
	static ::javax::swing::border::Border* getAlternateBorder();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	static ::com::apple::laf::AquaTableHeaderBorder* getListHeaderBorder();
	virtual ::apple::laf::JRSUIConstants$State* getState(::javax::swing::JComponent* jc);
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setHorizontalShift(int32_t inShift);
	virtual void setSelected(bool inSelected);
	virtual void setSortOrder(int32_t inSortOrder);
	static const int32_t SORT_NONE = 0;
	static const int32_t SORT_ASCENDING = 1;
	static const int32_t SORT_DECENDING = (-1);
	::java::awt::Insets* editorBorderInsets = nullptr;
	::com::apple::laf::AquaPainter* painter = nullptr;
	bool doPaint = false;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* alternateBorder;
	bool selected = false;
	int32_t fHorizontalShift = 0;
	int32_t sortOrder = 0;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("SORT_ASCENDING")
#pragma pop_macro("SORT_DECENDING")
#pragma pop_macro("SORT_NONE")

#endif // _com_apple_laf_AquaTableHeaderBorder_h_
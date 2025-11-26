#ifndef _javax_swing_plaf_synth_SynthMenuItemLayoutHelper_h_
#define _javax_swing_plaf_synth_SynthMenuItemLayoutHelper_h_
//$ class javax.swing.plaf.synth.SynthMenuItemLayoutHelper
//$ extends sun.swing.MenuItemLayoutHelper

#include <sun/swing/MenuItemLayoutHelper.h>

#pragma push_macro("LTR_ALIGNMENT_1")
#undef LTR_ALIGNMENT_1
#pragma push_macro("LTR_ALIGNMENT_2")
#undef LTR_ALIGNMENT_2
#pragma push_macro("MAX_ACC_OR_ARROW_WIDTH")
#undef MAX_ACC_OR_ARROW_WIDTH
#pragma push_macro("RTL_ALIGNMENT_1")
#undef RTL_ALIGNMENT_1
#pragma push_macro("RTL_ALIGNMENT_2")
#undef RTL_ALIGNMENT_2

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JMenuItem;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
				class SynthGraphicsUtils;
				class SynthStyle;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class MenuItemLayoutHelper$ColumnAlignment;
		class MenuItemLayoutHelper$LayoutResult;
		class StringUIClientPropertyKey;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthMenuItemLayoutHelper : public ::sun::swing::MenuItemLayoutHelper {
	$class(SynthMenuItemLayoutHelper, 0, ::sun::swing::MenuItemLayoutHelper)
public:
	SynthMenuItemLayoutHelper();
	void init$(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::SynthContext* accContext, ::javax::swing::JMenuItem* mi, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, ::java::awt::Rectangle* viewRect, int32_t gap, $String* accDelimiter, bool isLeftToRight, bool useCheckAndArrow, $String* propertyPrefix);
	virtual bool alignAcceleratorText();
	virtual void calcMaxWidths() override;
	virtual void calcWidthsAndHeights() override;
	virtual ::javax::swing::plaf::synth::SynthContext* getAccContext();
	virtual ::javax::swing::plaf::synth::SynthGraphicsUtils* getAccGraphicsUtils();
	virtual ::javax::swing::plaf::synth::SynthStyle* getAccStyle();
	bool getAlignAcceleratorText($String* propertyPrefix);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext();
	virtual ::javax::swing::plaf::synth::SynthGraphicsUtils* getGraphicsUtils();
	virtual ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* getLTRColumnAlignment() override;
	virtual int32_t getMaxAccOrArrowWidth();
	virtual ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* getRTLColumnAlignment() override;
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle();
	virtual void layoutIconAndTextInLabelRect(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr) override;
	virtual void prepareForLayout(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr) override;
	static ::sun::swing::StringUIClientPropertyKey* MAX_ACC_OR_ARROW_WIDTH;
	static ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* LTR_ALIGNMENT_1;
	static ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* LTR_ALIGNMENT_2;
	static ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* RTL_ALIGNMENT_1;
	static ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* RTL_ALIGNMENT_2;
	::javax::swing::plaf::synth::SynthContext* context = nullptr;
	::javax::swing::plaf::synth::SynthContext* accContext = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* accStyle = nullptr;
	::javax::swing::plaf::synth::SynthGraphicsUtils* gu = nullptr;
	::javax::swing::plaf::synth::SynthGraphicsUtils* accGu = nullptr;
	bool alignAcceleratorText$ = false;
	int32_t maxAccOrArrowWidth = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("LTR_ALIGNMENT_1")
#pragma pop_macro("LTR_ALIGNMENT_2")
#pragma pop_macro("MAX_ACC_OR_ARROW_WIDTH")
#pragma pop_macro("RTL_ALIGNMENT_1")
#pragma pop_macro("RTL_ALIGNMENT_2")

#endif // _javax_swing_plaf_synth_SynthMenuItemLayoutHelper_h_
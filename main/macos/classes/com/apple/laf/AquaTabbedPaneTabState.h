#ifndef _com_apple_laf_AquaTabbedPaneTabState_h_
#define _com_apple_laf_AquaTabbedPaneTabState_h_
//$ class com.apple.laf.AquaTabbedPaneTabState
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FIXED_SCROLL_TAB_LENGTH")
#undef FIXED_SCROLL_TAB_LENGTH

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Rectangle;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneTabState : public ::java::lang::Object {
	$class(AquaTabbedPaneTabState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaTabbedPaneTabState();
	void init$(::com::apple::laf::AquaTabbedPaneUI* pane);
	void addToBeginning(int32_t idToAdd, int32_t length);
	void addToEnd(int32_t idToAdd, int32_t length);
	virtual void alignRectsRunFor($Array<::java::awt::Rectangle>* rects, ::java::awt::Dimension* tabPaneSize, int32_t tabPlacement, bool isRightToLeft);
	void centerHorizontalRun($Array<::java::awt::Rectangle>* rects, ::java::awt::Dimension* size, bool isRightToLeft);
	void centerVerticalRun($Array<::java::awt::Rectangle>* rects, ::java::awt::Dimension* size);
	virtual int32_t getIndex(int32_t i);
	virtual ::java::awt::Rectangle* getLeftScrollTabRect();
	virtual ::java::awt::Rectangle* getRightScrollTabRect();
	virtual int32_t getTotal();
	virtual void init(int32_t tabCount);
	virtual bool isAfter(int32_t i);
	virtual bool isBefore(int32_t i);
	virtual bool needsLeftScrollTab();
	virtual bool needsRightScrollTab();
	virtual bool needsScrollTabs();
	virtual void relayoutForScrolling($Array<::java::awt::Rectangle>* rects, int32_t startX, int32_t startY, int32_t returnAt, int32_t selectedIndex, bool verticalTabRuns, int32_t tabCount, bool isLeftToRight);
	virtual void setNeedsScrollers(bool needsScrollers);
	void stretchScrollingHorizontalRun($Array<::java::awt::Rectangle>* rects, ::java::awt::Dimension* size, bool isRightToLeft);
	void stretchScrollingVerticalRun($Array<::java::awt::Rectangle>* rects, ::java::awt::Dimension* size);
	static const int32_t FIXED_SCROLL_TAB_LENGTH = 27;
	::java::awt::Rectangle* leftScrollTabRect = nullptr;
	::java::awt::Rectangle* rightScrollTabRect = nullptr;
	int32_t numberOfVisibleTabs = 0;
	$ints* visibleTabList = nullptr;
	int32_t lastLeftmostTab = 0;
	int32_t lastReturnAt = 0;
	bool needsScrollers = false;
	bool hasMoreLeftTabs = false;
	bool hasMoreRightTabs = false;
	::com::apple::laf::AquaTabbedPaneUI* pane = nullptr;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("FIXED_SCROLL_TAB_LENGTH")

#endif // _com_apple_laf_AquaTabbedPaneTabState_h_
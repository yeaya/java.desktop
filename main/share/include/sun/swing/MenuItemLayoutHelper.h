#ifndef _sun_swing_MenuItemLayoutHelper_h_
#define _sun_swing_MenuItemLayoutHelper_h_
//$ class sun.swing.MenuItemLayoutHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_ACC_WIDTH")
#undef MAX_ACC_WIDTH
#pragma push_macro("MAX_ARROW_WIDTH")
#undef MAX_ARROW_WIDTH
#pragma push_macro("MAX_CHECK_WIDTH")
#undef MAX_CHECK_WIDTH
#pragma push_macro("MAX_ICON_WIDTH")
#undef MAX_ICON_WIDTH
#pragma push_macro("MAX_LABEL_WIDTH")
#undef MAX_LABEL_WIDTH
#pragma push_macro("MAX_TEXT_WIDTH")
#undef MAX_TEXT_WIDTH

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class FontMetrics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JMenuItem;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class View;
		}
	}
}
namespace sun {
	namespace swing {
		class MenuItemLayoutHelper$ColumnAlignment;
		class MenuItemLayoutHelper$LayoutResult;
		class MenuItemLayoutHelper$RectSize;
		class StringUIClientPropertyKey;
	}
}

namespace sun {
	namespace swing {

class $import MenuItemLayoutHelper : public ::java::lang::Object {
	$class(MenuItemLayoutHelper, 0, ::java::lang::Object)
public:
	MenuItemLayoutHelper();
	void init$();
	void init$(::javax::swing::JMenuItem* mi, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, ::java::awt::Rectangle* viewRect, int32_t gap, $String* accDelimiter, bool isLeftToRight, ::java::awt::Font* font, ::java::awt::Font* accFont, bool useCheckAndArrow, $String* propertyPrefix);
	static void addMaxWidth(::sun::swing::MenuItemLayoutHelper$RectSize* size, int32_t gap, ::java::awt::Dimension* result);
	static void addWidth(int32_t width, int32_t gap, ::java::awt::Dimension* result);
	void alignAccCheckAndArrowVertically(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	void alignRect(::java::awt::Rectangle* rect, int32_t alignment, int32_t origWidth);
	void alignRects(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* alignment);
	void calcExtraWidths();
	void calcLabelYPosition(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	void calcMaxTextOffset(::java::awt::Rectangle* viewRect);
	virtual int32_t calcMaxValue(Object$* propertyName, int32_t value);
	virtual void calcMaxWidth(::sun::swing::MenuItemLayoutHelper$RectSize* rs, Object$* key);
	virtual void calcMaxWidths();
	void calcTextAndIconYPositions(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	virtual void calcWidthsAndHeights();
	void calcXPositionsLTR(int32_t startXPos, int32_t leadingGap, int32_t gap, $Array<::java::awt::Rectangle>* rects);
	void calcXPositionsRTL(int32_t startXPos, int32_t leadingGap, int32_t gap, $Array<::java::awt::Rectangle>* rects);
	static void clearUsedClientProperties(::javax::swing::JComponent* c);
	static void clearUsedParentClientProperties(::javax::swing::JMenuItem* menuItem);
	::sun::swing::MenuItemLayoutHelper$LayoutResult* createLayoutResult();
	static ::java::awt::Rectangle* createMaxRect();
	void doLTRColumnLayout(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* alignment);
	void doLTRComplexLayout(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* alignment);
	void doRTLColumnLayout(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* alignment);
	void doRTLComplexLayout(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* alignment);
	void fixVerticalAlignment(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::java::awt::Rectangle* r);
	virtual ::java::awt::Font* getAccFont();
	virtual ::java::awt::FontMetrics* getAccFontMetrics();
	virtual ::sun::swing::MenuItemLayoutHelper$RectSize* getAccSize();
	$String* getAccText($String* acceleratorDelimiter);
	virtual $String* getAccText();
	int32_t getAfterCheckIconGap($String* propertyPrefix);
	virtual int32_t getAfterCheckIconGap();
	virtual ::javax::swing::Icon* getArrowIcon();
	virtual ::sun::swing::MenuItemLayoutHelper$RectSize* getArrowSize();
	virtual ::javax::swing::Icon* getCheckIcon();
	int32_t getCheckOffset($String* propertyPrefix);
	virtual ::sun::swing::MenuItemLayoutHelper$RectSize* getCheckSize();
	virtual ::java::awt::Font* getFont();
	virtual ::java::awt::FontMetrics* getFontMetrics();
	virtual int32_t getGap();
	virtual int32_t getHorizontalAlignment();
	virtual int32_t getHorizontalTextPosition();
	virtual ::javax::swing::text::View* getHtmlView();
	::javax::swing::Icon* getIcon($String* propertyPrefix);
	virtual ::javax::swing::Icon* getIcon();
	virtual ::sun::swing::MenuItemLayoutHelper$RectSize* getIconSize();
	virtual ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* getLTRColumnAlignment();
	virtual ::sun::swing::MenuItemLayoutHelper$RectSize* getLabelSize();
	int32_t getLeadingGap($String* propertyPrefix);
	virtual int32_t getLeadingGap();
	int32_t getLeftExtraWidth($String* str);
	virtual int32_t getLeftTextExtraWidth();
	virtual ::javax::swing::JMenuItem* getMenuItem();
	static ::javax::swing::JComponent* getMenuItemParent(::javax::swing::JMenuItem* menuItem);
	virtual ::javax::swing::JComponent* getMenuItemParent();
	int32_t getMinTextOffset($String* propertyPrefix);
	virtual int32_t getMinTextOffset();
	virtual int32_t getParentIntProperty(Object$* propertyName);
	virtual ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* getRTLColumnAlignment();
	virtual $String* getText();
	virtual ::sun::swing::MenuItemLayoutHelper$RectSize* getTextSize();
	virtual int32_t getVerticalAlignment();
	virtual int32_t getVerticalTextPosition();
	virtual ::java::awt::Rectangle* getViewRect();
	static bool isColumnLayout(bool isLeftToRight, ::javax::swing::JMenuItem* mi);
	static bool isColumnLayout(bool isLeftToRight, int32_t horizontalAlignment, int32_t horizontalTextPosition, int32_t verticalTextPosition);
	virtual bool isColumnLayout();
	virtual bool isLeftToRight();
	virtual bool isTopLevelMenu();
	virtual void layoutIconAndTextInLabelRect(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	virtual ::sun::swing::MenuItemLayoutHelper$LayoutResult* layoutMenuItem();
	static int32_t max($ints* values);
	virtual void prepareForLayout(::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	virtual void reset(::javax::swing::JMenuItem* mi, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, ::java::awt::Rectangle* viewRect, int32_t gap, $String* accDelimiter, bool isLeftToRight, ::java::awt::Font* font, ::java::awt::Font* accFont, bool useCheckAndArrow, $String* propertyPrefix);
	virtual void setAccFont(::java::awt::Font* accFont);
	virtual void setAccFontMetrics(::java::awt::FontMetrics* accFm);
	virtual void setAccSize(::sun::swing::MenuItemLayoutHelper$RectSize* accSize);
	virtual void setAccText($String* accText);
	virtual void setAfterCheckIconGap(int32_t afterCheckIconGap);
	virtual void setArrowIcon(::javax::swing::Icon* arrowIcon);
	virtual void setArrowSize(::sun::swing::MenuItemLayoutHelper$RectSize* arrowSize);
	virtual void setCheckIcon(::javax::swing::Icon* checkIcon);
	virtual void setCheckSize(::sun::swing::MenuItemLayoutHelper$RectSize* checkSize);
	virtual void setColumnLayout(bool columnLayout);
	virtual void setFont(::java::awt::Font* font);
	virtual void setFontMetrics(::java::awt::FontMetrics* fm);
	virtual void setGap(int32_t gap);
	virtual void setHorizontalAlignment(int32_t horizontalAlignment);
	virtual void setHorizontalTextPosition(int32_t horizontalTextPosition);
	virtual void setHtmlView(::javax::swing::text::View* htmlView);
	virtual void setIcon(::javax::swing::Icon* icon);
	virtual void setIconSize(::sun::swing::MenuItemLayoutHelper$RectSize* iconSize);
	virtual void setLabelSize(::sun::swing::MenuItemLayoutHelper$RectSize* labelSize);
	virtual void setLeadingGap(int32_t leadingGap);
	virtual void setLeftToRight(bool leftToRight);
	virtual void setMenuItem(::javax::swing::JMenuItem* mi);
	virtual void setMenuItemParent(::javax::swing::JComponent* miParent);
	virtual void setMinTextOffset(int32_t minTextOffset);
	void setOriginalWidths();
	virtual void setText($String* text);
	virtual void setTextSize(::sun::swing::MenuItemLayoutHelper$RectSize* textSize);
	virtual void setTopLevelMenu(bool topLevelMenu);
	virtual void setUseCheckAndArrow(bool useCheckAndArrow);
	virtual void setVerticalAlignment(int32_t verticalAlignment);
	virtual void setVerticalTextPosition(int32_t verticalTextPosition);
	virtual void setViewRect(::java::awt::Rectangle* viewRect);
	virtual bool useCheckAndArrow();
	static bool useCheckAndArrow(::javax::swing::JMenuItem* menuItem);
	static bool $assertionsDisabled;
	static ::sun::swing::StringUIClientPropertyKey* MAX_ARROW_WIDTH;
	static ::sun::swing::StringUIClientPropertyKey* MAX_CHECK_WIDTH;
	static ::sun::swing::StringUIClientPropertyKey* MAX_ICON_WIDTH;
	static ::sun::swing::StringUIClientPropertyKey* MAX_TEXT_WIDTH;
	static ::sun::swing::StringUIClientPropertyKey* MAX_ACC_WIDTH;
	static ::sun::swing::StringUIClientPropertyKey* MAX_LABEL_WIDTH;
	::javax::swing::JMenuItem* mi = nullptr;
	::javax::swing::JComponent* miParent = nullptr;
	::java::awt::Font* font = nullptr;
	::java::awt::Font* accFont = nullptr;
	::java::awt::FontMetrics* fm = nullptr;
	::java::awt::FontMetrics* accFm = nullptr;
	::javax::swing::Icon* icon = nullptr;
	::javax::swing::Icon* checkIcon = nullptr;
	::javax::swing::Icon* arrowIcon = nullptr;
	$String* text = nullptr;
	$String* accText = nullptr;
	bool isColumnLayout$ = false;
	bool useCheckAndArrow$ = false;
	bool isLeftToRight$ = false;
	bool isTopLevelMenu$ = false;
	::javax::swing::text::View* htmlView = nullptr;
	int32_t verticalAlignment = 0;
	int32_t horizontalAlignment = 0;
	int32_t verticalTextPosition = 0;
	int32_t horizontalTextPosition = 0;
	int32_t gap = 0;
	int32_t leadingGap = 0;
	int32_t afterCheckIconGap = 0;
	int32_t minTextOffset = 0;
	int32_t leftTextExtraWidth = 0;
	::java::awt::Rectangle* viewRect = nullptr;
	::sun::swing::MenuItemLayoutHelper$RectSize* iconSize = nullptr;
	::sun::swing::MenuItemLayoutHelper$RectSize* textSize = nullptr;
	::sun::swing::MenuItemLayoutHelper$RectSize* accSize = nullptr;
	::sun::swing::MenuItemLayoutHelper$RectSize* checkSize = nullptr;
	::sun::swing::MenuItemLayoutHelper$RectSize* arrowSize = nullptr;
	::sun::swing::MenuItemLayoutHelper$RectSize* labelSize = nullptr;
};

	} // swing
} // sun

#pragma pop_macro("MAX_ACC_WIDTH")
#pragma pop_macro("MAX_ARROW_WIDTH")
#pragma pop_macro("MAX_CHECK_WIDTH")
#pragma pop_macro("MAX_ICON_WIDTH")
#pragma pop_macro("MAX_LABEL_WIDTH")
#pragma pop_macro("MAX_TEXT_WIDTH")

#endif // _sun_swing_MenuItemLayoutHelper_h_
#ifndef _com_apple_laf_AquaInternalFrameBorder_h_
#define _com_apple_laf_AquaInternalFrameBorder_h_
//$ class com.apple.laf.AquaInternalFrameBorder
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
		class JRSUIConstants$Widget;
		class JRSUIConstants$WindowType;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameBorderMetrics;
			class AquaPainter;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameBorder : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(AquaInternalFrameBorder, 0, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	AquaInternalFrameBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::apple::laf::JRSUIConstants$WindowType* kind);
	static ::com::apple::laf::AquaInternalFrameBorder* dialog();
	virtual void doButtonAction(::javax::swing::JInternalFrame* frame, int32_t whichButton);
	virtual void drawAllWidgets(::java::awt::Graphics* g, ::javax::swing::JInternalFrame* frame);
	virtual void drawWindowTitle(::java::awt::Graphics* g, ::javax::swing::JInternalFrame* frame, int32_t inX, int32_t inY, int32_t inW, int32_t inH);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual int32_t getIconHeight(::javax::swing::JInternalFrame* frame);
	virtual int32_t getIconWidth(::javax::swing::JInternalFrame* frame);
	static ::apple::laf::JRSUIConstants$State* getState(bool pressed, bool rollover, bool active, bool enabled);
	virtual int32_t getTitleHeight();
	virtual int32_t getWhichButtonHit(::javax::swing::JInternalFrame* frame, int32_t x, int32_t y);
	static ::apple::laf::JRSUIConstants$Widget* getWidget(::javax::swing::JInternalFrame* frame, int32_t buttonType);
	virtual bool getWithinRolloverArea(::java::awt::Insets* i, int32_t x, int32_t y);
	virtual bool isBorderOpaque() override;
	virtual bool isDirty(::javax::swing::JInternalFrame* frame);
	virtual bool isInsideYButtonArea(::java::awt::Insets* i, int32_t y);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintBorder(::javax::swing::JInternalFrame* frame, ::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintButton(::java::awt::Graphics* g, ::javax::swing::JInternalFrame* frame, int32_t x, int32_t y, int32_t buttonType, int32_t buttonPressedIndex, bool overButton, bool enabled, bool active, bool anyRollover, bool dirty);
	virtual void paintTitleContents(::java::awt::Graphics* g, ::javax::swing::JInternalFrame* frame, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintTitleIcon(::java::awt::Graphics* g, ::javax::swing::JInternalFrame* frame, int32_t x, int32_t y);
	virtual void repaintButtonArea(::javax::swing::JInternalFrame* frame);
	virtual void setColors(::java::awt::Color* inSelectedTextColor, ::java::awt::Color* inNotSelectedTextColor);
	virtual void setInBounds(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setMetrics(::javax::swing::JInternalFrame* frame, ::java::awt::Component* window);
	virtual $String* toString() override;
	static ::com::apple::laf::AquaInternalFrameBorder* utility();
	static ::com::apple::laf::AquaInternalFrameBorder* window();
	static const int32_t kCloseButton = 0;
	static const int32_t kIconButton = 1;
	static const int32_t kGrowButton = 2;
	static const int32_t sMaxIconWidth = 15;
	static const int32_t sMaxIconHeight = sMaxIconWidth;
	static const int32_t sAfterButtonPad = 11;
	static const int32_t sAfterIconPad = 5;
	static const int32_t sRightSideTitleClip = 0;
	static const int32_t kContentTester = 100;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* documentWindowFrame;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* utilityWindowFrame;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* dialogWindowFrame;
	::com::apple::laf::AquaInternalFrameBorderMetrics* metrics = nullptr;
	int32_t fThisButtonSpan = 0;
	int32_t fThisLeftSideTotal = 0;
	bool fIsUtility = false;
	::apple::laf::JRSUIConstants$WindowType* fWindowKind = nullptr;
	::java::awt::Insets* fBorderInsets = nullptr;
	::java::awt::Color* selectedTextColor = nullptr;
	::java::awt::Color* notSelectedTextColor = nullptr;
	::java::awt::Rectangle* fInBounds = nullptr;
	::com::apple::laf::AquaPainter* titleBarPainter = nullptr;
	::com::apple::laf::AquaPainter* widgetPainter = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameBorder_h_
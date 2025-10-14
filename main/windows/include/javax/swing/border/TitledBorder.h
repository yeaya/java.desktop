#ifndef _javax_swing_border_TitledBorder_h_
#define _javax_swing_border_TitledBorder_h_
//$ class javax.swing.border.TitledBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

#pragma push_macro("ABOVE_BOTTOM")
#undef ABOVE_BOTTOM
#pragma push_macro("ABOVE_TOP")
#undef ABOVE_TOP
#pragma push_macro("BELOW_BOTTOM")
#undef BELOW_BOTTOM
#pragma push_macro("BELOW_TOP")
#undef BELOW_TOP
#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("DEFAULT_JUSTIFICATION")
#undef DEFAULT_JUSTIFICATION
#pragma push_macro("DEFAULT_POSITION")
#undef DEFAULT_POSITION
#pragma push_macro("EDGE_SPACING")
#undef EDGE_SPACING
#pragma push_macro("LEADING")
#undef LEADING
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("TEXT_INSET_H")
#undef TEXT_INSET_H
#pragma push_macro("TEXT_SPACING")
#undef TEXT_SPACING
#pragma push_macro("TOP")
#undef TOP
#pragma push_macro("TRAILING")
#undef TRAILING

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Font;
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class JLabel;
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
		namespace border {

class $import TitledBorder : public ::javax::swing::border::AbstractBorder {
	$class(TitledBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	TitledBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$($String* title);
	void init$(::javax::swing::border::Border* border);
	void init$(::javax::swing::border::Border* border, $String* title);
	void init$(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition);
	void init$(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, ::java::awt::Font* titleFont);
	void init$(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, ::java::awt::Font* titleFont, ::java::awt::Color* titleColor);
	virtual int32_t getBaseline(::java::awt::Component* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::java::awt::Component* c) override;
	virtual ::javax::swing::border::Border* getBorder();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	static ::java::awt::Insets* getBorderInsets(::javax::swing::border::Border* border, ::java::awt::Component* c, ::java::awt::Insets* insets);
	::java::awt::Color* getColor(::java::awt::Component* c);
	virtual ::java::awt::Font* getFont(::java::awt::Component* c);
	int32_t getJustification(::java::awt::Component* c);
	::javax::swing::JLabel* getLabel(::java::awt::Component* c);
	virtual ::java::awt::Dimension* getMinimumSize(::java::awt::Component* c);
	int32_t getPosition();
	virtual $String* getTitle();
	virtual ::java::awt::Color* getTitleColor();
	virtual ::java::awt::Font* getTitleFont();
	virtual int32_t getTitleJustification();
	virtual int32_t getTitlePosition();
	void installPropertyChangeListeners();
	virtual bool isBorderOpaque() override;
	static void lambda$installPropertyChangeListeners$0(::java::lang::ref::WeakReference* weakReference, ::java::beans::PropertyChangeEvent* evt);
	static void lambda$installPropertyChangeListeners$1(::java::beans::PropertyChangeListener* listener);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setBorder(::javax::swing::border::Border* border);
	virtual void setTitle($String* title);
	virtual void setTitleColor(::java::awt::Color* titleColor);
	virtual void setTitleFont(::java::awt::Font* titleFont);
	virtual void setTitleJustification(int32_t titleJustification);
	virtual void setTitlePosition(int32_t titlePosition);
	$String* title = nullptr;
	::javax::swing::border::Border* border = nullptr;
	int32_t titlePosition = 0;
	int32_t titleJustification = 0;
	::java::awt::Font* titleFont = nullptr;
	::java::awt::Color* titleColor = nullptr;
	::javax::swing::JLabel* label = nullptr;
	static const int32_t DEFAULT_POSITION = 0;
	static const int32_t ABOVE_TOP = 1;
	static const int32_t TOP = 2;
	static const int32_t BELOW_TOP = 3;
	static const int32_t ABOVE_BOTTOM = 4;
	static const int32_t BOTTOM = 5;
	static const int32_t BELOW_BOTTOM = 6;
	static const int32_t DEFAULT_JUSTIFICATION = 0;
	static const int32_t LEFT = 1;
	static const int32_t CENTER = 2;
	static const int32_t RIGHT = 3;
	static const int32_t LEADING = 4;
	static const int32_t TRAILING = 5;
	static const int32_t EDGE_SPACING = 2;
	static const int32_t TEXT_SPACING = 2;
	static const int32_t TEXT_INSET_H = 5;
};

		} // border
	} // swing
} // javax

#pragma pop_macro("ABOVE_BOTTOM")
#pragma pop_macro("ABOVE_TOP")
#pragma pop_macro("BELOW_BOTTOM")
#pragma pop_macro("BELOW_TOP")
#pragma pop_macro("BOTTOM")
#pragma pop_macro("CENTER")
#pragma pop_macro("DEFAULT_JUSTIFICATION")
#pragma pop_macro("DEFAULT_POSITION")
#pragma pop_macro("EDGE_SPACING")
#pragma pop_macro("LEADING")
#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")
#pragma pop_macro("TEXT_INSET_H")
#pragma pop_macro("TEXT_SPACING")
#pragma pop_macro("TOP")
#pragma pop_macro("TRAILING")

#endif // _javax_swing_border_TitledBorder_h_
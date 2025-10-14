#ifndef _javax_swing_BorderFactory_h_
#define _javax_swing_BorderFactory_h_
//$ class javax.swing.BorderFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class BasicStroke;
		class Color;
		class Font;
		class Paint;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
			class CompoundBorder;
			class MatteBorder;
			class TitledBorder;
		}
	}
}

namespace javax {
	namespace swing {

class $export BorderFactory : public ::java::lang::Object {
	$class(BorderFactory, 0, ::java::lang::Object)
public:
	BorderFactory();
	void init$();
	static ::javax::swing::border::Border* createBevelBorder(int32_t type);
	static ::javax::swing::border::Border* createBevelBorder(int32_t type, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	static ::javax::swing::border::Border* createBevelBorder(int32_t type, ::java::awt::Color* highlightOuter, ::java::awt::Color* highlightInner, ::java::awt::Color* shadowOuter, ::java::awt::Color* shadowInner);
	static ::javax::swing::border::CompoundBorder* createCompoundBorder();
	static ::javax::swing::border::CompoundBorder* createCompoundBorder(::javax::swing::border::Border* outsideBorder, ::javax::swing::border::Border* insideBorder);
	static ::javax::swing::border::Border* createDashedBorder(::java::awt::Paint* paint);
	static ::javax::swing::border::Border* createDashedBorder(::java::awt::Paint* paint, float length, float spacing);
	static ::javax::swing::border::Border* createDashedBorder(::java::awt::Paint* paint, float thickness, float length, float spacing, bool rounded);
	static ::javax::swing::border::Border* createEmptyBorder();
	static ::javax::swing::border::Border* createEmptyBorder(int32_t top, int32_t left, int32_t bottom, int32_t right);
	static ::javax::swing::border::Border* createEtchedBorder();
	static ::javax::swing::border::Border* createEtchedBorder(::java::awt::Color* highlight, ::java::awt::Color* shadow);
	static ::javax::swing::border::Border* createEtchedBorder(int32_t type);
	static ::javax::swing::border::Border* createEtchedBorder(int32_t type, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	static ::javax::swing::border::Border* createLineBorder(::java::awt::Color* color);
	static ::javax::swing::border::Border* createLineBorder(::java::awt::Color* color, int32_t thickness);
	static ::javax::swing::border::Border* createLineBorder(::java::awt::Color* color, int32_t thickness, bool rounded);
	static ::javax::swing::border::Border* createLoweredBevelBorder();
	static ::javax::swing::border::Border* createLoweredSoftBevelBorder();
	static ::javax::swing::border::MatteBorder* createMatteBorder(int32_t top, int32_t left, int32_t bottom, int32_t right, ::java::awt::Color* color);
	static ::javax::swing::border::MatteBorder* createMatteBorder(int32_t top, int32_t left, int32_t bottom, int32_t right, ::javax::swing::Icon* tileIcon);
	static ::javax::swing::border::Border* createRaisedBevelBorder();
	static ::javax::swing::border::Border* createRaisedSoftBevelBorder();
	static ::javax::swing::border::Border* createSharedBevel(int32_t type);
	static ::javax::swing::border::Border* createSoftBevelBorder(int32_t type);
	static ::javax::swing::border::Border* createSoftBevelBorder(int32_t type, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	static ::javax::swing::border::Border* createSoftBevelBorder(int32_t type, ::java::awt::Color* highlightOuter, ::java::awt::Color* highlightInner, ::java::awt::Color* shadowOuter, ::java::awt::Color* shadowInner);
	static ::javax::swing::border::Border* createStrokeBorder(::java::awt::BasicStroke* stroke);
	static ::javax::swing::border::Border* createStrokeBorder(::java::awt::BasicStroke* stroke, ::java::awt::Paint* paint);
	static ::javax::swing::border::TitledBorder* createTitledBorder($String* title);
	static ::javax::swing::border::TitledBorder* createTitledBorder(::javax::swing::border::Border* border);
	static ::javax::swing::border::TitledBorder* createTitledBorder(::javax::swing::border::Border* border, $String* title);
	static ::javax::swing::border::TitledBorder* createTitledBorder(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition);
	static ::javax::swing::border::TitledBorder* createTitledBorder(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, ::java::awt::Font* titleFont);
	static ::javax::swing::border::TitledBorder* createTitledBorder(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, ::java::awt::Font* titleFont, ::java::awt::Color* titleColor);
	static ::javax::swing::border::Border* sharedRaisedBevel;
	static ::javax::swing::border::Border* sharedLoweredBevel;
	static ::javax::swing::border::Border* sharedSoftRaisedBevel;
	static ::javax::swing::border::Border* sharedSoftLoweredBevel;
	static ::javax::swing::border::Border* sharedEtchedBorder;
	static ::javax::swing::border::Border* sharedRaisedEtchedBorder;
	static ::javax::swing::border::Border* emptyBorder;
	static ::javax::swing::border::Border* sharedDashedBorder;
};

	} // swing
} // javax

#endif // _javax_swing_BorderFactory_h_
#ifndef _sun_swing_DefaultLayoutStyle_h_
#define _sun_swing_DefaultLayoutStyle_h_
//$ class sun.swing.DefaultLayoutStyle
//$ extends javax.swing.LayoutStyle

#include <javax/swing/LayoutStyle.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		class Container;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class Icon;
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace sun {
	namespace swing {

class $import DefaultLayoutStyle : public ::javax::swing::LayoutStyle {
	$class(DefaultLayoutStyle, 0, ::javax::swing::LayoutStyle)
public:
	DefaultLayoutStyle();
	void init$();
	void checkPosition(int32_t position);
	virtual int32_t flipDirection(int32_t position);
	virtual int32_t getButtonGap(::javax::swing::JComponent* source, ::javax::swing::JComponent* target, int32_t position, int32_t offset);
	virtual int32_t getButtonGap(::javax::swing::JComponent* source, int32_t position, int32_t offset);
	virtual int32_t getButtonGap(::javax::swing::JComponent* c, int32_t position);
	virtual int32_t getContainerGap(::javax::swing::JComponent* component, int32_t position, ::java::awt::Container* parent) override;
	::javax::swing::Icon* getIcon(::javax::swing::AbstractButton* button);
	virtual int32_t getIndent(::javax::swing::JComponent* c, int32_t position);
	int32_t getInset(::javax::swing::JComponent* c, int32_t position);
	int32_t getInset(::java::awt::Insets* insets, int32_t position);
	static ::javax::swing::LayoutStyle* getInstance();
	virtual int32_t getPreferredGap(::javax::swing::JComponent* component1, ::javax::swing::JComponent* component2, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t position, ::java::awt::Container* parent) override;
	virtual bool isLabelAndNonlabel(::javax::swing::JComponent* c1, ::javax::swing::JComponent* c2, int32_t position);
	bool isLeftAligned(::javax::swing::AbstractButton* button, int32_t position);
	bool isRightAligned(::javax::swing::AbstractButton* button, int32_t position);
	static bool $assertionsDisabled;
	static ::sun::swing::DefaultLayoutStyle* INSTANCE;
};

	} // swing
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_swing_DefaultLayoutStyle_h_
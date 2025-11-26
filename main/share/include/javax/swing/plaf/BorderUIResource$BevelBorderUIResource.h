#ifndef _javax_swing_plaf_BorderUIResource$BevelBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$BevelBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$BevelBorderUIResource
//$ extends javax.swing.border.BevelBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import BorderUIResource$BevelBorderUIResource : public ::javax::swing::border::BevelBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$BevelBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::BevelBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$BevelBorderUIResource();
	using ::javax::swing::border::BevelBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t bevelType);
	void init$(int32_t bevelType, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	void init$(int32_t bevelType, ::java::awt::Color* highlightOuter, ::java::awt::Color* highlightInner, ::java::awt::Color* shadowOuter, ::java::awt::Color* shadowInner);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$BevelBorderUIResource_h_
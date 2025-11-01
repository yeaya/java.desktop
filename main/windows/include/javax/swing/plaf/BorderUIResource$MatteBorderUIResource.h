#ifndef _javax_swing_plaf_BorderUIResource$MatteBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$MatteBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$MatteBorderUIResource
//$ extends javax.swing.border.MatteBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import BorderUIResource$MatteBorderUIResource : public ::javax::swing::border::MatteBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$MatteBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::MatteBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$MatteBorderUIResource();
	using ::javax::swing::border::MatteBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right, ::java::awt::Color* color);
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right, ::javax::swing::Icon* tileIcon);
	void init$(::javax::swing::Icon* tileIcon);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$MatteBorderUIResource_h_
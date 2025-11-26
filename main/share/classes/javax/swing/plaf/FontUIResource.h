#ifndef _javax_swing_plaf_FontUIResource_h_
#define _javax_swing_plaf_FontUIResource_h_
//$ class javax.swing.plaf.FontUIResource
//$ extends java.awt.Font
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Font.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {

class $export FontUIResource : public ::java::awt::Font, public ::javax::swing::plaf::UIResource {
	$class(FontUIResource, $NO_CLASS_INIT, ::java::awt::Font, ::javax::swing::plaf::UIResource)
public:
	FontUIResource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, int32_t style, int32_t size);
	void init$(::java::awt::Font* font);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_FontUIResource_h_
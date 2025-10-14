#ifndef _javax_swing_plaf_basic_BasicTextUI$BasicCursor_h_
#define _javax_swing_plaf_basic_BasicTextUI$BasicCursor_h_
//$ class javax.swing.plaf.basic.BasicTextUI$BasicCursor
//$ extends java.awt.Cursor
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Cursor.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextUI$BasicCursor : public ::java::awt::Cursor, public ::javax::swing::plaf::UIResource {
	$class(BasicTextUI$BasicCursor, $NO_CLASS_INIT, ::java::awt::Cursor, ::javax::swing::plaf::UIResource)
public:
	BasicTextUI$BasicCursor();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t type);
	void init$($String* name);
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$BasicCursor_h_
#ifndef _javax_swing_plaf_basic_BasicTextUI$BasicCaret_h_
#define _javax_swing_plaf_basic_BasicTextUI$BasicCaret_h_
//$ class javax.swing.plaf.basic.BasicTextUI$BasicCaret
//$ extends javax.swing.text.DefaultCaret
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultCaret.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextUI$BasicCaret : public ::javax::swing::text::DefaultCaret, public ::javax::swing::plaf::UIResource {
	$class(BasicTextUI$BasicCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret, ::javax::swing::plaf::UIResource)
public:
	BasicTextUI$BasicCaret();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	using ::javax::swing::text::DefaultCaret::setRect;
	using ::javax::swing::text::DefaultCaret::intersects;
	using ::javax::swing::text::DefaultCaret::outcode;
	using ::javax::swing::text::DefaultCaret::setFrame;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$BasicCaret_h_
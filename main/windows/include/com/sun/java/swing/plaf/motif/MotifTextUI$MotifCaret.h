#ifndef _com_sun_java_swing_plaf_motif_MotifTextUI$MotifCaret_h_
#define _com_sun_java_swing_plaf_motif_MotifTextUI$MotifCaret_h_
//$ class com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret
//$ extends javax.swing.text.DefaultCaret
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultCaret.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifTextUI$MotifCaret : public ::javax::swing::text::DefaultCaret, public ::javax::swing::plaf::UIResource {
	$class(MotifTextUI$MotifCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret, ::javax::swing::plaf::UIResource)
public:
	MotifTextUI$MotifCaret();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void damage(::java::awt::Rectangle* r) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	using ::javax::swing::text::DefaultCaret::intersects;
	using ::javax::swing::text::DefaultCaret::outcode;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::text::DefaultCaret::setRect;
	using ::javax::swing::text::DefaultCaret::setFrame;
	virtual $String* toString() override;
	static const int32_t IBeamOverhang = 2;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTextUI$MotifCaret_h_
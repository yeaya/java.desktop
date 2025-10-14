#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$PainterBorder_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$PainterBorder_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$PainterBorder
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class Painter;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$PainterBorder : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(NimbusDefaults$PainterBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	NimbusDefaults$PainterBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* painterKey, ::java::awt::Insets* insets);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	::java::awt::Insets* insets = nullptr;
	::javax::swing::Painter* painter = nullptr;
	$String* painterKey = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$PainterBorder_h_
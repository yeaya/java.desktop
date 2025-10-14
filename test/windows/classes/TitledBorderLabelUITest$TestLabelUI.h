#ifndef _TitledBorderLabelUITest$TestLabelUI_h_
#define _TitledBorderLabelUITest$TestLabelUI_h_
//$ class TitledBorderLabelUITest$TestLabelUI
//$ extends javax.swing.plaf.metal.MetalLabelUI
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/metal/MetalLabelUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

class $export TitledBorderLabelUITest$TestLabelUI : public ::javax::swing::plaf::metal::MetalLabelUI, public ::javax::swing::plaf::UIResource {
	$class(TitledBorderLabelUITest$TestLabelUI, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalLabelUI, ::javax::swing::plaf::UIResource)
public:
	TitledBorderLabelUITest$TestLabelUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual $String* toString() override;
};

#endif // _TitledBorderLabelUITest$TestLabelUI_h_
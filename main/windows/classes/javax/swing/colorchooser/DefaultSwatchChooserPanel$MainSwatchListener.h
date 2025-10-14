#ifndef _javax_swing_colorchooser_DefaultSwatchChooserPanel$MainSwatchListener_h_
#define _javax_swing_colorchooser_DefaultSwatchChooserPanel$MainSwatchListener_h_
//$ class javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchListener
//$ extends java.awt.event.MouseAdapter
//$ implements java.io.Serializable

#include <java/awt/event/MouseAdapter.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class DefaultSwatchChooserPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class DefaultSwatchChooserPanel$MainSwatchListener : public ::java::awt::event::MouseAdapter, public ::java::io::Serializable {
	$class(DefaultSwatchChooserPanel$MainSwatchListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter, ::java::io::Serializable)
public:
	DefaultSwatchChooserPanel$MainSwatchListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::colorchooser::DefaultSwatchChooserPanel* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::colorchooser::DefaultSwatchChooserPanel* this$0 = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_DefaultSwatchChooserPanel$MainSwatchListener_h_
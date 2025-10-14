#ifndef _javax_swing_ColorChooserDialog$Closer_h_
#define _javax_swing_ColorChooserDialog$Closer_h_
//$ class javax.swing.ColorChooserDialog$Closer
//$ extends java.awt.event.WindowAdapter
//$ implements java.io.Serializable

#include <java/awt/event/WindowAdapter.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ColorChooserDialog;
	}
}

namespace javax {
	namespace swing {

class ColorChooserDialog$Closer : public ::java::awt::event::WindowAdapter, public ::java::io::Serializable {
	$class(ColorChooserDialog$Closer, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter, ::java::io::Serializable)
public:
	ColorChooserDialog$Closer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::ColorChooserDialog* this$0);
	virtual $String* toString() override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	::javax::swing::ColorChooserDialog* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ColorChooserDialog$Closer_h_
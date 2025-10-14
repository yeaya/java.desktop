#ifndef _javax_swing_ColorTracker_h_
#define _javax_swing_ColorTracker_h_
//$ class javax.swing.ColorTracker
//$ extends java.awt.event.ActionListener
//$ implements java.io.Serializable

#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JColorChooser;
	}
}

namespace javax {
	namespace swing {

class ColorTracker : public ::java::awt::event::ActionListener, public ::java::io::Serializable {
	$class(ColorTracker, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::java::io::Serializable)
public:
	ColorTracker();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JColorChooser* c);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual ::java::awt::Color* getColor();
	virtual $String* toString() override;
	::javax::swing::JColorChooser* chooser = nullptr;
	::java::awt::Color* color = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ColorTracker_h_
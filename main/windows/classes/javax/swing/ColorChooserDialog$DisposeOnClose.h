#ifndef _javax_swing_ColorChooserDialog$DisposeOnClose_h_
#define _javax_swing_ColorChooserDialog$DisposeOnClose_h_
//$ class javax.swing.ColorChooserDialog$DisposeOnClose
//$ extends java.awt.event.ComponentAdapter
//$ implements java.io.Serializable

#include <java/awt/event/ComponentAdapter.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}

namespace javax {
	namespace swing {

class ColorChooserDialog$DisposeOnClose : public ::java::awt::event::ComponentAdapter, public ::java::io::Serializable {
	$class(ColorChooserDialog$DisposeOnClose, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter, ::java::io::Serializable)
public:
	ColorChooserDialog$DisposeOnClose();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_ColorChooserDialog$DisposeOnClose_h_
#ifndef _sun_awt_windows_WPrinterJob$PrintToFileErrorDialog_h_
#define _sun_awt_windows_WPrinterJob$PrintToFileErrorDialog_h_
//$ class sun.awt.windows.WPrinterJob$PrintToFileErrorDialog
//$ extends java.awt.Dialog
//$ implements java.awt.event.ActionListener

#include <java/awt/Dialog.h>
#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		class Component;
		class Frame;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WPrinterJob;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPrinterJob$PrintToFileErrorDialog : public ::java::awt::Dialog, public ::java::awt::event::ActionListener {
	$class(WPrinterJob$PrintToFileErrorDialog, $NO_CLASS_INIT, ::java::awt::Dialog, ::java::awt::event::ActionListener)
public:
	WPrinterJob$PrintToFileErrorDialog();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::windows::WPrinterJob* this$0, ::java::awt::Frame* parent, $String* title, $String* message, $String* buttonText);
	void init$(::sun::awt::windows::WPrinterJob* this$0, ::java::awt::Dialog* parent, $String* title, $String* message, $String* buttonText);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	void init(::java::awt::Component* parent, $String* title, $String* message, $String* buttonText);
	using ::java::awt::Dialog::show;
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::remove;
	using ::java::awt::Dialog::list;
	virtual $String* toString() override;
	::sun::awt::windows::WPrinterJob* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPrinterJob$PrintToFileErrorDialog_h_
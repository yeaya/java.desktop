#ifndef _sun_awt_im_SimpleInputMethodWindow_h_
#define _sun_awt_im_SimpleInputMethodWindow_h_
//$ class sun.awt.im.SimpleInputMethodWindow
//$ extends java.awt.Frame
//$ implements sun.awt.im.InputMethodWindow

#include <java/awt/Frame.h>
#include <sun/awt/im/InputMethodWindow.h>

namespace java {
	namespace awt {
		namespace im {
			class InputContext;
		}
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class InputContext;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class SimpleInputMethodWindow : public ::java::awt::Frame, public ::sun::awt::im::InputMethodWindow {
	$class(SimpleInputMethodWindow, $NO_CLASS_INIT, ::java::awt::Frame, ::sun::awt::im::InputMethodWindow)
public:
	SimpleInputMethodWindow();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* title, ::sun::awt::im::InputContext* context);
	virtual ::java::awt::im::InputContext* getInputContext() override;
	using ::java::awt::Frame::remove;
	using ::java::awt::Frame::setCursor;
	using ::java::awt::Frame::isFocusCycleRoot;
	using ::java::awt::Frame::list;
	virtual void setInputContext(::sun::awt::im::InputContext* inputContext) override;
	using ::java::awt::Frame::show;
	virtual $String* toString() override;
	::sun::awt::im::InputContext* inputContext = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x46AF4F1319E0E1F3;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_SimpleInputMethodWindow_h_
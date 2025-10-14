#ifndef _sun_awt_im_InputMethodJFrame_h_
#define _sun_awt_im_InputMethodJFrame_h_
//$ class sun.awt.im.InputMethodJFrame
//$ extends javax.swing.JFrame
//$ implements sun.awt.im.InputMethodWindow

#include <javax/swing/JFrame.h>
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

class InputMethodJFrame : public ::javax::swing::JFrame, public ::sun::awt::im::InputMethodWindow {
	$class(InputMethodJFrame, $NO_CLASS_INIT, ::javax::swing::JFrame, ::sun::awt::im::InputMethodWindow)
public:
	InputMethodJFrame();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* title, ::sun::awt::im::InputContext* context);
	virtual ::java::awt::im::InputContext* getInputContext() override;
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	virtual void setInputContext(::sun::awt::im::InputContext* inputContext) override;
	using ::javax::swing::JFrame::show;
	virtual $String* toString() override;
	::sun::awt::im::InputContext* inputContext = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xBEB17038792F300B;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputMethodJFrame_h_
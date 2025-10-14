#ifndef _javax_swing_Popup$HeavyWeightWindow_h_
#define _javax_swing_Popup$HeavyWeightWindow_h_
//$ class javax.swing.Popup$HeavyWeightWindow
//$ extends javax.swing.JWindow
//$ implements sun.awt.ModalExclude

#include <javax/swing/JWindow.h>
#include <sun/awt/ModalExclude.h>

namespace java {
	namespace awt {
		class Graphics;
		class Window;
	}
}

namespace javax {
	namespace swing {

class $import Popup$HeavyWeightWindow : public ::javax::swing::JWindow, public ::sun::awt::ModalExclude {
	$class(Popup$HeavyWeightWindow, $NO_CLASS_INIT, ::javax::swing::JWindow, ::sun::awt::ModalExclude)
public:
	Popup$HeavyWeightWindow();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JWindow::add;
	using ::javax::swing::JWindow::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Window* parent);
	using ::javax::swing::JWindow::remove;
	using ::javax::swing::JWindow::repaint;
	using ::javax::swing::JWindow::isFocusCycleRoot;
	using ::javax::swing::JWindow::list;
	using ::javax::swing::JWindow::show;
	virtual void show() override;
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
};

	} // swing
} // javax

#endif // _javax_swing_Popup$HeavyWeightWindow_h_
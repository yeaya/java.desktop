#ifndef _javax_swing_colorchooser_ColorPanel_h_
#define _javax_swing_colorchooser_ColorPanel_h_
//$ class javax.swing.colorchooser.ColorPanel
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JPanel.h>

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
		namespace colorchooser {
			class ColorModel;
			class SlidingSpinner;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class ColorPanel : public ::javax::swing::JPanel, public ::java::awt::event::ActionListener {
	$class(ColorPanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ActionListener)
public:
	ColorPanel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::colorchooser::ColorModel* model);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	void buildPanel();
	void colorChanged();
	int32_t getColor(float z);
	int32_t getColor(float x, float y);
	int32_t getColor(int32_t index);
	float getValueX();
	float getValueY();
	float getValueZ();
	bool isColorTransparencySelectionEnabled();
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	void setColor(::java::awt::Color* color);
	void setColorTransparencySelectionEnabled(bool b);
	void setDefaultValue(int32_t index);
	using ::javax::swing::JPanel::setUI;
	void setValue(float z);
	void setValue(float x, float y);
	void setValue(int32_t index);
	virtual $String* toString() override;
	$Array<::javax::swing::colorchooser::SlidingSpinner>* spinners = nullptr;
	$floats* values = nullptr;
	::javax::swing::colorchooser::ColorModel* model = nullptr;
	::java::awt::Color* color = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	int32_t z = 0;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorPanel_h_
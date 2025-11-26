#ifndef _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel_h_
#define _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel_h_
//$ class com.sun.java.swing.plaf.gtk.GTKColorChooserPanel
//$ extends javax.swing.colorchooser.AbstractColorChooserPanel
//$ implements javax.swing.event.ChangeListener

#include <java/lang/Math.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/event/ChangeListener.h>

#pragma push_macro("FLAGS_CHANGED_ANGLE")
#undef FLAGS_CHANGED_ANGLE
#pragma push_macro("FLAGS_DRAGGING")
#undef FLAGS_DRAGGING
#pragma push_macro("FLAGS_DRAGGING_TRIANGLE")
#undef FLAGS_DRAGGING_TRIANGLE
#pragma push_macro("FLAGS_FOCUSED_TRIANGLE")
#undef FLAGS_FOCUSED_TRIANGLE
#pragma push_macro("FLAGS_FOCUSED_WHEEL")
#undef FLAGS_FOCUSED_WHEEL
#pragma push_macro("FLAGS_SETTING_COLOR")
#undef FLAGS_SETTING_COLOR
#pragma push_macro("PI_3")
#undef PI_3

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKColorChooserPanel$ColorTriangle;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JColorChooser;
		class JComponent;
		class JLabel;
		class JSpinner;
		class JTextField;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKColorChooserPanel : public ::javax::swing::colorchooser::AbstractColorChooserPanel, public ::javax::swing::event::ChangeListener {
	$class(GTKColorChooserPanel, 0, ::javax::swing::colorchooser::AbstractColorChooserPanel, ::javax::swing::event::ChangeListener)
public:
	GTKColorChooserPanel();
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::contains;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::enable;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getBounds;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getSize;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getLocation;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::firePropertyChange;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::add;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void add(::java::awt::Container* parent, $String* key, ::javax::swing::JComponent* widget, int32_t x, int32_t y);
	virtual void buildChooser() override;
	static void compositeRequestFocus(::java::awt::Component* component, bool direction);
	void configureSpinner(::javax::swing::JSpinner* spinner, $String* name);
	float getBrightness();
	virtual ::java::awt::Color* getColor();
	virtual $String* getDisplayName() override;
	virtual int32_t getDisplayedMnemonicIndex() override;
	float getHue();
	virtual ::javax::swing::Icon* getLargeDisplayIcon() override;
	virtual int32_t getMnemonic() override;
	float getSaturation();
	virtual ::javax::swing::Icon* getSmallDisplayIcon() override;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::requestFocus;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::requestFocusInWindow;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::repaint;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::remove;
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::list;
	void setBlue(int32_t blue);
	void setBrightness(float brightness);
	void setColor(::java::awt::Color* color, bool updateSpinners, bool updateHSB, bool updateModel);
	void setGreen(int32_t green);
	void setHSB(float h, float s, float b);
	void setHue(float hue, bool update);
	void setRGB(int32_t rgb);
	void setRed(int32_t red);
	void setSaturation(float saturation);
	void setSaturationAndBrightness(float s, float b, bool update);
	using ::javax::swing::colorchooser::AbstractColorChooserPanel::setUI;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void uninstallChooserPanel(::javax::swing::JColorChooser* enclosingChooser) override;
	virtual void updateChooser() override;
	static float PI_3;
	::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel$ColorTriangle* triangle = nullptr;
	::javax::swing::JLabel* lastLabel = nullptr;
	::javax::swing::JLabel* label = nullptr;
	::javax::swing::JSpinner* hueSpinner = nullptr;
	::javax::swing::JSpinner* saturationSpinner = nullptr;
	::javax::swing::JSpinner* valueSpinner = nullptr;
	::javax::swing::JSpinner* redSpinner = nullptr;
	::javax::swing::JSpinner* greenSpinner = nullptr;
	::javax::swing::JSpinner* blueSpinner = nullptr;
	::javax::swing::JTextField* colorNameTF = nullptr;
	bool settingColor = false;
	float hue = 0.0;
	float saturation = 0.0;
	float brightness = 0.0;
	static const int32_t FLAGS_CHANGED_ANGLE = 1; // 1 << 0
	static const int32_t FLAGS_DRAGGING = 2; // 1 << 1
	static const int32_t FLAGS_DRAGGING_TRIANGLE = 4; // 1 << 2
	static const int32_t FLAGS_SETTING_COLOR = 8; // 1 << 3
	static const int32_t FLAGS_FOCUSED_WHEEL = 16; // 1 << 4
	static const int32_t FLAGS_FOCUSED_TRIANGLE = 32; // 1 << 5
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("FLAGS_CHANGED_ANGLE")
#pragma pop_macro("FLAGS_DRAGGING")
#pragma pop_macro("FLAGS_DRAGGING_TRIANGLE")
#pragma pop_macro("FLAGS_FOCUSED_TRIANGLE")
#pragma pop_macro("FLAGS_FOCUSED_WHEEL")
#pragma pop_macro("FLAGS_SETTING_COLOR")
#pragma pop_macro("PI_3")

#endif // _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel_h_
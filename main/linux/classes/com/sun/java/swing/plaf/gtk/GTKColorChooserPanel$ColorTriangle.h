#ifndef _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel$ColorTriangle_h_
#define _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel$ColorTriangle_h_
//$ class com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorTriangle
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKColorChooserPanel;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class Graphics;
		class Image;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKColorChooserPanel$ColorTriangle : public ::javax::swing::JPanel {
	$class(GTKColorChooserPanel$ColorTriangle, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	GTKColorChooserPanel$ColorTriangle();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel* this$0);
	bool adjustHue(int32_t x, int32_t y, bool check);
	virtual bool adjustSB(int32_t x, int32_t y, bool checkLoc);
	int32_t colorWheelLocationToRGB(int32_t x, int32_t y, double rad);
	virtual void focusTriangle();
	virtual void focusWheel();
	virtual ::java::awt::Color* getColor();
	virtual int32_t getColorX();
	virtual int32_t getColorY();
	virtual ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel* getGTKColorChooserPanel();
	::java::awt::Image* getImage(int32_t size);
	int32_t getIndicatorSize();
	int32_t getTriangleCircumscribedRadius();
	::java::awt::Image* getWheelImage(int32_t size);
	int32_t getWheelRadius();
	int32_t getWheelWidth();
	int32_t getWheelXOrigin();
	int32_t getWheelYOrigin();
	virtual void incrementHue(bool positive);
	bool isSet(int32_t flag);
	virtual bool isWheelFocused();
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	void paintTriangle(::java::awt::Graphics* g, int32_t size, ::java::awt::Color* color);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	void setAngleFromHue(float hue);
	virtual void setColor(float h, float s, float b);
	void setFlag(int32_t flag, bool value);
	void setFocusType(int32_t type);
	void setHueAngle(double angle);
	void setSaturationAndBrightness(float s, float b);
	void setSaturationAndBrightness(float s, float b, int32_t newCircleX, int32_t newCircleY);
	using ::javax::swing::JPanel::setUI;
	::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel* this$0 = nullptr;
	::java::awt::Image* wheelImage = nullptr;
	::java::awt::Image* triangleImage = nullptr;
	double angle = 0.0;
	int32_t flags = 0;
	int32_t circleX = 0;
	int32_t circleY = 0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKColorChooserPanel$ColorTriangle_h_
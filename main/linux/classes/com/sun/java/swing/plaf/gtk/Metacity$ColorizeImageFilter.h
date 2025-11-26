#ifndef _com_sun_java_swing_plaf_gtk_Metacity$ColorizeImageFilter_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$ColorizeImageFilter_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$ColorizeImageFilter
//$ extends java.awt.image.RGBImageFilter

#include <java/awt/image/RGBImageFilter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class Metacity;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Image;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$ColorizeImageFilter : public ::java::awt::image::RGBImageFilter {
	$class(Metacity$ColorizeImageFilter, $NO_CLASS_INIT, ::java::awt::image::RGBImageFilter)
public:
	Metacity$ColorizeImageFilter();
	void init$(::com::sun::java::swing::plaf::gtk::Metacity* this$0);
	virtual ::java::awt::Image* colorize(::java::awt::Image* fromImage, ::java::awt::Color* c);
	virtual int32_t filterRGB(int32_t x, int32_t y, int32_t rgb) override;
	virtual void setColor(::java::awt::Color* color);
	::com::sun::java::swing::plaf::gtk::Metacity* this$0 = nullptr;
	double cr = 0.0;
	double cg = 0.0;
	double cb = 0.0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_Metacity$ColorizeImageFilter_h_
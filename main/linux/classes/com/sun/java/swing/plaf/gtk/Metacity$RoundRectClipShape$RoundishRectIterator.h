#ifndef _com_sun_java_swing_plaf_gtk_Metacity$RoundRectClipShape$RoundishRectIterator_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$RoundRectClipShape$RoundishRectIterator_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape$RoundishRectIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Math.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class Metacity$RoundRectClipShape;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$RoundRectClipShape$RoundishRectIterator : public ::java::awt::geom::PathIterator {
	$class(Metacity$RoundRectClipShape$RoundishRectIterator, 0, ::java::awt::geom::PathIterator)
public:
	Metacity$RoundRectClipShape$RoundishRectIterator();
	void init$(::com::sun::java::swing::plaf::gtk::Metacity$RoundRectClipShape* rr, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	double x = 0.0;
	double y = 0.0;
	double w = 0.0;
	double h = 0.0;
	double aw = 0.0;
	double ah = 0.0;
	::java::awt::geom::AffineTransform* affine = nullptr;
	int32_t index = 0;
	$Array<double, 2>* ctrlpts = nullptr;
	$ints* types = nullptr;
	static double angle;
	static double a;
	static double b;
	static double c;
	static double cv;
	static double acv;
	static $Array<double, 2>* CtrlPtTemplate;
	static $ints* CornerFlags;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_Metacity$RoundRectClipShape$RoundishRectIterator_h_
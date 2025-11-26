#ifndef _java_awt_geom_Dimension2D_h_
#define _java_awt_geom_Dimension2D_h_
//$ class java.awt.geom.Dimension2D
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace geom {

class $import Dimension2D : public ::java::lang::Cloneable {
	$class(Dimension2D, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Dimension2D();
	void init$();
	virtual $Object* clone() override;
	virtual double getHeight() {return 0.0;}
	virtual double getWidth() {return 0.0;}
	virtual void setSize(double width, double height) {}
	virtual void setSize(::java::awt::geom::Dimension2D* d);
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Dimension2D_h_
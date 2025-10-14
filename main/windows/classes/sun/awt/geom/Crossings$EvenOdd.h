#ifndef _sun_awt_geom_Crossings$EvenOdd_h_
#define _sun_awt_geom_Crossings$EvenOdd_h_
//$ class sun.awt.geom.Crossings$EvenOdd
//$ extends sun.awt.geom.Crossings

#include <sun/awt/geom/Crossings.h>

namespace sun {
	namespace awt {
		namespace geom {

class Crossings$EvenOdd : public ::sun::awt::geom::Crossings {
	$class(Crossings$EvenOdd, $NO_CLASS_INIT, ::sun::awt::geom::Crossings)
public:
	Crossings$EvenOdd();
	void init$(double xlo, double ylo, double xhi, double yhi);
	virtual bool covers(double ystart, double yend) override;
	virtual void record(double ystart, double yend, int32_t direction) override;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_Crossings$EvenOdd_h_
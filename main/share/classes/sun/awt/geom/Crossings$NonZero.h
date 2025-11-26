#ifndef _sun_awt_geom_Crossings$NonZero_h_
#define _sun_awt_geom_Crossings$NonZero_h_
//$ class sun.awt.geom.Crossings$NonZero
//$ extends sun.awt.geom.Crossings

#include <java/lang/Array.h>
#include <sun/awt/geom/Crossings.h>

namespace sun {
	namespace awt {
		namespace geom {

class Crossings$NonZero : public ::sun::awt::geom::Crossings {
	$class(Crossings$NonZero, $NO_CLASS_INIT, ::sun::awt::geom::Crossings)
public:
	Crossings$NonZero();
	void init$(double xlo, double ylo, double xhi, double yhi);
	virtual bool covers(double ystart, double yend) override;
	void insert(int32_t cur, double lo, double hi, int32_t dir);
	virtual void record(double ystart, double yend, int32_t direction) override;
	void remove(int32_t cur);
	$ints* crosscounts = nullptr;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_Crossings$NonZero_h_
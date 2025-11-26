#ifndef _sun_awt_geom_AreaOp$IntOp_h_
#define _sun_awt_geom_AreaOp$IntOp_h_
//$ class sun.awt.geom.AreaOp$IntOp
//$ extends sun.awt.geom.AreaOp$CAGOp

#include <sun/awt/geom/AreaOp$CAGOp.h>

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp$IntOp : public ::sun::awt::geom::AreaOp$CAGOp {
	$class(AreaOp$IntOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp$CAGOp)
public:
	AreaOp$IntOp();
	void init$();
	virtual bool newClassification(bool inLeft, bool inRight) override;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$IntOp_h_
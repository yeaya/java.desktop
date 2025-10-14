#ifndef _sun_awt_geom_AreaOp$XorOp_h_
#define _sun_awt_geom_AreaOp$XorOp_h_
//$ class sun.awt.geom.AreaOp$XorOp
//$ extends sun.awt.geom.AreaOp$CAGOp

#include <sun/awt/geom/AreaOp$CAGOp.h>

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp$XorOp : public ::sun::awt::geom::AreaOp$CAGOp {
	$class(AreaOp$XorOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp$CAGOp)
public:
	AreaOp$XorOp();
	void init$();
	virtual bool newClassification(bool inLeft, bool inRight) override;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$XorOp_h_
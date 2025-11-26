#ifndef _sun_awt_geom_AreaOp$SubOp_h_
#define _sun_awt_geom_AreaOp$SubOp_h_
//$ class sun.awt.geom.AreaOp$SubOp
//$ extends sun.awt.geom.AreaOp$CAGOp

#include <sun/awt/geom/AreaOp$CAGOp.h>

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp$SubOp : public ::sun::awt::geom::AreaOp$CAGOp {
	$class(AreaOp$SubOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp$CAGOp)
public:
	AreaOp$SubOp();
	void init$();
	virtual bool newClassification(bool inLeft, bool inRight) override;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$SubOp_h_
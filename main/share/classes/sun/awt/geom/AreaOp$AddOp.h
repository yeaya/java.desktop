#ifndef _sun_awt_geom_AreaOp$AddOp_h_
#define _sun_awt_geom_AreaOp$AddOp_h_
//$ class sun.awt.geom.AreaOp$AddOp
//$ extends sun.awt.geom.AreaOp$CAGOp

#include <sun/awt/geom/AreaOp$CAGOp.h>

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp$AddOp : public ::sun::awt::geom::AreaOp$CAGOp {
	$class(AreaOp$AddOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp$CAGOp)
public:
	AreaOp$AddOp();
	void init$();
	virtual bool newClassification(bool inLeft, bool inRight) override;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$AddOp_h_
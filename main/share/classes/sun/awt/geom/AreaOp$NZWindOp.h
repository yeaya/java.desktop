#ifndef _sun_awt_geom_AreaOp$NZWindOp_h_
#define _sun_awt_geom_AreaOp$NZWindOp_h_
//$ class sun.awt.geom.AreaOp$NZWindOp
//$ extends sun.awt.geom.AreaOp

#include <sun/awt/geom/AreaOp.h>

namespace sun {
	namespace awt {
		namespace geom {
			class Edge;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp$NZWindOp : public ::sun::awt::geom::AreaOp {
	$class(AreaOp$NZWindOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp)
public:
	AreaOp$NZWindOp();
	void init$();
	virtual int32_t classify(::sun::awt::geom::Edge* e) override;
	virtual int32_t getState() override;
	virtual void newRow() override;
	int32_t count = 0;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$NZWindOp_h_
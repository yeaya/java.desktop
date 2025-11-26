#ifndef _sun_awt_geom_AreaOp$EOWindOp_h_
#define _sun_awt_geom_AreaOp$EOWindOp_h_
//$ class sun.awt.geom.AreaOp$EOWindOp
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

class AreaOp$EOWindOp : public ::sun::awt::geom::AreaOp {
	$class(AreaOp$EOWindOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp)
public:
	AreaOp$EOWindOp();
	void init$();
	virtual int32_t classify(::sun::awt::geom::Edge* e) override;
	virtual int32_t getState() override;
	virtual void newRow() override;
	bool inside = false;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$EOWindOp_h_
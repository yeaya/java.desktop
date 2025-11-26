#ifndef _sun_awt_geom_AreaOp$CAGOp_h_
#define _sun_awt_geom_AreaOp$CAGOp_h_
//$ class sun.awt.geom.AreaOp$CAGOp
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

class AreaOp$CAGOp : public ::sun::awt::geom::AreaOp {
	$class(AreaOp$CAGOp, $NO_CLASS_INIT, ::sun::awt::geom::AreaOp)
public:
	AreaOp$CAGOp();
	void init$();
	virtual int32_t classify(::sun::awt::geom::Edge* e) override;
	virtual int32_t getState() override;
	virtual bool newClassification(bool inLeft, bool inRight) {return false;}
	virtual void newRow() override;
	bool inLeft = false;
	bool inRight = false;
	bool inResult = false;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$CAGOp_h_
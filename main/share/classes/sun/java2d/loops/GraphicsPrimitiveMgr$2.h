#ifndef _sun_java2d_loops_GraphicsPrimitiveMgr$2_h_
#define _sun_java2d_loops_GraphicsPrimitiveMgr$2_h_
//$ class sun.java2d.loops.GraphicsPrimitiveMgr$2
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace java2d {
		namespace loops {

class GraphicsPrimitiveMgr$2 : public ::java::util::Comparator {
	$class(GraphicsPrimitiveMgr$2, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	GraphicsPrimitiveMgr$2();
	void init$();
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_GraphicsPrimitiveMgr$2_h_
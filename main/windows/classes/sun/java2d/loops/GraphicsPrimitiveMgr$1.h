#ifndef _sun_java2d_loops_GraphicsPrimitiveMgr$1_h_
#define _sun_java2d_loops_GraphicsPrimitiveMgr$1_h_
//$ class sun.java2d.loops.GraphicsPrimitiveMgr$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class GraphicsPrimitive;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class GraphicsPrimitiveMgr$1 : public ::java::util::Comparator {
	$class(GraphicsPrimitiveMgr$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	GraphicsPrimitiveMgr$1();
	void init$();
	virtual int32_t compare(::sun::java2d::loops::GraphicsPrimitive* o1, ::sun::java2d::loops::GraphicsPrimitive* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_GraphicsPrimitiveMgr$1_h_
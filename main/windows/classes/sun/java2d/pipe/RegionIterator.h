#ifndef _sun_java2d_pipe_RegionIterator_h_
#define _sun_java2d_pipe_RegionIterator_h_
//$ class sun.java2d.pipe.RegionIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class RegionIterator : public ::java::lang::Object {
	$class(RegionIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegionIterator();
	void init$(::sun::java2d::pipe::Region* r);
	virtual void copyStateFrom(::sun::java2d::pipe::RegionIterator* ri);
	virtual ::sun::java2d::pipe::RegionIterator* createCopy();
	virtual bool nextXBand($ints* range);
	virtual bool nextYRange($ints* range);
	::sun::java2d::pipe::Region* region = nullptr;
	int32_t curIndex = 0;
	int32_t numXbands = 0;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_RegionIterator_h_
#ifndef _sun_java2d_pipe_AATileGenerator_h_
#define _sun_java2d_pipe_AATileGenerator_h_
//$ interface sun.java2d.pipe.AATileGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace pipe {

class AATileGenerator : public ::java::lang::Object {
	$interface(AATileGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual void getAlpha($bytes* tile, int32_t offset, int32_t rowstride) {}
	virtual int32_t getTileHeight() {return 0;}
	virtual int32_t getTileWidth() {return 0;}
	virtual int32_t getTypicalAlpha() {return 0;}
	virtual void nextTile() {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_AATileGenerator_h_
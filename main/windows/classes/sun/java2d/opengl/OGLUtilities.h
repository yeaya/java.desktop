#ifndef _sun_java2d_opengl_OGLUtilities_h_
#define _sun_java2d_opengl_OGLUtilities_h_
//$ class sun.java2d.opengl.OGLUtilities
//$ extends java.lang.Object

#include <sun/java2d/opengl/OGLSurfaceData.h>

#pragma push_macro("FBOBJECT")
#undef FBOBJECT
#pragma push_macro("FLIP_BACKBUFFER")
#undef FLIP_BACKBUFFER
#pragma push_macro("TEXTURE")
#undef TEXTURE
#pragma push_macro("UNDEFINED")
#undef UNDEFINED
#pragma push_macro("WINDOW")
#undef WINDOW

namespace java {
	namespace awt {
		class Graphics;
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLUtilities : public ::java::lang::Object {
	$class(OGLUtilities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OGLUtilities();
	void init$();
	static ::java::awt::Rectangle* getOGLScissorBox(::java::awt::Graphics* g);
	static $Object* getOGLSurfaceIdentifier(::java::awt::Graphics* g);
	static int32_t getOGLSurfaceType(::java::awt::Graphics* g);
	static int32_t getOGLTextureType(::java::awt::Graphics* g);
	static ::java::awt::Rectangle* getOGLViewport(::java::awt::Graphics* g, int32_t componentWidth, int32_t componentHeight);
	static bool invokeWithOGLContextCurrent(::java::awt::Graphics* g, ::java::lang::Runnable* r);
	static bool invokeWithOGLSharedContextCurrent(::java::awt::GraphicsConfiguration* config, ::java::lang::Runnable* r);
	static bool isQueueFlusherThread();
	static const int32_t UNDEFINED = ::sun::java2d::opengl::OGLSurfaceData::UNDEFINED;
	static const int32_t WINDOW = ::sun::java2d::opengl::OGLSurfaceData::WINDOW;
	static const int32_t TEXTURE = ::sun::java2d::opengl::OGLSurfaceData::TEXTURE;
	static const int32_t FLIP_BACKBUFFER = ::sun::java2d::opengl::OGLSurfaceData::FLIP_BACKBUFFER;
	static const int32_t FBOBJECT = ::sun::java2d::opengl::OGLSurfaceData::FBOBJECT;
};

		} // opengl
	} // java2d
} // sun

#pragma pop_macro("FBOBJECT")
#pragma pop_macro("FLIP_BACKBUFFER")
#pragma pop_macro("TEXTURE")
#pragma pop_macro("UNDEFINED")
#pragma pop_macro("WINDOW")

#endif // _sun_java2d_opengl_OGLUtilities_h_
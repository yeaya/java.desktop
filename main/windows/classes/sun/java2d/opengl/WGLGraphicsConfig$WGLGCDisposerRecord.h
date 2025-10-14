#ifndef _sun_java2d_opengl_WGLGraphicsConfig$WGLGCDisposerRecord_h_
#define _sun_java2d_opengl_WGLGraphicsConfig$WGLGCDisposerRecord_h_
//$ class sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLGraphicsConfig$WGLGCDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(WGLGraphicsConfig$WGLGCDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	WGLGraphicsConfig$WGLGCDisposerRecord();
	void init$(int64_t pCfgInfo);
	virtual void dispose() override;
	int64_t pCfgInfo = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLGraphicsConfig$WGLGCDisposerRecord_h_
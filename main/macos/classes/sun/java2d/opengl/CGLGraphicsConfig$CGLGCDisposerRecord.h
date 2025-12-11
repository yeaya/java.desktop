#ifndef _sun_java2d_opengl_CGLGraphicsConfig$CGLGCDisposerRecord_h_
#define _sun_java2d_opengl_CGLGraphicsConfig$CGLGCDisposerRecord_h_
//$ class sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLGraphicsConfig$CGLGCDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(CGLGraphicsConfig$CGLGCDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	CGLGraphicsConfig$CGLGCDisposerRecord();
	void init$(int64_t pCfgInfo);
	virtual void dispose() override;
	int64_t pCfgInfo = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLGraphicsConfig$CGLGCDisposerRecord_h_
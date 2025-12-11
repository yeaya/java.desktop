#ifndef _sun_java2d_metal_MTLGraphicsConfig$MTLGCDisposerRecord_h_
#define _sun_java2d_metal_MTLGraphicsConfig$MTLGCDisposerRecord_h_
//$ class sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace java2d {
		namespace metal {

class MTLGraphicsConfig$MTLGCDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(MTLGraphicsConfig$MTLGCDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	MTLGraphicsConfig$MTLGCDisposerRecord();
	void init$(int64_t pCfgInfo);
	virtual void dispose() override;
	int64_t pCfgInfo = 0;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLGraphicsConfig$MTLGCDisposerRecord_h_
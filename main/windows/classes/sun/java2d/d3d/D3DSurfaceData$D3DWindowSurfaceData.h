#ifndef _sun_java2d_d3d_D3DSurfaceData$D3DWindowSurfaceData_h_
#define _sun_java2d_d3d_D3DSurfaceData$D3DWindowSurfaceData_h_
//$ class sun.java2d.d3d.D3DSurfaceData$D3DWindowSurfaceData
//$ extends sun.java2d.d3d.D3DSurfaceData

#include <sun/java2d/d3d/D3DSurfaceData.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}
namespace sun {
	namespace java2d {
		class StateTracker;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DGraphicsConfig;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceData$D3DWindowSurfaceData : public ::sun::java2d::d3d::D3DSurfaceData {
	$class(D3DSurfaceData$D3DWindowSurfaceData, $NO_CLASS_INIT, ::sun::java2d::d3d::D3DSurfaceData)
public:
	D3DSurfaceData$D3DWindowSurfaceData();
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::d3d::D3DGraphicsConfig* gc);
	virtual void disableAccelerationForSurface() override;
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual bool isDirty();
	virtual void markClean();
	virtual void restoreSurface() override;
	::sun::java2d::StateTracker* dirtyTracker = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceData$D3DWindowSurfaceData_h_
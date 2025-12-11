#ifndef _sun_lwawt_macosx_CDropTargetContextPeer_h_
#define _sun_lwawt_macosx_CDropTargetContextPeer_h_
//$ class sun.lwawt.macosx.CDropTargetContextPeer
//$ extends sun.awt.dnd.SunDropTargetContextPeer

#include <java/lang/Array.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetEvent;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CDropTargetContextPeer : public ::sun::awt::dnd::SunDropTargetContextPeer {
	$class(CDropTargetContextPeer, $NO_CLASS_INIT, ::sun::awt::dnd::SunDropTargetContextPeer)
public:
	CDropTargetContextPeer();
	void init$();
	void addTransfer(int64_t nativeDropTarget, int64_t nativeDropTransfer, int64_t format);
	virtual void doDropDone(bool success, int32_t dropAction, bool isLocal) override;
	void dropDone(int64_t nativeDropTarget, int64_t nativeDropTransfer, bool isLocal, bool success, int32_t dropAction);
	static ::sun::lwawt::macosx::CDropTargetContextPeer* getDropTargetContextPeer();
	virtual $Object* getNativeData(int64_t format) override;
	bool isEventInsideTarget(::sun::awt::dnd::SunDropTargetEvent* event);
	void newData(int64_t format, $bytes* data);
	virtual int32_t postDropTargetEvent(::java::awt::Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID, bool dispatchType) override;
	virtual void processDropMessage(::sun::awt::dnd::SunDropTargetEvent* event) override;
	virtual void processEnterMessage(::sun::awt::dnd::SunDropTargetEvent* event) override;
	virtual void processExitMessage(::sun::awt::dnd::SunDropTargetEvent* event) override;
	virtual void processMotionMessage(::sun::awt::dnd::SunDropTargetEvent* event, bool operationChanged) override;
	int64_t startTransfer(int64_t nativeDropTarget, int64_t format);
	void transferFailed(int64_t format);
	int64_t fNativeDropTransfer = 0;
	int64_t fNativeDataAvailable = 0;
	$Object* fNativeData = nullptr;
	::java::awt::dnd::DropTarget* insideTarget = nullptr;
	$Object* awtLockAccess = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CDropTargetContextPeer_h_
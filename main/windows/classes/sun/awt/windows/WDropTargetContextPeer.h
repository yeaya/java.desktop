#ifndef _sun_awt_windows_WDropTargetContextPeer_h_
#define _sun_awt_windows_WDropTargetContextPeer_h_
//$ class sun.awt.windows.WDropTargetContextPeer
//$ extends sun.awt.dnd.SunDropTargetContextPeer

#include <sun/awt/dnd/SunDropTargetContextPeer.h>

namespace java {
	namespace io {
		class FileInputStream;
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
	namespace awt {
		namespace windows {

class WDropTargetContextPeer : public ::sun::awt::dnd::SunDropTargetContextPeer {
	$class(WDropTargetContextPeer, $NO_CLASS_INIT, ::sun::awt::dnd::SunDropTargetContextPeer)
public:
	WDropTargetContextPeer();
	void init$();
	virtual void doDropDone(bool success, int32_t dropAction, bool isLocal) override;
	void dropDone(int64_t nativeContext, bool success, int32_t action);
	virtual void eventPosted(::sun::awt::dnd::SunDropTargetEvent* e) override;
	$Object* getData(int64_t nativeContext, int64_t format);
	static ::java::io::FileInputStream* getFileStream($String* file, int64_t stgmedium);
	static $Object* getIStream(int64_t istream);
	virtual $Object* getNativeData(int64_t format) override;
	static ::sun::awt::windows::WDropTargetContextPeer* getWDropTargetContextPeer();
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDropTargetContextPeer_h_
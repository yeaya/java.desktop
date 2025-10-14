#ifndef _sun_awt_windows_WDropTargetContextPeerFileStream_h_
#define _sun_awt_windows_WDropTargetContextPeerFileStream_h_
//$ class sun.awt.windows.WDropTargetContextPeerFileStream
//$ extends java.io.FileInputStream

#include <java/io/FileInputStream.h>

namespace sun {
	namespace awt {
		namespace windows {

class WDropTargetContextPeerFileStream : public ::java::io::FileInputStream {
	$class(WDropTargetContextPeerFileStream, $NO_CLASS_INIT, ::java::io::FileInputStream)
public:
	WDropTargetContextPeerFileStream();
	void init$($String* name, int64_t stgmedium);
	virtual void close() override;
	void freeStgMedium(int64_t stgmedium);
	using ::java::io::FileInputStream::readNBytes;
	int64_t stgmedium = 0;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDropTargetContextPeerFileStream_h_
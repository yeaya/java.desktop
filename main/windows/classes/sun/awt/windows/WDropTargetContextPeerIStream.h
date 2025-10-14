#ifndef _sun_awt_windows_WDropTargetContextPeerIStream_h_
#define _sun_awt_windows_WDropTargetContextPeerIStream_h_
//$ class sun.awt.windows.WDropTargetContextPeerIStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace sun {
	namespace awt {
		namespace windows {

class WDropTargetContextPeerIStream : public ::java::io::InputStream {
	$class(WDropTargetContextPeerIStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	WDropTargetContextPeerIStream();
	void init$(int64_t istream);
	int32_t Available(int64_t istream);
	void Close(int64_t istream);
	int32_t Read(int64_t istream);
	int32_t ReadBytes(int64_t istream, $bytes* b, int32_t off, int32_t len);
	virtual int32_t available() override;
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int64_t istream = 0;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDropTargetContextPeerIStream_h_
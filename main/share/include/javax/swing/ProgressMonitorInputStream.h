#ifndef _javax_swing_ProgressMonitorInputStream_h_
#define _javax_swing_ProgressMonitorInputStream_h_
//$ class javax.swing.ProgressMonitorInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace javax {
	namespace swing {
		class ProgressMonitor;
	}
}

namespace javax {
	namespace swing {

class $import ProgressMonitorInputStream : public ::java::io::FilterInputStream {
	$class(ProgressMonitorInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	ProgressMonitorInputStream();
	void init$(::java::awt::Component* parentComponent, Object$* message, ::java::io::InputStream* in);
	virtual void close() override;
	virtual ::javax::swing::ProgressMonitor* getProgressMonitor();
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::javax::swing::ProgressMonitor* monitor = nullptr;
	int32_t nread = 0;
	int32_t size = 0;
};

	} // swing
} // javax

#endif // _javax_swing_ProgressMonitorInputStream_h_
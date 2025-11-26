#ifndef _sun_awt_datatransfer_DataTransferer$ReencodingInputStream_h_
#define _sun_awt_datatransfer_DataTransferer$ReencodingInputStream_h_
//$ class sun.awt.datatransfer.DataTransferer$ReencodingInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace java {
	namespace io {
		class BufferedReader;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class DataTransferer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class DataTransferer$ReencodingInputStream : public ::java::io::InputStream {
	$class(DataTransferer$ReencodingInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	DataTransferer$ReencodingInputStream();
	void init$(::sun::awt::datatransfer::DataTransferer* this$0, ::java::io::InputStream* bytestream, int64_t format, $String* targetEncoding, ::java::awt::datatransfer::Transferable* localeTransferable);
	virtual int32_t available() override;
	virtual void close() override;
	bool matchCharArray($chars* array, int32_t c);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	int32_t readChar();
	::sun::awt::datatransfer::DataTransferer* this$0 = nullptr;
	::java::io::BufferedReader* wrapped = nullptr;
	$chars* in = nullptr;
	$bytes* out = nullptr;
	::java::nio::charset::CharsetEncoder* encoder = nullptr;
	::java::nio::CharBuffer* inBuf = nullptr;
	::java::nio::ByteBuffer* outBuf = nullptr;
	$chars* eoln = nullptr;
	int32_t numTerminators = 0;
	bool eos = false;
	int32_t index = 0;
	int32_t limit = 0;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_DataTransferer$ReencodingInputStream_h_
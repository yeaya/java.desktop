#ifndef _sun_awt_datatransfer_DataTransferer$2_h_
#define _sun_awt_datatransfer_DataTransferer$2_h_
//$ class sun.awt.datatransfer.DataTransferer$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Stack;
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

class DataTransferer$2 : public ::java::lang::Runnable {
	$class(DataTransferer$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DataTransferer$2();
	void init$(::sun::awt::datatransfer::DataTransferer* this$0, ::java::util::Map* val$formatMap, int64_t val$format, ::java::awt::datatransfer::Transferable* val$contents, ::java::util::Stack* val$stack);
	virtual void run() override;
	::sun::awt::datatransfer::DataTransferer* this$0 = nullptr;
	::java::util::Stack* val$stack = nullptr;
	::java::awt::datatransfer::Transferable* val$contents = nullptr;
	int64_t val$format = 0;
	::java::util::Map* val$formatMap = nullptr;
	bool done = false;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_DataTransferer$2_h_
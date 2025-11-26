#ifndef _sun_print_PrintJob2D$MessageQ_h_
#define _sun_print_PrintJob2D$MessageQ_h_
//$ class sun.print.PrintJob2D$MessageQ
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics2D;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace print {
		class PrintJob2D;
	}
}

namespace sun {
	namespace print {

class PrintJob2D$MessageQ : public ::java::lang::Object {
	$class(PrintJob2D$MessageQ, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PrintJob2D$MessageQ();
	void init$(::sun::print::PrintJob2D* this$0, $String* id);
	virtual bool append(::java::awt::Graphics2D* g);
	virtual void close();
	virtual void closeWhenEmpty();
	virtual bool isClosed();
	virtual ::java::awt::Graphics2D* pop();
	::sun::print::PrintJob2D* this$0 = nullptr;
	$String* qid = nullptr;
	::java::util::ArrayList* queue = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrintJob2D$MessageQ_h_
#ifndef _AbstractDocumentUndoConcurrentTest_h_
#define _AbstractDocumentUndoConcurrentTest_h_
//$ class AbstractDocumentUndoConcurrentTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Format;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CyclicBarrier;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class PlainDocument;
		}
	}
}

class $export AbstractDocumentUndoConcurrentTest : public ::java::lang::Object {
	$class(AbstractDocumentUndoConcurrentTest, 0, ::java::lang::Object)
public:
	AbstractDocumentUndoConcurrentTest();
	void init$();
	static void main($StringArray* args);
	static void test();
	static ::java::util::concurrent::CyclicBarrier* barrier;
	static ::javax::swing::text::PlainDocument* doc1;
	static ::javax::swing::text::PlainDocument* doc2;
	static ::java::text::Format* format1;
	static ::java::text::Format* format2;
};

#endif // _AbstractDocumentUndoConcurrentTest_h_
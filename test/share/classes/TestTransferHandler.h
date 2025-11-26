#ifndef _TestTransferHandler_h_
#define _TestTransferHandler_h_
//$ class TestTransferHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestTransferHandler : public ::java::lang::Object {
	$class(TestTransferHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestTransferHandler();
	void init$();
	static void main($StringArray* args);
	static void testTransferHandler();
};

#endif // _TestTransferHandler_h_
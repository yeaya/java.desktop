#ifndef _java_awt_PrintJob_h_
#define _java_awt_PrintJob_h_
//$ class java.awt.PrintJob
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}

namespace java {
	namespace awt {

class $import PrintJob : public ::java::lang::Object {
	$class(PrintJob, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	PrintJob();
	void init$();
	virtual void end() {}
	virtual void finalize() override;
	virtual ::java::awt::Graphics* getGraphics() {return nullptr;}
	virtual ::java::awt::Dimension* getPageDimension() {return nullptr;}
	virtual int32_t getPageResolution() {return 0;}
	virtual bool lastPageFirst() {return false;}
};

	} // awt
} // java

#endif // _java_awt_PrintJob_h_
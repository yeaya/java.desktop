#ifndef _Test_h_
#define _Test_h_
//$ interface Test
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export Test : public ::java::lang::annotation::Annotation {
	$interface(Test, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool onEDT() {return false;}
	virtual int32_t value() {return 0;}
};

#endif // _Test_h_
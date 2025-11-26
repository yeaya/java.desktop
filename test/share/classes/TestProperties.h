#ifndef _TestProperties_h_
#define _TestProperties_h_
//$ class TestProperties
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestProperties : public ::java::lang::Object {
	$class(TestProperties, 0, ::java::lang::Object)
public:
	TestProperties();
	void init$();
	static void main($StringArray* args);
	static void test($StringArray* properties);
	static $StringArray* windowsProperties;
	static $StringArray* aquaProperties;
	static $StringArray* gtkProperties;
	static $StringArray* motifProperties;
	static $StringArray* nimbusProperties;
	static $StringArray* metalProperties;
};

#endif // _TestProperties_h_
#ifndef _IconCoord_h_
#define _IconCoord_h_
//$ class IconCoord
//$ extends java.lang.Object

#include <java/lang/Array.h>

class IconCoord$Test;

class $export IconCoord : public ::java::lang::Object {
	$class(IconCoord, 0, ::java::lang::Object)
public:
	IconCoord();
	void init$();
	void createAndShowGUI();
	static void main($StringArray* args);
	static ::IconCoord$Test* test;
};

#endif // _IconCoord_h_
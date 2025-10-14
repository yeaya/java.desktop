#ifndef _HeadlessPopupFactory_h_
#define _HeadlessPopupFactory_h_
//$ class HeadlessPopupFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessPopupFactory : public ::java::lang::Object {
	$class(HeadlessPopupFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessPopupFactory();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessPopupFactory_h_
#ifndef _HeadlessJFileChooser_h_
#define _HeadlessJFileChooser_h_
//$ class HeadlessJFileChooser
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJFileChooser : public ::java::lang::Object {
	$class(HeadlessJFileChooser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJFileChooser();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJFileChooser_h_
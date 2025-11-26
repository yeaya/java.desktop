#ifndef _HeadlessJTextArea_h_
#define _HeadlessJTextArea_h_
//$ class HeadlessJTextArea
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJTextArea : public ::java::lang::Object {
	$class(HeadlessJTextArea, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJTextArea();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJTextArea_h_
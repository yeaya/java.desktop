#ifndef _HeadlessJList_h_
#define _HeadlessJList_h_
//$ class HeadlessJList
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJList : public ::java::lang::Object {
	$class(HeadlessJList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJList();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJList_h_
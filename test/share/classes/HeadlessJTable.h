#ifndef _HeadlessJTable_h_
#define _HeadlessJTable_h_
//$ class HeadlessJTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJTable : public ::java::lang::Object {
	$class(HeadlessJTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJTable();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJTable_h_
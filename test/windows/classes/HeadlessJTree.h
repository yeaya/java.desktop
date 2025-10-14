#ifndef _HeadlessJTree_h_
#define _HeadlessJTree_h_
//$ class HeadlessJTree
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJTree : public ::java::lang::Object {
	$class(HeadlessJTree, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJTree();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJTree_h_
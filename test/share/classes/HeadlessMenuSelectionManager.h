#ifndef _HeadlessMenuSelectionManager_h_
#define _HeadlessMenuSelectionManager_h_
//$ class HeadlessMenuSelectionManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessMenuSelectionManager : public ::java::lang::Object {
	$class(HeadlessMenuSelectionManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessMenuSelectionManager();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessMenuSelectionManager_h_
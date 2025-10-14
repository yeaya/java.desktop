#ifndef _HeadlessJEditorPane_h_
#define _HeadlessJEditorPane_h_
//$ class HeadlessJEditorPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJEditorPane : public ::java::lang::Object {
	$class(HeadlessJEditorPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJEditorPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJEditorPane_h_
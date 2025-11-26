#ifndef _HeadlessJPanel_h_
#define _HeadlessJPanel_h_
//$ class HeadlessJPanel
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJPanel : public ::java::lang::Object {
	$class(HeadlessJPanel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJPanel();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJPanel_h_
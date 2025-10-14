#ifndef _HeadlessGrayFilter_h_
#define _HeadlessGrayFilter_h_
//$ class HeadlessGrayFilter
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessGrayFilter : public ::java::lang::Object {
	$class(HeadlessGrayFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessGrayFilter();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessGrayFilter_h_
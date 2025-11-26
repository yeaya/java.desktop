#ifndef _java_awt_GridBagLayoutInfo_h_
#define _java_awt_GridBagLayoutInfo_h_
//$ class java.awt.GridBagLayoutInfo
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {

class $import GridBagLayoutInfo : public ::java::io::Serializable {
	$class(GridBagLayoutInfo, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	GridBagLayoutInfo();
	void init$(int32_t width, int32_t height);
	virtual bool hasBaseline(int32_t row);
	virtual bool hasConstantDescent(int32_t row);
	static const int64_t serialVersionUID = (int64_t)0xBC01C6AFEB0F34D7;
	int32_t width = 0;
	int32_t height = 0;
	int32_t startx = 0;
	int32_t starty = 0;
	$ints* minWidth = nullptr;
	$ints* minHeight = nullptr;
	$doubles* weightX = nullptr;
	$doubles* weightY = nullptr;
	bool hasBaseline$ = false;
	$shorts* baselineType = nullptr;
	$ints* maxAscent = nullptr;
	$ints* maxDescent = nullptr;
};

	} // awt
} // java

#endif // _java_awt_GridBagLayoutInfo_h_
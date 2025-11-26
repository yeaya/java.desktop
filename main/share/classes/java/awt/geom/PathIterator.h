#ifndef _java_awt_geom_PathIterator_h_
#define _java_awt_geom_PathIterator_h_
//$ interface java.awt.geom.PathIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SEG_CLOSE")
#undef SEG_CLOSE
#pragma push_macro("SEG_CUBICTO")
#undef SEG_CUBICTO
#pragma push_macro("SEG_LINETO")
#undef SEG_LINETO
#pragma push_macro("SEG_MOVETO")
#undef SEG_MOVETO
#pragma push_macro("SEG_QUADTO")
#undef SEG_QUADTO
#pragma push_macro("WIND_EVEN_ODD")
#undef WIND_EVEN_ODD
#pragma push_macro("WIND_NON_ZERO")
#undef WIND_NON_ZERO

namespace java {
	namespace awt {
		namespace geom {

class $export PathIterator : public ::java::lang::Object {
	$interface(PathIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t currentSegment($floats* coords) {return 0;}
	virtual int32_t currentSegment($doubles* coords) {return 0;}
	virtual int32_t getWindingRule() {return 0;}
	virtual bool isDone() {return false;}
	virtual void next() {}
	static const int32_t WIND_EVEN_ODD = 0;
	static const int32_t WIND_NON_ZERO = 1;
	static const int32_t SEG_MOVETO = 0;
	static const int32_t SEG_LINETO = 1;
	static const int32_t SEG_QUADTO = 2;
	static const int32_t SEG_CUBICTO = 3;
	static const int32_t SEG_CLOSE = 4;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("SEG_CLOSE")
#pragma pop_macro("SEG_CUBICTO")
#pragma pop_macro("SEG_LINETO")
#pragma pop_macro("SEG_MOVETO")
#pragma pop_macro("SEG_QUADTO")
#pragma pop_macro("WIND_EVEN_ODD")
#pragma pop_macro("WIND_NON_ZERO")

#endif // _java_awt_geom_PathIterator_h_
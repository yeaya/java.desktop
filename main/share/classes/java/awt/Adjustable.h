#ifndef _java_awt_Adjustable_h_
#define _java_awt_Adjustable_h_
//$ interface java.awt.Adjustable
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("NO_ORIENTATION")
#undef NO_ORIENTATION
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace java {
	namespace awt {
		namespace event {
			class AdjustmentListener;
		}
	}
}

namespace java {
	namespace awt {

class $export Adjustable : public ::java::lang::Object {
	$interface(Adjustable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addAdjustmentListener(::java::awt::event::AdjustmentListener* l) {}
	virtual int32_t getBlockIncrement() {return 0;}
	virtual int32_t getMaximum() {return 0;}
	virtual int32_t getMinimum() {return 0;}
	virtual int32_t getOrientation() {return 0;}
	virtual int32_t getUnitIncrement() {return 0;}
	virtual int32_t getValue() {return 0;}
	virtual int32_t getVisibleAmount() {return 0;}
	virtual void removeAdjustmentListener(::java::awt::event::AdjustmentListener* l) {}
	virtual void setBlockIncrement(int32_t b) {}
	virtual void setMaximum(int32_t max) {}
	virtual void setMinimum(int32_t min) {}
	virtual void setUnitIncrement(int32_t u) {}
	virtual void setValue(int32_t v) {}
	virtual void setVisibleAmount(int32_t v) {}
	static const int32_t HORIZONTAL = 0;
	static const int32_t VERTICAL = 1;
	static const int32_t NO_ORIENTATION = 2;
};

	} // awt
} // java

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("NO_ORIENTATION")
#pragma pop_macro("VERTICAL")

#endif // _java_awt_Adjustable_h_
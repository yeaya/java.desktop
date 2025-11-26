#ifndef _javax_swing_BoundedRangeModel_h_
#define _javax_swing_BoundedRangeModel_h_
//$ interface javax.swing.BoundedRangeModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}

namespace javax {
	namespace swing {

class $import BoundedRangeModel : public ::java::lang::Object {
	$interface(BoundedRangeModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addChangeListener(::javax::swing::event::ChangeListener* x) {}
	virtual int32_t getExtent() {return 0;}
	virtual int32_t getMaximum() {return 0;}
	virtual int32_t getMinimum() {return 0;}
	virtual int32_t getValue() {return 0;}
	virtual bool getValueIsAdjusting() {return false;}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* x) {}
	virtual void setExtent(int32_t newExtent) {}
	virtual void setMaximum(int32_t newMaximum) {}
	virtual void setMinimum(int32_t newMinimum) {}
	virtual void setRangeProperties(int32_t value, int32_t extent, int32_t min, int32_t max, bool adjusting) {}
	virtual void setValue(int32_t newValue) {}
	virtual void setValueIsAdjusting(bool b) {}
};

	} // swing
} // javax

#endif // _javax_swing_BoundedRangeModel_h_
#ifndef _javax_swing_colorchooser_ColorModel_h_
#define _javax_swing_colorchooser_ColorModel_h_
//$ class javax.swing.colorchooser.ColorModel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class ColorModel : public ::java::lang::Object {
	$class(ColorModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ColorModel();
	void init$($String* name, $StringArray* labels);
	void init$();
	virtual int32_t getColor($floats* model);
	virtual int32_t getCount();
	virtual float getDefault(int32_t index);
	int32_t getInteger(::java::awt::Component* component, $String* suffix);
	$String* getLabel(::java::awt::Component* component, int32_t index);
	virtual int32_t getMaximum(int32_t index);
	virtual int32_t getMinimum(int32_t index);
	$String* getText(::java::awt::Component* component, $String* suffix);
	static float normalize(int32_t value);
	virtual void setColor(int32_t color, $floats* model);
	static int32_t to8bit(float value);
	$String* prefix = nullptr;
	$StringArray* labels = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorModel_h_
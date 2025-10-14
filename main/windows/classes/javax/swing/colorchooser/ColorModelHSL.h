#ifndef _javax_swing_colorchooser_ColorModelHSL_h_
#define _javax_swing_colorchooser_ColorModelHSL_h_
//$ class javax.swing.colorchooser.ColorModelHSL
//$ extends javax.swing.colorchooser.ColorModel

#include <java/lang/Array.h>
#include <javax/swing/colorchooser/ColorModel.h>

namespace javax {
	namespace swing {
		namespace colorchooser {

class ColorModelHSL : public ::javax::swing::colorchooser::ColorModel {
	$class(ColorModelHSL, $NO_CLASS_INIT, ::javax::swing::colorchooser::ColorModel)
public:
	ColorModelHSL();
	void init$();
	static $floats* HSLtoRGB($floats* hsl, $floats* rgb);
	static $floats* RGBtoHSL($floats* rgb, $floats* hsl);
	virtual int32_t getColor($floats* space) override;
	virtual float getDefault(int32_t index) override;
	static float getHue(float red, float green, float blue, float max, float min);
	virtual int32_t getMaximum(int32_t index) override;
	static float max(float red, float green, float blue);
	static float min(float red, float green, float blue);
	static float normalize(float q, float p, float color);
	virtual void setColor(int32_t color, $floats* space) override;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorModelHSL_h_
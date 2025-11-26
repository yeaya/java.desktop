#ifndef _javax_swing_colorchooser_ColorModelHSV_h_
#define _javax_swing_colorchooser_ColorModelHSV_h_
//$ class javax.swing.colorchooser.ColorModelHSV
//$ extends javax.swing.colorchooser.ColorModel

#include <java/lang/Array.h>
#include <javax/swing/colorchooser/ColorModel.h>

namespace javax {
	namespace swing {
		namespace colorchooser {

class ColorModelHSV : public ::javax::swing::colorchooser::ColorModel {
	$class(ColorModelHSV, $NO_CLASS_INIT, ::javax::swing::colorchooser::ColorModel)
public:
	ColorModelHSV();
	void init$();
	static $floats* HSVtoRGB($floats* hsv, $floats* rgb);
	static $floats* RGBtoHSV($floats* rgb, $floats* hsv);
	virtual int32_t getColor($floats* space) override;
	virtual float getDefault(int32_t index) override;
	virtual int32_t getMaximum(int32_t index) override;
	virtual void setColor(int32_t color, $floats* space) override;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorModelHSV_h_
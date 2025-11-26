#ifndef _javax_swing_colorchooser_ColorModelCMYK_h_
#define _javax_swing_colorchooser_ColorModelCMYK_h_
//$ class javax.swing.colorchooser.ColorModelCMYK
//$ extends javax.swing.colorchooser.ColorModel

#include <java/lang/Array.h>
#include <javax/swing/colorchooser/ColorModel.h>

namespace javax {
	namespace swing {
		namespace colorchooser {

class ColorModelCMYK : public ::javax::swing::colorchooser::ColorModel {
	$class(ColorModelCMYK, $NO_CLASS_INIT, ::javax::swing::colorchooser::ColorModel)
public:
	ColorModelCMYK();
	void init$();
	static $floats* CMYKtoRGB($floats* cmyk, $floats* rgb);
	static $floats* RGBtoCMYK($floats* rgb, $floats* cmyk);
	virtual int32_t getColor($floats* space) override;
	virtual void setColor(int32_t color, $floats* space) override;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorModelCMYK_h_
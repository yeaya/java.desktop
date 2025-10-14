#ifndef _javax_swing_text_Position$Bias_h_
#define _javax_swing_text_Position$Bias_h_
//$ class javax.swing.text.Position$Bias
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {

class $import Position$Bias : public ::java::lang::Object {
	$class(Position$Bias, 0, ::java::lang::Object)
public:
	Position$Bias();
	void init$($String* name);
	virtual $String* toString() override;
	static ::javax::swing::text::Position$Bias* Forward;
	static ::javax::swing::text::Position$Bias* Backward;
	$String* name = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Position$Bias_h_
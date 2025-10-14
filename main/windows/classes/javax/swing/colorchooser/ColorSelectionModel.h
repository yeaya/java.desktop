#ifndef _javax_swing_colorchooser_ColorSelectionModel_h_
#define _javax_swing_colorchooser_ColorSelectionModel_h_
//$ interface javax.swing.colorchooser.ColorSelectionModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class $export ColorSelectionModel : public ::java::lang::Object {
	$interface(ColorSelectionModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addChangeListener(::javax::swing::event::ChangeListener* listener) {}
	virtual ::java::awt::Color* getSelectedColor() {return nullptr;}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* listener) {}
	virtual void setSelectedColor(::java::awt::Color* color) {}
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_ColorSelectionModel_h_
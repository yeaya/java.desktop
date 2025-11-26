#ifndef _javax_swing_ButtonGroup_h_
#define _javax_swing_ButtonGroup_h_
//$ class javax.swing.ButtonGroup
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class ButtonModel;
	}
}

namespace javax {
	namespace swing {

class $import ButtonGroup : public ::java::io::Serializable {
	$class(ButtonGroup, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ButtonGroup();
	void init$();
	virtual void add(::javax::swing::AbstractButton* b);
	virtual void clearSelection();
	virtual int32_t getButtonCount();
	virtual ::java::util::Enumeration* getElements();
	virtual ::javax::swing::ButtonModel* getSelection();
	virtual bool isSelected(::javax::swing::ButtonModel* m);
	virtual void remove(::javax::swing::AbstractButton* b);
	virtual void setSelected(::javax::swing::ButtonModel* m, bool b);
	::java::util::Vector* buttons = nullptr;
	::javax::swing::ButtonModel* selection = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ButtonGroup_h_
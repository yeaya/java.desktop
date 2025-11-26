#ifndef _java_awt_CheckboxGroup_h_
#define _java_awt_CheckboxGroup_h_
//$ class java.awt.CheckboxGroup
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Checkbox;
	}
}

namespace java {
	namespace awt {

class $export CheckboxGroup : public ::java::io::Serializable {
	$class(CheckboxGroup, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CheckboxGroup();
	void init$();
	virtual ::java::awt::Checkbox* getCurrent();
	virtual ::java::awt::Checkbox* getSelectedCheckbox();
	virtual void setCurrent(::java::awt::Checkbox* box);
	virtual void setSelectedCheckbox(::java::awt::Checkbox* box);
	virtual $String* toString() override;
	::java::awt::Checkbox* selectedCheckbox = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x33C2D73B60B5EA17;
};

	} // awt
} // java

#endif // _java_awt_CheckboxGroup_h_
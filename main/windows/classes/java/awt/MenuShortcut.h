#ifndef _java_awt_MenuShortcut_h_
#define _java_awt_MenuShortcut_h_
//$ class java.awt.MenuShortcut
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {

class $export MenuShortcut : public ::java::io::Serializable {
	$class(MenuShortcut, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	MenuShortcut();
	void init$(int32_t key);
	void init$(int32_t key, bool useShiftModifier);
	virtual bool equals(::java::awt::MenuShortcut* s);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getKey();
	virtual int32_t hashCode() override;
	virtual $String* paramString();
	virtual $String* toString() override;
	virtual bool usesShiftModifier();
	int32_t key = 0;
	bool usesShift = false;
	static const int64_t serialVersionUID = (int64_t)0x01FDA185A2682441;
};

	} // awt
} // java

#endif // _java_awt_MenuShortcut_h_
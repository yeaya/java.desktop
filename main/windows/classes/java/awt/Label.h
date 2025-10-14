#ifndef _java_awt_Label_h_
#define _java_awt_Label_h_
//$ class java.awt.Label
//$ extends java.awt.Component
//$ implements javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>

#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export Label : public ::java::awt::Component, public ::javax::accessibility::Accessible {
	$class(Label, 0, ::java::awt::Component, ::javax::accessibility::Accessible)
public:
	Label();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* text);
	void init$($String* text, int32_t alignment);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getAlignment();
	virtual $String* getText();
	static void initIDs();
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setAlignment(int32_t alignment);
	virtual void setText($String* text);
	virtual $String* toString() override;
	static const int32_t LEFT = 0;
	static const int32_t CENTER = 1;
	static const int32_t RIGHT = 2;
	$String* text = nullptr;
	int32_t alignment = 0;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x2AF08BE4B03C342C;
};

	} // awt
} // java

#pragma pop_macro("CENTER")
#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")

#endif // _java_awt_Label_h_
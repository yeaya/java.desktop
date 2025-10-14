#ifndef _java_awt_Insets_h_
#define _java_awt_Insets_h_
//$ class java.awt.Insets
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {

class $export Insets : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(Insets, 0, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	Insets();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static void initIDs();
	virtual void set(int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual $String* toString() override;
	int32_t top = 0;
	int32_t left = 0;
	int32_t bottom = 0;
	int32_t right = 0;
	static const int64_t serialVersionUID = (int64_t)0xE076333A03E3A303;
};

	} // awt
} // java

#endif // _java_awt_Insets_h_
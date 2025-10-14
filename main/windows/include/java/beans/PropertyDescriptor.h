#ifndef _java_beans_PropertyDescriptor_h_
#define _java_beans_PropertyDescriptor_h_
//$ class java.beans.PropertyDescriptor
//$ extends java.beans.FeatureDescriptor

#include <java/beans/FeatureDescriptor.h>

namespace java {
	namespace beans {
		class MethodRef;
		class PropertyEditor;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace java {
	namespace beans {

class $import PropertyDescriptor : public ::java::beans::FeatureDescriptor {
	$class(PropertyDescriptor, $NO_CLASS_INIT, ::java::beans::FeatureDescriptor)
public:
	PropertyDescriptor();
	void init$($String* propertyName, $Class* beanClass);
	void init$($String* propertyName, $Class* beanClass, $String* readMethodName, $String* writeMethodName);
	void init$($String* propertyName, ::java::lang::reflect::Method* readMethod, ::java::lang::reflect::Method* writeMethod);
	void init$(::java::util::Map$Entry* entry, bool bound);
	void init$(::java::beans::PropertyDescriptor* x, ::java::beans::PropertyDescriptor* y);
	void init$(::java::beans::PropertyDescriptor* old);
	virtual void appendTo(::java::lang::StringBuilder* sb) override;
	virtual bool compareMethods(::java::lang::reflect::Method* a, ::java::lang::reflect::Method* b);
	virtual ::java::beans::PropertyEditor* createPropertyEditor(Object$* bean);
	virtual bool equals(Object$* obj) override;
	$Class* findPropertyType(::java::lang::reflect::Method* readMethod, ::java::lang::reflect::Method* writeMethod);
	virtual $String* getBaseName();
	virtual $Class* getPropertyEditorClass();
	virtual $Class* getPropertyType();
	$Class* getPropertyType0();
	virtual ::java::lang::reflect::Method* getReadMethod();
	virtual ::java::lang::reflect::Method* getWriteMethod();
	virtual int32_t hashCode() override;
	virtual bool isAssignable(::java::lang::reflect::Method* m1, ::java::lang::reflect::Method* m2);
	virtual bool isBound();
	virtual bool isConstrained();
	virtual void setBound(bool bound);
	virtual void setClass0($Class* clz) override;
	virtual void setConstrained(bool constrained);
	virtual void setPropertyEditorClass($Class* propertyEditorClass);
	void setPropertyType($Class* type);
	virtual void setReadMethod(::java::lang::reflect::Method* readMethod);
	void setReadMethod0(::java::lang::reflect::Method* readMethod);
	virtual void setWriteMethod(::java::lang::reflect::Method* writeMethod);
	void setWriteMethod0(::java::lang::reflect::Method* writeMethod);
	virtual void updateGenericsFor($Class* type);
	::java::lang::ref::Reference* propertyTypeRef = nullptr;
	::java::beans::MethodRef* readMethodRef = nullptr;
	::java::beans::MethodRef* writeMethodRef = nullptr;
	::java::lang::ref::Reference* propertyEditorClassRef = nullptr;
	bool bound = false;
	bool constrained = false;
	$String* baseName = nullptr;
	$String* writeMethodName = nullptr;
	$String* readMethodName = nullptr;
};

	} // beans
} // java

#endif // _java_beans_PropertyDescriptor_h_